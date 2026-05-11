#include <stdio.h>
#include <stdlib.h>

void copyArr2D(int n, int m, int ** tab1, int ** tab2){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab1[i][j] = tab2[i][j];
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
    //int tab1[2][3] = {{3,4,5},{-6,7,1}};
    //int tab2[2][3] = {{2,-1,5},{3,-9,6}};
    int** tab1 = malloc(2*sizeof(int*));
    tab1[0] = malloc(3*sizeof(int));
    tab1[1] = malloc(3*sizeof(int));
    tab1[0][0] =  3; tab1[0][1] =  4; tab1[0][2] =  5;
    tab1[1][0] = -6; tab1[1][1] =  7; tab1[1][2] =  1;
    int** tab2 = malloc(2*sizeof(int*));
    tab2[0] = malloc(3*sizeof(int));
    tab2[1] = malloc(3*sizeof(int));
    tab2[0][0] =  2; tab2[0][1] = -1; tab2[0][2] =  5;
    tab2[1][0] =  3; tab2[1][1] = -9; tab2[1][2] =  6;
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    copyArr2D(2,3,tab1, tab2);
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    return 0;
}
