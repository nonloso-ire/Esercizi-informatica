//Si progettino e si realizzino due funzioni così definite:
//
//float euro_to_dollar(float money)
//float euro_to_lire(float money)
//
//si supponga che 1€ = 0.98$ e 1€ = 1936.27 lire
//stampare la conversione in dollari e lire

#include<stdio.h>
#include<stdlib.h>

float eur_to_dollar(float money);
float euro_to_lire(float money);

int main(){
	float euro;
	printf("inserisci i soldi in euro: ");
	scanf("%f", &euro);

	printf("\n\n%f in dollari = %f\n", euro, eur_to_dollar(euro));
	printf("%f in lire = %f\n", euro, euro_to_lire(euro));

	return 0;
}

float eur_to_dollar(float money){
	return money * 0.98;
}

float euro_to_lire(float money){
	return money * 1936.27;
}	
