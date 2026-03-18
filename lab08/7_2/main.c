#include <stdio.h>
#include <stdlib.h>

float calculateAbsoluteValue(float a){
    if (a>0)
        return a;
    return -a;
}

int main()
{
    printf("%f\n", calculateAbsoluteValue(5));
    printf("%f\n", calculateAbsoluteValue(-12));
    printf("%f\n", calculateAbsoluteValue(0));
    return 0;
}
