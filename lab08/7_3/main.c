#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(int n){
    if(n<0){
        printf("error\n");
        exit(-1);
    }
    int silnia = 1;
    for(int i=2;i<n;i++){
        silnia *=i;
    }
    return silnia;
}

int main()
{
    printf("%d\n", calculateFactorial(-2));
    printf("%d\n", calculateFactorial(1));
    printf("%d\n", calculateFactorial(5));
    return 0;
}
