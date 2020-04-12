// Diaa Nehme  IN0500345  esercizio20200406

#include <stdio.h>
#include <stdlib.h>

// findBruteForce Function
void findBruteForce(int a[], int length){

  int * visited;
  visited = calloc(length, sizeof(int));
	if (visited == NULL) {
	  return NULL;
	}
	for(int i = 0; i < length; i++){
		int x = a[i];
		if(visited[i] == 0){
		int isDuplicate = 0;
		for(int j = i + 1; j < length; j++){
			if(x == a[j]){
				isDuplicate = 1;
				visited[j] = 1;
			}
		}
		if(isDuplicate == 0)
			printf("Element appear only once in array - %d\n", x);
		}
	}
}

int main(int argc, char *argv[]) {

	int a[] = { 1,5,6,2,1,6,4,3,2,5,3};

	findBruteForce(a, sizeof(a)/sizeof(int));

  return 0;
}
