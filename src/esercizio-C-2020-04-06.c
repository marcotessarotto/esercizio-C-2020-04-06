
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void findBruteForce(int *array, int array_size){

	int *visited; // 0 = non visitato, 1 = già visitato

	visited = malloc(array_size * sizeof(int));
	memset(visited, 0, array_size * sizeof(int));

	        for (int i = 0; i <array_size ; i++) {

	            int x = array[i];

	            if(visited[i]== 0) {

	                int isDuplicate = 0;

	                for (int j = i + 1; j <= array_size; j++) {

	                    if (x == array[j]) {

	                        isDuplicate = 1;
	                        visited[j] = 1;

	                    }
	                }
	                if (isDuplicate == 0){
	                    printf("Element appear only once in array - %d\n", x);
	                }
	            }
	        }
}


int main(int argc, char *argv[]) {

	int  array[] = { 1,5,6,2,1,6,4,3,2,5,3};
	int array_size = 10;

	findBruteForce(array, array_size);

}


