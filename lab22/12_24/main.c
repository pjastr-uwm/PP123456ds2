#include <stdio.h>
#include <stdlib.h>

int * newArrOneD(int n, int m, int **tab){
    int * temp = malloc(n*m*sizeof(int*));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[j+i*m] = tab[i][j];
        }
    }
    return temp;
}

int main()
{
    int ** tab = malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] =  5; tab[0][1] = -3; tab[0][2] = 11;
    tab[1][0] =  4; tab[1][1] =  9; tab[1][2] = -2;
    int * result = newArrOneD(2,3, tab);
    for(int i=0;i<6;i++){
        printf("%d ", result[i]);
    }
    return 0;
}
