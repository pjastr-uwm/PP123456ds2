#include <stdio.h>
#include <stdlib.h>

int length(char * txt){
    int i=0;
    while(txt[i] != '\0'){
        i++;
    }
    return i;
}

int length2(char * txt){
    int i;
    for(i=0; txt[i] != '\0'; i++){

    }
    return i;
}

int length3(char * txt){
    int i=0;
    while(txt[i] != 0){
        i++;
    }
    return i;
}

int length4(char * txt){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

int length5(char * txt){
    int i=0;
    while(*(txt+i)){
        i++;
    }
    return i;
}

int length6(char * txt){
    if (txt[0] == 0){
        return 0;
    }
    return 1+length6(++txt);
}


int main()
{
    printf("%d\n", length("Olsztyn"));
    printf("%d\n", length2("Olsztyn"));
    printf("%d\n", length3("Olsztyn"));
    printf("%d\n", length4("Olsztyn"));
    printf("%d\n", length5("Olsztyn"));
    printf("%d\n", length6("Olsztyn"));
    return 0;
}
