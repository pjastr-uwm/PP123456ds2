#include <stdio.h>
#include <stdlib.h>

void shiftLeft(int n, float * tab){
    float temp = *tab;
    for(int i=1;i<n;i++){
        *(tab+i-1) = * (tab+i);
    }
    *(tab+n-1) = temp;
}

void printTable(int n, float * tab){
    for(int i=0;i<n;i++){
        printf("%f ", *(tab+i));
    }
    printf("\n----------\n");
}

int main()
{
    float * tab= malloc(5 * sizeof(float));
    *tab = 7.2f;
    *(tab+1) = -4.7f;
    *(tab+2) = 7.8f;
    *(tab+3) = 8.2f;
    *(tab+4) = -5.1f;
    printTable(5, tab);
    shiftLeft(5, tab);
    printTable(5, tab);
    return 0;
}
