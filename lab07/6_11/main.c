#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<0) n = -n;
    int suma = 0;
    while (n>0){
        int cyfra = n%10;
        printf("%d\n", cyfra);
        suma += cyfra;
        n /= 10;
    }
    printf("suma cyfr %d\n", suma);
    return 0;
}
