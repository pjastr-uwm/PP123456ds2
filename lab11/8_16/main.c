#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a=5, b=12;
    printf("%d %d\n", a,b);
    swap(&a,&b);
    printf("%d %d\n", a,b);
    return 0;
}
