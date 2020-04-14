/*
 * esercizio-C-2020-04-06.c
 *
 *  Created on: Apr 2, 2020
 *      Author: marco
 */
#include <stdio.h>
#include <string.h>

void findBruteForce(int *array, int arrayLength) {
	short visited[arrayLength];
	memset(visited, 0, arrayLength * sizeof(short));
	for (int i = 0; i < arrayLength; i++) {
		if (visited[i] == 0) {
			short isDuplicate = 0;
			for (int j = i + 1; j < arrayLength; j++) {
				if (array[i] == array[j]) {
					isDuplicate = 1;
					visited[j] = 1;
				}
			}
			if (isDuplicate == 0)
				printf("Element appear only once in array - %d ", array[i]);
		}
	}
}

int main(int argc, char *argv[]) {

	int array[11] = { 1, 2, 3, 4, 5, 5, 1, 2, 3, 4, 6 };
	int arrayLength = 11;
	findBruteForce(array, arrayLength);
}


