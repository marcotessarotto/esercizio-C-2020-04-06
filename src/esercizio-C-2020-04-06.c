#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 11

void findBruteForce( int * arr, int arr_size){

		int * visited = calloc(arr_size, sizeof(int));
	        for (int i = 0; i < arr_size ; i++) {
	            int x = arr[i];
	            if(visited[i]==0) {
	            	int isDuplicate = 0;
	                for (int j = i + 1; j < arr_size; j++) {
	                    if (x == arr[j]) {
	                        isDuplicate = 1;
	                        visited[j] = 1;
	                    }
	                }
	                if (isDuplicate == 0)
	                    printf("Element appear only once in array - %d\n", x);
	            }
	        }
	        free(visited);
}




int main(int argc, char *argv[]) {

	int arr[ARR_SIZE] = { 1,5,6,2,1,6,4,3,2,5,3 };

	findBruteForce(arr, ARR_SIZE);

	return 0;

}
