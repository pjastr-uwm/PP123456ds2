#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    //printf("%s\n", (x %2 ==0) ? "parzysta\n" : "nieparzysta\n");
    printf("%s\n", (x %2 !=0) ? "nieparzysta\n" : "parzysta\n");
    return 0;
}
