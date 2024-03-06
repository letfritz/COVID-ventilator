//Incluindo bibliotecas
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "board.h"
#include "int.c"
#include "isr_BOTAO.c"
#include "isr_ENCODER.c"
#include "isr_HOMING.c"
#include "globals.h"
#include "i2c_master.h"
#include "lcd8bit.h"
#include "teste.c"

//Protótipo da função para debug
void func_teste(void);

int main(void) {

  //Habilita as portas
  initPIN();

  //Habilita Display LCD
  lcd_init();
  stdout = lcd_file_out();
  i2c_init();

  printf("Hello World!");

  //Configurando pino de interrupção para botão de silenciar alarme
  initInterrupt();

  while (1) {

    // Potenciômetro BPM (ADC0)
    adc_value1 = initADC(PIN_POT_BPM);
    // Sensor de pressão (ADC1)
    adc_value2 = initADC(PIN_POT_IE);
    // Sensor de pressão (ADC2)
    adc_value3 = initADC(PIN_POT_TIDAL);
    // Sensor de pressão (ADC3)
    adc_value4 = initADC(PIN_POT_THRESHOLD);
    // Sensor de pressão (ADC4)
    adc_value0 = initADC(PIN_SENSOR_PRESSAO);

    //Função para debug
    func_teste();

    // Escreve no Display LCD
    printf("%8d", adc_value1);
  }

}
