#include <stdio.h>
#include <stdlib.h>

int length(const char *txt){
    int i=0;
    while(txt[i] !=0 ){
        i++;
    }
    return i;
}

char* toUpperNew(const char *txt){
    int n = length(txt);
    char * temp = malloc(sizeof(char) * (n+1));
    int i;
    for(i=0;i<n;i++){
        temp[i] = txt[i];
        if ('a' <= txt[i] && txt[i] <= 'z'){
            temp[i] -= 32;
        }
    }
    temp[i] = 0;
    return temp;
}

int main()
{
    char * txt = "Olsztyn234";
    printf("%s\n", txt);
    printf("%s\n", toUpperNew(txt));
    return 0;
}
