#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * trova l'unico elemento dell'array che appare una volta sola
 *IPOTESI: tutti gli elementi dell'array compaiono esattamente due volte, tranne un unico elemento che compare una volta sola.
 */

int a [11] = {1,5,6,2,1,6,4,3,2,5,3};

int main(){

	int num;
	int counter;

	for(int i=0; i<sizeof(a); i++){
		counter =0;

		for(int j=0; j<sizeof(a); j++){

			if(a[i] == a[j])
				counter++;
		}
		if(counter==1)
			num = a[i];
	}
	printf("%d", num);

	return 0;
}
