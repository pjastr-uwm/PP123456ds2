#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int foo(int arg){
    return arg+10;
}

int main()
{
    printf("%d\n", calculate(abs, -45));
    printf("%d\n", calculate(foo, 34));
    return 0;
}
