#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    printf("nwd %d\n", a);
    return 0;
}
