#include <stdio.h>
#include <stdlib.h>

void removeLastDigit(char txt[])
{
    int index =-1;
    int i;
    for(i=0; txt[i]!=0;i++){
        if ('0' <= txt[i] && txt[i] <= '9'){
            index = i;
        }
    }
    if (index == -1)
        return;
    for(i = index; txt[i]!=0;i++){
        txt[i] = txt[i+1];
    }
    //txt[i] = 0;
}

int main()
{
    char txt[] = "a2bc6D";
    printf("%s\n", txt);
    removeLastDigit(txt);
    printf("%s\n", txt);
    return 0;
}
