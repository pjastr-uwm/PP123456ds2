#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n,int m, int ** tab){
    int index =0;
    int max = tab[0][0];
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if (tab[i][j] < max){
                max= tab[i][j];
                index =j;
            }
        }
    }
    return index;
}

int main()
{
    int ** tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] =  3; tab[0][1] =  4; tab[0][2] = -4;
    tab[1][0] = -4; tab[1][1] =  5; tab[1][2] =  7;
    tab[2][0] =  5; tab[2][1] = -4; tab[2][2] = 1;
    printf("%d\n", minColIdx(3,3,tab));
    return 0;
}
