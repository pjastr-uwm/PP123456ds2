#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n,int m, int tab[n][m]){
    int index =0;
    int max = tab[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (tab[i][j] > max){
                max= tab[i][j];
                index =i;
            }
        }
    }
    return index;
}

int main()
{
    int tab[3][2] = {{3,4},{-4,5},{5,1}};
    printf("%d\n", maxRowIdx(3,2,tab));
    return 0;
}
