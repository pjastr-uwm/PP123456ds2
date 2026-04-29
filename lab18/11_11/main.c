#include <stdio.h>
#include <stdlib.h>

void rmLower(char txt[]){
    int i,j=0;
    for(i=0; txt[i]!=0;i++){
        if (txt[i] <'a' || txt[i] >'z'){
            txt[j] = txt[i];
            j++;
        }
    }
    txt[j] = 0;
}

int main()
{
    char txt1[] = "";
    printf("%s.\n", txt1);
    rmLower(txt1);
    printf("%s.\n", txt1);
    char txt2[] = "Piotr";
    printf("%s.\n", txt2);
    rmLower(txt2);
    printf("%s.\n", txt2);
    char txt3[] = "343423aaaWW";
    printf("%s.\n", txt3);
    rmLower(txt3);
    printf("%s.\n", txt3);
    char txt4[] = "aaaa444";
    printf("%s.\n", txt4);
    rmLower(txt4);
    printf("%s.\n", txt4);
    char txt5[] = "_____";
    printf("%s.\n", txt5);
    rmLower(txt5);
    printf("%s.\n", txt5);
    return 0;
}
