#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dodatnie=0;
    int ujemne=0;
    int x;
    scanf("%d", &x);
    do{
        if(x >0){
            dodatnie += x;
        }
        else{
            ujemne += x;
        }
        scanf("%d", &x);
    } while (x!=0);
    printf("suma dodatnich %d\n", dodatnie);
    printf("suma ujemnych %d\n", ujemne);
    return 0;
}
