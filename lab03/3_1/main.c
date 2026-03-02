#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x > 0){
        printf("Liczba dodatnia\n");
    }
    else if (x==0){
        printf("Zero\n");
    }
    else{
        printf("Liczba ujemna\n");
    }
    return 0;
}
