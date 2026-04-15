#include <stdio.h>
#include <stdlib.h>

int * shiftLeft(int n, int * tab){
    int* tab2 = malloc(n * sizeof(int));
    for(int i=1;i<n;i++){
        *(tab2+i-1) = * (tab+i);
    }
    *(tab2+n-1) = *tab;
    return tab2;
}

void printTable(int n, int * tab){
    for(int i=0;i<n;i++){
        printf("%d ", *(tab+i));
    }
    printf("\n----------\n");
}

int main()
{
    int * tab= malloc(5 * sizeof(int));
    *tab = 7;
    *(tab+1) = -4;
    *(tab+2) = 7;
    *(tab+3) = 8;
    *(tab+4) = -5;
    printTable(5, tab);
    int * result = shiftLeft(5, tab);
    printTable(5, tab);
    printTable(5, result);
    return 0;
}
