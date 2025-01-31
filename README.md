Projeto: Semáforo com Temporizadores Periódicos - Raspberry Pi Pico
Descrição
Este projeto implementa um semáforo simples utilizando o microcontrolador Raspberry Pi Pico W e três LEDs (vermelho, amarelo e verde). Utilizando a função add_repeating_timer_ms() da biblioteca Pico SDK, o código gerencia os LEDs de forma a simular a troca de sinais de um semáforo. A cada 3 segundos, o semáforo alterna entre os LEDs (vermelho, verde e azul) de forma cíclica, com a adição de uma mensagem impressa no terminal a cada 1 segundo, indicando a execução da rotina principal.

Componentes Utilizados
Microcontrolador: Raspberry Pi Pico W
LEDs: 3 LEDs RGB (vermelho, verde e azul)
Resistores: 3 resistores de 330 Ω para os LEDs
Cabo USB para alimentação e comunicação com o Raspberry Pi Pico W
Funcionalidade
O sistema funciona com dois temporizadores:

Temporizador para LEDs (3 segundos): A cada 3 segundos, os LEDs alternam de forma cíclica entre as cores vermelho, verde e azul. A cada 3 segundos, o LED ativo é desligado e o próximo é aceso.

Temporizador para impressão (1 segundo): A cada 1 segundo, é impressa a mensagem "Rotina principal executando cada 1 segundo..." no terminal, informando que a rotina principal está sendo executada.

Fluxograma do Semáforo
O fluxo de atuação do semáforo pode ser visualizado no fluxograma simplificado:

LED Vermelho aceso (3 segundos)
LED Verde aceso (3 segundos)
LED Azul aceso (3 segundos)
Recomeça a sequência
Esquema de Ligação
LED Vermelho: Conectado ao pino 11 do Raspberry Pi Pico W.
LED Verde: Conectado ao pino 12 do Raspberry Pi Pico W.
LED Azul: Conectado ao pino 13 do Raspberry Pi Pico W.
Resistores de 330 Ω: Conectados em série com cada LED.
