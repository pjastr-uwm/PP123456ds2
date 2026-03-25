#include <stdio.h>
#include <stdlib.h>

int* initInts()
{
    int* ptr = malloc(3*sizeof(int));
    *ptr = 5;
    *(ptr+1) = -12;
    *(ptr+2) = 33;
    return ptr+1;
}

int main()
{
    int * result = initInts();
    printf("%d\n", *(result-1));
    printf("%d\n", *result);
    printf("%d\n", *(result+1));
    return 0;
}
