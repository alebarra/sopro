/*
 * header_back.h
 *
 *  Created on: 10 Ottobre 2012
 *      Author: Alessandro Barracane
 */

#ifndef HEADER_BACK_H_
#define HEADER_BACK_H_

coda * inserisci(coda *, reservation *);
coda * insert_by_pid(coda *, reservation *);
void free_list(coda *);
int check(char *);

#endif /* HEADER_BACK_H_ */
