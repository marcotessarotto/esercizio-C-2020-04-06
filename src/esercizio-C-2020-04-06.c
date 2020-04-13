#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void find_brute_force(int *ptr, int size)
{
	int x;
	bool duplicate;
	bool visited[size];
	memset(visited, 0, size * sizeof(bool));
	for (int i = 0; i < size; i++) {
		x = ptr[i];
		if (!visited[i]) {
			duplicate = 0;
			for (int j = i + 1; j < size; j++) {
				if (x == ptr[j]) {
					duplicate = 1;
					visited[j] = 1;
				}
			}
			if (!duplicate)
				printf("The element that appears only once is: %d\n", x);
		}
	}
}

int main (int argc, char *argv[])
{
	int a[] = {1, 5, 6, 2, 1, 6, 4, 3, 2, 5, 3};
	find_brute_force(a, 11);
	return 0;
}
