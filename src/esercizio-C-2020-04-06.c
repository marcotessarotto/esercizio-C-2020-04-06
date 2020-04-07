
#define TRUE 1
#define FALSE 0

void findBruteForce(int a[],int length){

	//definisco l'array visited inizializzato da calloc a 0 (che corrisponde a FALSE)
	int * visited=calloc(length,sizeof(int));

	for (int i = 0; i <length ; i++) {
		int x = a[i];
		if(visited[i]==FALSE) {
			int isDuplicate = FALSE;
			for (int j = i + 1; j < length; j++) {
				if (x == a[j]) {
					isDuplicate = TRUE;
					visited[j] = TRUE;
				}
			}
			if (isDuplicate==FALSE)
				printf("Element appear only once in array - %d",x);
		}
	}


}


int main(int argc, char **argv) {

	int a[] = { 1,5,6,2,1,6,4,3,2,4,3};

	findBruteForce(a,sizeof(a)/sizeof(int));

	return 0;

}

