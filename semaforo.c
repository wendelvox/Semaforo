/*
Atividade 1: Temporizador periódico.
Com o emprego da função add_repeating_timer_ms(), presente
na ferramenta Pico SDK, projete um semáforo com
temporização de 3 segundos para cada alteração de sinal. O
fluxograma simplificado de atuação do semáforo pode ser
visualizado na Figura 1. Nesta prática, será necessário simular
os seguintes componentes (configuração sugerida está
presente na Figura 2):
1) Microcontrolador Raspberry Pi Pico W.
2) 03 LEDs (vermelho, amarelo e verde).
3) 03 Resistores de 330 Ω.
*/
#include "pico/stdlib.h"
#include "hardware/timer.h"
#include <stdio.h>

//Definir o pinos do LED
const uint LED_R_PIN = 11;
const uint LED_B_PIN = 12;
const uint LED_G_PIN = 13;

static int led_atual = 0;

// Callback função semaforo acionando cada led em 3000 ms (3 segundo)
bool repeating_timer_callback(struct repeating_timer *t){
 
  // Desligar todos os LEDs
    gpio_put(LED_R_PIN, 0);
    gpio_put(LED_G_PIN, 0);
    gpio_put(LED_B_PIN, 0);

    // Alterar o LED aceso
    if (led_atual == 0) {
        gpio_put(LED_R_PIN, 1);  // Acende o LED vermelho
        led_atual = 1;  // Próximo LED será o verde
    } else if (led_atual == 1) {
        gpio_put(LED_G_PIN, 1);  // Acende o LED verde
        led_atual = 2;  // Próximo LED será o azul
    } else {
        gpio_put(LED_B_PIN, 1);  // Acende o LED azul
        led_atual = 0;  // Volta para o LED vermelho
    }
  return true; // Retorna true para continuar o temporizador
}


// Callback para imprimir mensagem a cada 1000 ms (1 segundo)
bool print_repeating_timer_callback(struct repeating_timer *t) {
    // Imprimir mensagem a cada segundo
    printf("Rotina principal executando cada 1 segundo...\n");

    return true; // Retorna true para continuar o temporizador
}

int main(){
    
    stdio_init_all();

   
    gpio_init(LED_R_PIN);
    gpio_set_dir(LED_R_PIN, GPIO_OUT);

      gpio_init(LED_B_PIN);
    gpio_set_dir(LED_B_PIN, GPIO_OUT);
    
    gpio_init(LED_G_PIN);
    gpio_set_dir(LED_G_PIN, GPIO_OUT);

    struct  repeating_timer timer;
    struct repeating_timer print_timer;

    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

     add_repeating_timer_ms(1000, print_repeating_timer_callback, NULL, &print_timer);

    /*
    A rotina principal, presente no interior da estrutura de
repetição while, deve imprimir algum tipo de informação a cada
segundo (1.000 ms)
    */
    while(1){

       

    }
    

}

