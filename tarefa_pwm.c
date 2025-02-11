#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"

#define SERVO_PIN 22    // GPIO usada para o PWM do servomotor
#define LED_PIN 12      // GPIO usada para o LED RGB
#define PWM_WRAP 20000  // Contador máximo do PWM para 50Hz (20ms)

// Função para configurar o PWM
void setup_pwm() {
    gpio_set_function(SERVO_PIN, GPIO_FUNC_PWM);  // Habilita a GPIO como PWM
    uint slice = pwm_gpio_to_slice_num(SERVO_PIN); // Obtém o canal (slice) do PWM

    pwm_set_clkdiv(slice, 125.0);  // Define o divisor de clock do PWM para 50Hz (20ms)
    pwm_set_wrap(slice, PWM_WRAP); // Define o valor de wrap (máximo do contador PWM)
    pwm_set_enabled(slice, true);  // Habilita o PWM no slice correspondente
}

// Função para definir a posição do servomotor
void set_servo_position(uint slice, uint16_t pulse_width_us) {
    uint duty_cycle = (pulse_width_us * PWM_WRAP) / 20000;  // Calcula o duty cycle baseado no pulso em µs
    pwm_set_gpio_level(SERVO_PIN, duty_cycle);  // Define o ciclo de trabalho do PWM
}

// Função para configurar o LED RGB
void setup_led() {
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
}

int main() {
    stdio_init_all();   // Inicializa a biblioteca padrão
    setup_pwm();        // Configura o PWM para o servomotor
    setup_led();        // Configura o LED RGB

    uint slice = pwm_gpio_to_slice_num(SERVO_PIN); // Obtém o slice do PWM

    // 2) Ajusta a posição para 180° (pulso de 2400µs)
    set_servo_position(slice, 2400);
    sleep_ms(5000);  // Aguarda 5 segundos

    // 3) Ajusta a posição para 90° (pulso de 1470µs)
    set_servo_position(slice, 1470);
    sleep_ms(5000);  // Aguarda 5 segundos

    // 4) Ajusta a posição para 0° (pulso de 500µs)
    set_servo_position(slice, 500);
    sleep_ms(5000);  // Aguarda 5 segundos

    // 5) Movimentação suave entre 0° e 180°
    for (int i = 500; i <= 2400; i += 5) {
        set_servo_position(slice, i);  // Aumenta suavemente o ciclo ativo
        sleep_ms(10);   // Atraso de 10ms
    }
    for (int i = 2400; i >= 500; i -= 5) {
        set_servo_position(slice, i);  // Diminui suavemente o ciclo ativo
        sleep_ms(10);   // Atraso de 10ms
    }

    // 6) Experimento com o LED RGB (com GPIO 12)
    gpio_put(LED_PIN, 1); // Acende o LED
    sleep_ms(1000);  // Mantém o LED aceso por 1 segundo
    gpio_put(LED_PIN, 0); // Apaga o LED
    sleep_ms(1000);  // Mantém o LED apagado por 1 segundo

    // Subir e descer continuamente entre 0° e 180°
    while (true) {
        for (int i = 500; i <= 2400; i += 5) {
            set_servo_position(slice, i);  // Aumenta suavemente o ciclo ativo
            sleep_ms(10);   // Atraso de 10ms
        }
        for (int i = 2400; i >= 500; i -= 5) {
            set_servo_position(slice, i);  // Diminui suavemente o ciclo ativo
            sleep_ms(10);   // Atraso de 10ms
        }
    }

    return 0;
}
