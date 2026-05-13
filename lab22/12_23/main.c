#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d,%d] =  %d, ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int ** transCopy(int n, int **tab){
    int ** temp = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        temp[i] = malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = tab[j][i];
        }
    }
    return temp;
}



int main()
{
    int ** tab = malloc(2*sizeof(int*));
    tab[0] = malloc(2*sizeof(int));
    tab[1] = malloc(2*sizeof(int));
    tab[0][0] =  5; tab[0][1] = -3;
    tab[1][0] =  4; tab[1][1] = 9;
    printTable(2,2,tab);
    int ** result = transCopy(2,tab);
    printTable(2,2,tab);
    printTable(2,2,result);
    return 0;
}
