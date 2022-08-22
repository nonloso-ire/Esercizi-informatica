//dato un numero inserito da utente dire se è pari o dispari

#include<stdio.h>
#include<stdlib.h>

int main(){

	int numero;
	printf("inserisci un numero: ");
	scanf("%d", &numero);

	if(numero%2==0){
		printf("il numero è pari");
	}else{
		printf("il numero è dispari");
	}

	return 0;
}

