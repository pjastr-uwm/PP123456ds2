#include <stdio.h>
#include <stdlib.h>

int length(const char * txt){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

char* toLowerNew(const char* txt){
    int n =length(txt);
    char * temp = malloc((n+1)*sizeof(char));
    for(int i=0;i<n;i++){
        temp[i] = txt[i];
        if('A' <= temp[i] && temp[i] <= 'Z'){
            temp[i] +=32;
        }
    }
    temp[n] = 0;
    return temp;
}

int main()
{
    char txt []= "OLSZTYN";
    printf("%s\n", toLowerNew(txt));
    return 0;
}
