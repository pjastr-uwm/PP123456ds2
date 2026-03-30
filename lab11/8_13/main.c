#include <stdio.h>
#include <stdlib.h>

int* minPtr(int*p1, int*p2, int*p3)
{
    int min = *p1;
    int* ptr = p1;
    if (min > *p2){
        min = *p2;
        ptr = p2;
    }
    if (min > *p3){
        min = *p3;
        ptr = p3;
    }
    return ptr;
}

int main()
{
    int x=4, y =-8, z=-98;
    printf("%d %p\n", x, &x);
    printf("%d %p\n", y, &y);
    printf("%d %p\n", z, &z);
    printf("%p\n",minPtr(&x, &y, &z));
    return 0;
}
