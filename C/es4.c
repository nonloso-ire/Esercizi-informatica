//Codificare un programma ove inserito il mese dica la stagione corresipondente, nel caso che il mese (in forma numerica) sia a cavallo tra due stagioni specificare anche il giorno, se il giorno è compreso tra 1 e 20 si prenderà in considerazione la stagione precedente, altrimenti la successiva

#include<stdio.h>
#include<stdlib.h>

void a_cavallo(int nmese);

int main(){

	int mese;
	printf("Inserisci il numero del mese: ");
	scanf("%d", &mese);

	switch(mese){
		case 1: 
			printf("inverno");
			break;
		case 2: 
			printf("inverno");
			break;
		case 3: 
			a_cavallo(mese);
			break;
		case 4:
			printf("primavera");
			break;
		case 5:
			printf("primavera");
			break;
		case 6:
			a_cavallo(mese);
			break;
		case 7:
			printf("estate");
			break;
		case 8:
			printf("estate");
			break;
		case 9:
			a_cavallo(mese);
			break;
		case 10:	
			printf("autunno");
			break;
		case 11:
			printf("autunno");
			break;
		case 12:
			a_cavallo(mese);
			break;
		default:
			printf("You have insert a non-existent month\n");
			return 1;
	}
	
	printf("\n");
	return 0;
}

void a_cavallo(int nmese){
	int giorno;
	printf("Hai inserito un mese a cavallo tra due stagioni, inserisci il giorno: ");
	scanf("%d", &giorno);

	if(giorno<1 || giorno>31){
		printf("Cannot exist day %d", giorno);
	}

	switch(nmese){
		case 3:
			if(1<giorno<20){
				printf("Inverno");
			}else{
				printf("Primavera");
			}
			break;
		case 6:
			if(1<giorno<20){
				printf("Primavera");
			}else{
				printf("Estate");
			}
			break;
		case 9:
			if(1<giorno<20){
				printf("Estate");
			}else{
				printf("Autunno");
			}
			break;
		case 12:
			if(1<giorno<20){
				printf("autunno");
			}else{
				printf("inverno");
			}
			break;
		default:
			printf("You have insert a not-middle mounth");
	}	
						

}
