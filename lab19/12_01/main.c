#include <stdio.h>
#include <stdlib.h>

int sumMatrix(int n, int m, int tab[n][m]){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += tab[i][j];
        }
    }
    return sum;
}

int main()
{
    int tab[2][3] = {{3,4,5},{-3,2,1}};
    printf("%d\n", sumMatrix(2,3,tab));
    return 0;
}
