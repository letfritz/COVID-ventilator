/*
 *
 * board.h
 *
 *  Criado: 23 de abril de 2020
 *      Autor: Bruno Barbosa do Amaral (amaral_bruno@id.uff.br)
 *             Cau� de Souza Coutinho Nogueira (email)
 *             Let�cia Fritz (email)
 *
 *  Grupo de trabalho: Frente UFF - Rede de Combate ao COVID-19
 *
 *  �ltima atualiza��o: 23/04/2020
 *
 *	Descri��o:
 *	Re�ne as macros utilizadas no c�digo de controle do ventilador mec�nico
 *
 *
 *	Uso:
 *  Adicionar este arquivo nos arquivos que fazem uso de alguma dessas macros
 *
 */


// Portas Analógicas
#define PIN_POT_BPM         0  // Pino A1 do arduino (PF0) [ADC0]
#define PIN_POT_IE          1  // Pino A2 do arduino (PF1) [ADC1]
#define PIN_POT_TIDAL       2  // Pino A3 do arduino (PF2) [ADC2]
#define PIN_POT_THRESHOLD   3  // Pino A4 do arduino (PF3) [ADC3]
#define PIN_SENSOR_PRESSAO  4  // Pino A0 do arduino (PF4) [ADC4]

//Portas PWM
#define PIN_MOTOR_CTRL      3  // Pino 6 do arduino (PH3) [OC4A]

//Portas GPIO
#define PIN_MOTOR_EN        4  // Pino 7 do arduino (PH4) [OC4B]
#define PIN_MOTOR_DIR       5  // Pino 8 arduino (PH5) [OC4C]
#define PIN_BOTAO_MODO      4  // Pino 10 arduino (PB4) [OC2A]
#define PIN_BUZZER          5  // Pino 22 arduino (PB5)[OC1A]

// Porta Interrupção GPIO
#define PIN_BOTAO_SILENCIAR  6  // Pino 12 arduino (PB6)[PCINT6]
#define PIN_BOTAO_CONFIRMAR  7  // Pino 13 arduino (PB7)[PCINT7]
#define PIN_SENSOR_FIM_CURSO 1  // Pino 14 arduino (PJ1)[PCINT10]

// Porta Interrupção Externa GPIO
#define PIN_ENCODER_A  2 // Pino 19 arduino (PD2) [INT2]
#define PIN_ENCODER_B  3 // Pino 18 arduino (PD3) [INT3]
