#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int suma = 0;
    int i=1;
    while(i<=n){
        suma += i;
        i++;
    }
    printf("%d\n", suma);
    return 0;
}
