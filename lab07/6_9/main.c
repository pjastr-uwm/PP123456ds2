#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d", &n);
    if (n<3){
        printf("Wynik 0");
        return 0;
    }
    int biezacy, poprzednik, poprzednik2;
    printf("Podaj a1\n");
    scanf("%d", &poprzednik2);
    printf("Podaj a2\n");
    scanf("%d", &poprzednik);
    int i=3;
    int licznik =0;
    while(i<=n){
        printf("Podaj a%d\n", i);
        scanf("%d", &biezacy);
        if (2* poprzednik - poprzednik2 < biezacy){
            licznik++;
        }
        i++;
        poprzednik2 = poprzednik;
        poprzednik = biezacy;
    }
    printf("Wynik %d\n", licznik);
    return 0;
}
