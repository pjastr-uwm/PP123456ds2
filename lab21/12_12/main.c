#include <stdio.h>
#include <stdlib.h>

void revColArr(int n, int m, int ** tab){
    for(int i=0;i<n/2;i++){
        int* temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
}

void printTable(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d,%d] = %d, ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

int main()
{
    int** tab1 = malloc(3*sizeof(int*));
    tab1[0] = malloc(3*sizeof(int));
    tab1[1] = malloc(3*sizeof(int));
    tab1[2] = malloc(3*sizeof(int));
    tab1[0][0] =  3; tab1[0][1] =  4; tab1[0][2] =  5;
    tab1[1][0] = -6; tab1[1][1] =  7; tab1[1][2] =  1;
    tab1[2][0] =  8; tab1[2][1] = -1; tab1[2][2] =  7;
    printTable(3,3,tab1);
    revColArr(3,3,tab1);
    printTable(3,3,tab1);
    return 0;
}
