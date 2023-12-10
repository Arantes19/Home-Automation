# SETR_TP_2023

## Sistema A – Controlo de iluminação interior 
Desenvolver um sistema de controlo de luminosidade do espaço interior, em que em função da intensidade da luz solar, a iluminação do espaço será ajustada, garantindo uma iluminação constante e uma maior eficiência energética.  <br /> 
Considere as seguintes 5 escalas de intensidade de luz:
> $\geq$ 800 LED 255;
> 
> $\geq$ 600 e < 800 LED 192
> 
> $\geq$ 400 e < 600 LED 128
> 
> $\geq$ 200 e < 400 LED 64
>
> $\lt$ 200 LED 0

Utilizar LED e sensor LDR para simular o sistema. <br /> 
Apresentar o valor de entrada do sensor e saída do LED no monitor de série.

## Sistema B – Controlo de climatização 
Desenvolver um sistema de controlo de temperatura ambiente através de ventilação, em que uma ventoinha é acionada para arrefecimento do espaço em função dos valores de temperatura fornecidos por um sensor.
+ Liga a ventoinha sempre que a temperatura ultrapassar os 24 graus celsius.
+ Desliga a ventoinha sempre que a temperatura seja inferior a 20 graus celsius.
+ Deve ainda dar indicação do controlo do ambiente através de 2 leds:
  1. Led vermelho liga quando está em arrefecimento;
  1. Led verde liga quando está estabilizado.
+ O estado da ventoinha (“Fan ON/ Fan OFF”) deve ser apresentado na 1ª linha de um display lcd e na 2ª linha a temperatura atual (“Temp: xxxºC”)
+ Controlar a luminosidade do display com potenciómetro.

## Sistema C – Sistema de segurança (alarme)
Desenvolva um sistema de segurança para deteção de intrusões através de controlo de movimentos de intrusos.  <br /> 
Sempre que o sensor PIR detetar movimento, deverá acionar:
+ Um sinal luminoso (led) vermelho intermitente.
+ Um sinal sonoro característico de alarme com duração de 10 segundos.
+ Considerar um botão (pressão) para desarmar o alarme.
+ O alarme deverá repetir o sinal sonoro (10 segundos), com intervalos de 5 segundos até ser desarmado no botão.

## Sistema D
Desenvolver um sistema embebido adicional para integração na Smart Housing, para automatização de qualquer outra tarefa que achem útil (Estacionamento, rega, acessos, etc.). <br /> 
Deve utilizar pelo menos 3 componentes distintos entre sensores e atuadores bem como a monitorização no monitor de série.

### Adicionalmente incluir à escolha de cada grupo, um dos seguintes requisitos em cada um dos 4 sistemas desenvolvidos.
+ Utilização de Interrupts num dos sistemas desenvolvidos. 
+ Criação de uma interface gráfica para monitorização remota em tempo real de um dos sistemas desenvolvidos. 
+ Multitasking (com Timer ou RTOS), ex: gerir concorrencialmente o tempo de execução de 2 ou mais componentes de um dos sistemas 
+ Analisar a performance do programa através do path do programa, utilizando flags de referência e o timer no monitor de série. Esta análise deverá ser feita considerando 2 versões do programa de um dos sistemas de modo a concluir qual deles é energeticamente mais eficiente. 

