#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m, int tab1[n][m], int tab2[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab1[i][j] = tab2[i][j];
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
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
    int tab1[2][3] = {{3,4,5},{-6,7,1}};
    int tab2[2][3] = {{2,-1,5},{3,-9,6}};
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    copyMat(2,3,tab1, tab2);
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    return 0;
}
