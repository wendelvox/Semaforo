# Projeto: Semáforo com Temporizadores Periódicos - Raspberry Pi Pico W

## Descrição
Este projeto implementa um **semáforo simples** utilizando o microcontrolador **Raspberry Pi Pico W** e três LEDs (**vermelho, amarelo e verde**). Usando a função `add_repeating_timer_ms()` da **Pico SDK**, o código gerencia os LEDs para simular a troca de sinais de um semáforo.

A cada **3 segundos**, o semáforo alterna entre os LEDs (**vermelho, verde e azul**) de forma cíclica. Além disso, a cada **1 segundo**, é impressa uma mensagem no terminal indicando a execução da rotina principal.

---

## Componentes Utilizados
- **Microcontrolador**: Raspberry Pi Pico W
- **LEDs**: 3 LEDs RGB (**vermelho, verde e azul**)
- **Resistores**: 3 resistores de **330 Ω** para os LEDs
- **Cabo USB**: Para alimentação e comunicação com o Raspberry Pi Pico W

---

## Funcionalidades
✅ **Temporizador para LEDs (3 segundos):**
   - A cada **3 segundos**, os LEDs alternam de forma cíclica entre **vermelho → verde → azul**.
   - O LED ativo é desligado e o próximo é aceso.

🖥 **Temporizador para impressão (1 segundo):**
   - A cada **1 segundo**, é impressa a mensagem:
     _"Rotina principal executando cada 1 segundo..."_
   - Essa mensagem informa que a rotina principal está em execução.

---

## Fluxograma do Semáforo
1️⃣ **LED Vermelho aceso** (3 segundos)
2️⃣ **LED Verde aceso** (3 segundos)
3️⃣ **LED Azul aceso** (3 segundos)
🔄 **Recomeça a sequência**

---

## Esquema de Ligação
- **LED Vermelho** → GPIO **11**
- **LED Verde** → GPIO **12**
- **LED Azul** → GPIO **13**
- **Resistores de 330 Ω** em série com cada LED

---

## Como Executar
### Pré-requisitos
🛠 **Instalar o SDK do Raspberry Pi Pico:**
- Siga as instruções oficiais para configurar o ambiente de desenvolvimento do Raspberry Pi Pico.

### Compilar o código
🔧 **Usando CMake:**
- Compile o código utilizando **CMake**.
- Gere os arquivos **.uf2** ou **.bin** com o código compilado.

### Carregar o código no Raspberry Pi Pico
1. Conecte o **Raspberry Pi Pico** ao computador mantendo pressionado o botão **BOOTSEL**.
2. Copie o arquivo compilado para a memória do dispositivo.

### Visualizar a execução
🖥 **Monitorando a saída serial:**
- Abra um terminal serial (**PuTTY** ou **Minicom**) para visualizar as mensagens impressas a cada segundo.
