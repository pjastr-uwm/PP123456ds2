#include <stdio.h>
#include <stdlib.h>

int ** rotateRight(int n, int m, int **tab){
    int **temp = malloc(m*sizeof(int*));
    for(int j=0;j<m;j++){
        temp[j] = malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[j][n-1-i] = tab[i][j];
        }
    }
    return temp;
}

void printTable(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d,%d] =  %d, ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}


int main()
{
    int ** tab=malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));
    tab[0][0] =  1; tab[0][1] =  2; tab[0][2] =  3;
    tab[1][0] =  0; tab[1][1] = -5; tab[1][2] =  8;
    tab[2][0] =  9; tab[2][1] =  8; tab[2][2] = -2;
    tab[3][0] = -3; tab[3][1] =  5; tab[3][2] =  4;
    printTable(4,3,tab);
    int ** result = rotateRight(4,3,tab);
    printTable(3,4,result);
    return 0;
}
