/*
 * esercizio-C-2020-04-06.c
 *
 *  Created on: Apr 2, 2020
 *      Author: marco
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#define True 1
#define False 0

void findBruteForce(int *a, int dim);

int main(int argc, char **argv) {

	int a[] = { 1,5,6,2,1,6,4,3,2,5,3 };
	//int a[] = { 1,1,2,1};
	int dim = sizeof(a)/sizeof(a[0]);
	printf("int a[] ={ ");
	for(int i=0;i<dim;i++){
		if(i==(dim-1))
			printf(" %d }\n",a[i]);
		else
			printf(" %d,",a[i]);

	}

	findBruteForce(a, dim);

	return 0;
}

void findBruteForce(int *a, int dim){

	int visited[dim];
	int isDuplicate =False;
	for(int i=0; i<dim;i++){
		int x = a[i];
		if(visited[i]==False){
			isDuplicate = False;
			for(int j = i+1; j < dim ; j++){
				if(x==a[j]){
					isDuplicate = True;
					visited[j] = True;
				}
			}
			if(isDuplicate == False)
				printf("Element appear only once in array - %d\n",x);
		}
	}

}



/*
 * public class EveryElementsRepeatedButOne {

    public static void findBruteForce(int [] a){
        boolean [] visited = new boolean[a.length];
        for (int i = 0; i <a.length ; i++) {
            int x = a[i];
            if(visited[i]==false) {
                boolean isDuplicate = false;
                for (int j = i + 1; j < a.length; j++) {
                    if (x == a[j]) {
                        isDuplicate = true;
                        visited[j] = true;
                    }
                }
                if (!isDuplicate)
                    System.out.println("Element appear only once in array - " + x);
            }
        }
    }

    public static void main(String[] args) {
        int [] a = { 1,5,6,2,1,6,4,3,2,5,3};
        findBruteForce(a);
    }
}*/


