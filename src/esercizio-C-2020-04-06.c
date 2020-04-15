/*
 *trova l'unico elemento dell'array che appare una volta sola
 *IPOTESI: tutti gli elementi dell'array compaiono esattamente due volte,
 *tranne un unico elemento che compare una volta sola.
 */


#include <stdio.h>
#include <stdlib.h>


void findBruteForce(int * array, unsigned int size){
	if(array==NULL){
		printf("L'array che mi hai passato non è valido!\n");
	}
	int * visitati;
	visitati=calloc(size, sizeof(int));
	if(visitati==NULL){
		printf("La funzione findBruteForce ha avuo problemi nell'accesso alla memoria!\n");
	}
	for(int i=0; i<size; i++){
		if(visitati[i]==0){
			short duplicato=0;
			int x=array[i];
			for(int j=(i+1); j<size; j++){
				if(array[j]==x){
					duplicato=1;
					visitati[j]=1;
				}
			}
			if(duplicato==0){
				printf("Il numero %d appare un' unica volta!\n", array[i]);
			}
		}
	}
	free(visitati);
}


int main(int argc, char *argv[]) {
	int test[]={1, 5, 6, 2, 1, 6, 4, 3, 2, 5, 3};
	findBruteForce(&test[0], 11);
	return 0;
}

