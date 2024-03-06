/*
 *
 * isr_BOTAO.c
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
 *  Adicionar este arquivo nos arquivos que fazem uso de alguma dessas vari�veis
 *
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include "board.h"
#include "globals_aux.h"


// Botão de silenciar alarme e Botão confirmar - PORTAS B (PB6 e PB7)
ISR(PCINT0_vect) {
  
}
