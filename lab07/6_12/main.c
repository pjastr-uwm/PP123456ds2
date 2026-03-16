#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    while(a!=b){
        if (a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    printf("nwd %d\n", a);
    return 0;
}
