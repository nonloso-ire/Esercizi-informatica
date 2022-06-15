/*
 * =====================================================================================
 *
 *       Filename:  es2.c
 *
 *    Description: dato un numero creare una funzione che dica se è positivo o negativo 
 *
 *        Version:  1.0
 *        Created:  15/06/2022 11:14:58
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

void segno(int numero);

int main(){
	int a;
	printf("inserire un numero: ");
	scanf("%d", &a);
	segno(a);
	return 0;
}

void segno(int numero){
	if(numero>0){
		printf("\nil numero è positivo");
	}else if(numero<0){
		printf("\nil numero è negativo");
	}else if(numero==0){
		printf("\nil numero è neutro"); 
	}
}
