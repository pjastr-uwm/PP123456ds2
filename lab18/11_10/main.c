#include <stdio.h>
#include <stdlib.h>

void strConcat(char nap1[], char nap2[], char nap3[]){
    int i,j=0; //i- do odczytu, j - do zapisu
    for(i=0; nap1[i] !=0;i++){
        nap3[j] = nap1[i];
        j++;
    }
    for(i=0; nap2[i] !=0;i++){
        nap3[j] = nap2[i];
        j++;
    }
    nap3[j] = 0;
}

int main()
{
    char t1[] = "AB";
    char t2[] = "CDE";
    char t3[20] = "INFORMATYKA";
    strConcat(t1,t2,t3);
    printf("%s\n", t3);
    return 0;
}
