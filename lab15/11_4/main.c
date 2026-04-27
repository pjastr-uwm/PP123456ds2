#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char t1[], char t2[]){
    int i;
    for(i=0; t1[i] !=0 && t2[i] !=0;i++){
        if (t1[i] != t2[i]){
            return 0;
        }
    }
    if (t1[i] !=0 || t2[i] !=0){
        return 0;
    }
    return 1;
}

int main()
{
    printf("%d\n", cmpStrNew("ABC", "ABCD"));
    char * txt1 = "ABC";
    char txt2[] = "ABC";
    printf("%p\n", txt1);
    printf("%p\n", txt2);
    printf("%d\n", cmpStrNew(txt1, txt2));
    return 0;
}
