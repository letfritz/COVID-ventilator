/*
 *
 * isr_HOMING.c
 *
 *  Criado: 23 de abril de 2020
 *      Autores: Bruno Barbosa do Amaral (amaral_bruno@id.uff.br)
 *             Cau� de Souza Coutinho Nogueira (email)
 *             Let�cia Fritz (email)
 *
 *  Grupo de trabalho: Frente UFF - Rede de Combate ao COVID-19
 *
 *  �ltima atualiza��o: 23/04/2020
 *
 *	Descri��o:
 *
 *
 *
 *	Uso:
 *
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include "board.h"
#include "globals_aux.h"

//Sensor Fim de Curso - PORTAS J (PJ1)
ISR(PCINT1_vect) {

}
