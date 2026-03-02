#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    int max = (x>y) ? x : y;
    printf("max %d\n", max);
    return 0;
}
