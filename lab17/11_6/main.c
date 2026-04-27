#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    for(int i=0; txt[i] !=0;i++){
        if ('A' <= txt[i] && txt[i] <= 'Z'){
            txt[i] += 32;
        }
    }
}

int main()
{
    char txt[] = "OlsztynABC45";
    toLowerNew(txt);
    printf("%s\n", txt);
    return 0;
}
