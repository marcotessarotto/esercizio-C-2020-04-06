/** ex 2020-04-06 */
#include <stdio.h>
#include <stdlib.h>

void findBruteForce(int a[], int len) {
	char * visited = calloc(sizeof(char), len);
	if (visited == 0) {
		exit(-1); // malloc failed
	}

	for (int i = 0; i < len; i++) {
		int x = a[i];
		if (!visited[i]) {
			char isDup = 0;
			for (int j = i + 1; j < len; j++) {
				if (x == a[j]) {
					isDup = 1;
					visited[j] = 1;
				}
			}
			if (!isDup) {
				printf("Element appear only once in array - %d\n", x);
			}
		}
	}

	free(visited);
}

int main(int argc, char **argv) {
    int a[] = {1,5,6,2,1,6,4,3,2,5,3};
    // test : int a[] = {93,1,5,6,2,1,7,4,3,2,5,3,11,17};
    findBruteForce(a, 11);
}
