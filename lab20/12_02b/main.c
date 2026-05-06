#include <stdio.h>
#include <stdlib.h>

int sumArray(int n, int m, int ** tab){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += *(*(tab+i)+j);
        }
    }
    return sum;
}

int main()
{
    int ** tab = malloc(2*sizeof(int*));
    *tab = malloc(3*sizeof(int));
    *(tab+1) = malloc(3*sizeof(int));
    *(*(tab+0)+0) =  3; *(*(tab+0)+1) = 4; *(*(tab+0)+2) = 5;
    *(*(tab+1)+0) = -3; *(*(tab+1)+1) = 2; *(*(tab+1)+2) = 1;
    printf("%d\n", sumArray(2,3,tab));
    return 0;
}
