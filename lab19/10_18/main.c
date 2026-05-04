#include <stdio.h>
#include <stdlib.h>

int findWithCondition(int tab[], int n, int (*condition)(int)){
    for(int i=n-1;i>=0;i--){
        if (condition(tab[i])){
            return i;
        }
    }
    return -1;
}

int cond(int a){
    return abs(a%2);
}

int main()
{
    int tab[] = {3,-4,5,-6,-7};
    printf("%d\n", findWithCondition(tab,5, cond));
    return 0;
}
