#include <stdio.h>
#include <stdlib.h>

int lexComp(char txt1[], char txt2[]){
    int i;
    for(i=0; txt1[i] !=0 && txt2[i] !=0;i++){
        if(txt1[i] < txt2[i]){
            return 1;
        }
        if(txt1[i] > txt2[i]){
            return 0;
        }
    }
    if(txt1[i] !=0){
        return 0;
    }
    if(txt2[i] !=0){
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", lexComp("ABC", "KLM"));
    printf("%d\n", lexComp("KLM", "ABC"));
    printf("%d\n", lexComp("M3r", "abc"));
    printf("%d\n", lexComp("Piotr", "Patryk"));
    printf("%d\n", lexComp("ABC", "ABC"));
    printf("%d\n", lexComp("ABC", "ABCD"));
    return 0;
}
