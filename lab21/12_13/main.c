#include <stdio.h>
#include <stdlib.h>

void swap(int * p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void transpose(int n, int tab[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(&tab[i][j], & tab[j][i]);
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
    int tab[3][3] = {{4,2,1},{5,2,-9},{-9,2,7}};
    printTable(3,3,tab);
    transpose(3, tab);
    printTable(3,3,tab);
    return 0;
}
