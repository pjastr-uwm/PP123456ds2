#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a =0.1453234;
    float b = 0.1434;
    float c = 0.1463;
    printf("%d\n", a+(b+c) == (a+b)+c);
    return 0;
}
