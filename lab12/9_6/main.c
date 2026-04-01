#include <stdio.h>
#include <stdlib.h>

int applyCondition(int (*condition)(int), int (*action)(int), int value){
    if (condition(value) == 1){
        return action(value);
    }
    return value;
}

int foo(int arg){
    return arg %2;
}

int foo2(int arg){
    return arg*arg;
}

int main()
{
    printf("%d\n", applyCondition(foo, foo2, 5));
    printf("%d\n", applyCondition(foo, foo2, 6));
    printf("%d\n", applyCondition(foo, foo2, -5));
    return 0;
}
