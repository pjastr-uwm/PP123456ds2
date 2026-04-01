#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for(int i=start;i<=end;i++){
        printf("%d\n",func(i));
    }
}

int foo(int x){
    return x*x;
}

int foo2(int x){
    return x+15;
}

int main()
{
    applyFunction(foo, -6,10);
    printf("---\n");
    applyFunction(foo2, -6,10);
    return 0;
}
