#include <avr/io.h>
#include <avr/interrupt.h>
#include "board.h"

//Habilitando portas de entrada
void initPIN(void) {

  // Configurando portas de saída
  DDRB = (1 << PIN_BUZZER);
  DDRH = ((1 << PIN_MOTOR_CTRL) | (1 << PIN_MOTOR_DIR) | (1 << PIN_MOTOR_EN));

  // Configurando pull-up das portas de entrada
  PORTB = ((1 << PIN_BOTAO_MODO) | (1 << PIN_BOTAO_CONFIRMAR) | (1 << PIN_BOTAO_SILENCIAR));
  PORTJ = (1 << PIN_SENSOR_FIM_CURSO);

}

//Habilita as interrupções
void initInterrupt(void) {
  cli();
  //Pinos INT
  EICRA |= ((1 << ISC20) | (1 << ISC30));
  EIMSK |= ((1 << INT2) | (1 << INT3));
  //Pinos PCINT
  PCICR |= ((1 << PCIE0) | (1 << PCIE1)); // Habilita a porta B, J para interrupção
  PCMSK0 = ((1 << PCINT6) | (1 << PCINT7)); // Habilita o pino PB6 (PCINT6), PB7 (PCINT7)
  PCMSK1 = (1 << PCINT10); // Habilita a porta PJ1
  sei();

}

// Configura leitura analógica
uint16_t initADC(uint8_t channel) {
  ADMUX = ((1 << REFS0) | channel); // Tensão de entrada de referência avcc = 5V
  ADCSRA = ((1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2));
  ADCSRA |= (1 << ADEN);
  ADCSRA |= (1 << ADSC);       // start conversion
  loop_until_bit_is_clear(ADCSRA, ADSC); // wait for conversion complete
  return ADC;
}
