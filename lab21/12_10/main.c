#include <stdio.h>
#include <stdlib.h>

void swap(int * p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void revRowArr(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            swap(&tab[i][j], &tab[i][m-1-j]);
        }
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
    int** tab1 = malloc(2*sizeof(int*));
    tab1[0] = malloc(3*sizeof(int));
    tab1[1] = malloc(3*sizeof(int));
    tab1[0][0] =  3; tab1[0][1] =  4; tab1[0][2] =  5;
    tab1[1][0] = -6; tab1[1][1] =  7; tab1[1][2] =  1;
    printTable(2,3,tab1);
    revRowArr(2,3,tab1);
    printTable(2,3,tab1);
    return 0;
}
