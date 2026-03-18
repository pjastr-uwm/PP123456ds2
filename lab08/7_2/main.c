#include <stdio.h>
#include <stdlib.h>

int calculateAbsoluteValue(int a){
    if (a>0)
        return a;
    return -a;
}

int main()
{
    printf("%d\n", calculateAbsoluteValue(5));
    printf("%d\n", calculateAbsoluteValue(-12));
    printf("%d\n", calculateAbsoluteValue(0));
    return 0;
}
