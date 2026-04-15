#include <stdio.h>
#include <stdlib.h>

int minValue(int n, int * tab){
    int min = *tab;
    for(int i=1;i<n;i++){
        if (*(tab+i) < min){
            min = *(tab+i);
        }
    }
    return min;
}

int main()
{
    int * tab= malloc(5 * sizeof(int));
    *tab = 7;
    *(tab+1) = -4;
    *(tab+2) = 7;
    *(tab+3) = 8;
    *(tab+4) = -5;
    printf("%d\n", minValue(5, tab));
    return 0;
}
