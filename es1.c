/*
 * =====================================================================================
 *
 *       Filename:  es1.c
 *
 *    Description: Eseguire la media tra N numeri con un array
 *
 *        Version:  1.0
 *        Created:  15/06/2022 10:57:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

#define VOTI 2

int main(){
	float voto[VOTI], somma = 0, input;
	int i;
	
	for(i=0; i<VOTI; i++){
		do{	
			printf("\nInserire il %d voto:(Maggiore di 0) ", i+1);
			scanf("%f", &input);
		}while(input<=0);
		voto[i] = input;
		somma += voto[i]; 
	}

	printf("\nLa media è %.2f", somma/VOTI);
	
	return 0;
}
