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
    return 0;
}
