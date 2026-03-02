#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    scanf("%d", &rok);
    if (rok %4 != 0){
        printf("Rok nie jest przestepny\n");
    }
    else if (rok %100 !=0){
        printf("Rok jest przestepny\n");
    }
    else if (rok % 400 !=0){
        printf("Rok nie jest przestepny\n");
    }
    else{
        printf("Rok jest przestepny\n");
    }
    return 0;
}
