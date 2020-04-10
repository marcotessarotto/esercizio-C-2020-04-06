#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int a_length;


void findBruteForce(int a[]);

int main() {
	int a[] = {1,5,6,2,1,6,4,3,2,5,3};
	a_length = sizeof(a)/sizeof(int);
	findBruteForce(a);
}

void findBruteForce(int a[]){
	short * visited = calloc(a_length, sizeof(short));

	for( int i=0 ; i<a_length ; i++){
		int x = a[i];
		if(visited[i] == FALSE){
			short isDuplicate = FALSE;

			for (int j=i+1 ; j<a_length ; j++){
				if(x == a[j]){
					isDuplicate = TRUE;
					visited[j] = TRUE;
				}
			}
			if(isDuplicate == FALSE){
				printf("Element appear only once in array - %d \n", x);
			}
		}
	}

}
