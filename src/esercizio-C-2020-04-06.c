#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define true 1
#define false 0

void findBruteForce( int a [], int length) {
    int visited [length];
    for(int i = 0; i <length; i++){
        int x = a[i];
        if(visited[i] == false){
            int isDuplicate = false;
            for(int j = i+1; j <length; j++){
                if(x == a[j]){
                    isDuplicate = true;
                    visited[j] = true;
                }
            }
            if(isDuplicate == false)
                printf("Element appear only once in array - %d", x);
        }
    }
}

int main (int argc, char * argv []){
    int a [] = {1, 5, 6, 2, 1, 6, 4, 3, 2, 5, 3};
    int length = sizeof(a)/sizeof(a[0]);
    findBruteForce(a, length);

    return 0;
}
