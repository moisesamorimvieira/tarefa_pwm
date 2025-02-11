<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=02A6F4&height=120&section=header"/>
<h1 align="center">Embarcatec | Unidade 4 | Capítulo 7 /  PWM - Atividade: Controle de servomotor por PWM. </h1>

<div align="center">  
  <img width=40% src="http://img.shields.io/static/v1?label=STATUS&message=EM%20DESENVOLVIMENTO&color=02A6F4&style=for-the-badge"/>
</div>

## Objetivo do Projeto
Atividade: Controle de servomotor por PWM.
Com o emprego do módulo PWM (do inglês, Pulse Width Modulation), presente no microcontrolador RP2040, projete um sistema com a ferramenta Pico SDK para simular o controle do ângulo de um servomotor. Esta simulação contemplará o motor micro servo padrão, presente no simulador de eletrônica online Wokwi.

1) Microcontrolador Raspberry Pi Pico W.
2) Servomotor – motor micro servo padrão – Wokwi.

## 🗒️ Lista de requisitos

## Os requisitos para a realização desta atividade são:

1) Considerando a GPIO 22, defina a sua frequência de PWM para, aproximadamente, 50Hz – período de 20ms. (20% da nota).

2) Defina o ciclo ativo do módulo PWM para 2.400μs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,12%. isto ajustará a flange (braço) do servomotor para a posição de, aproximadamente, 180 graus. Aguarde 05 segundos nesta posição. (10% da nota)

3) Defina o ciclo ativo do módulo PWM para 1.470μs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,0735%. Isto ajustará a flange do servomotor para a posição de, aproximadamente, 90 graus. Aguarde 05 segundos nesta posição. (10% da nota)

4) Defina o ciclo ativo do módulo PWM para 500μs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,025%. Isto ajustará a flange do servomotor para a posição de, aproximadamente, 0 graus. Aguarde 05 segundos nesta posição. (10% da nota)

5) Após a realização das proposições anteriores, crie uma rotina para movimentação periódica do braço do servomotor entre os ângulos de 0 e 180 graus. Obs.: a movimentação da flange deve ser suave, recomenda-se o incremento de ciclo ativo de ±5μs, com um atraso de ajuste de 10ms. (35% da nota)

6) Com o emprego da Ferramenta Educacional BitDogLab, faça um experimento com o código deste exercício utilizando o LED RGB – GPIO 12. O que o discente observou no comportamento da iluminação do referido LED? (15% da nota)
   
## 🛠 Tecnologias

1. **Git e Github**;
2. **VScode**;
3. **Linguagem C**;
4. **Software de emulação PuTTy. (Opcional para testes)**
5. **Extensões no VScode do Raspberry Pi Pico Project e CMake**
6. **Wokwi**;

## 🔧 Funcionalidades Implementadas:

## Funcionalidades do Código

• Destacamos aqui alguns passos necessários para este projeto.

• Deve-se utilizar o ambiente de desenvolvimento VS Code em todas as duas atividades;

• Os códigos devem ser escritos na linguagem C, juntamente com os recursos do Kit de Desenvolvimento de Software Pico SDK;

• O simulador Wokwi deve estar integrado ao ambiente de desenvolvimento VS Code;

• Deve-se criar um repositório no github para o versionamento, registro e submissão dessa atividade.

# Orientação para o desenvolvimento da tarefa:
• Esta tarefa é individual.

• Deve-se implementar testes básicos para garantir que cada recurso esteja funcionamento corretamente.

• É necessário adicionar um arquivo README.md com instruções de uso do programa.

• Como etapa final, o discente irá produzir um vídeo ensaio, com duração máxima de 3 minutos, apresentando a solução trabalhada e os resultados obtidos nos experimentos. O link deste vídeo deve estar presente no arquivo README.md do repositório do github.


## 💻 Desenvolvedor
 
<table>
  <tr>
    
<td align="center"><img style="" src="https://avatars.githubusercontent.com/u/96251377?v=4" width="100px;" alt=""/><br /><sub><b> Moises Amorim </b></sub></a><br />👨‍💻</a></td>

  </tr>
</table>


## 🎥 Demonstração: 

<div align="center">
  <figure>  
    
    
<figcaption>

**Figura 1** - Demo do Projeto no Wokwi.com - Acessível em: https://wokwi.com/projects/422596466361412609
**Figura 1** - Demo do Projeto no Youtube.com - Acessível em: https://wokwi.com/projects/422596466361412609
    </figcaption>
  </figure>
</div>
 
 
 
