/*
 * funzioni.h
 *
 *  Created on: 10 Ottobre 2012
 *      Author: Alessandro Barracane
 */

#ifndef FUNZIONI_H_
#define FUNZIONI_H_

void down(int, int);
void up(int, int);
void leggi_conf(configurazione *);
void send_socket(char *, int);
int calcola_prezzo(int, int, int);
int calcola_turno(int, int);
void clean(int, int, int, int, int, int);


#endif /* FUNZIONI_H_ */
