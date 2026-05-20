#include <stdio.h>
#include <stdlib.h>

struct Airplane{
    char* model;
    int number_of_engines;
};

int minEngines(struct Airplane tab[], int n){
    struct Airplane temp = tab[0];
    for(int i=1;i<n;i++){
        if (tab[i].number_of_engines < temp.number_of_engines){
            temp = tab[i];
        }
    }
    return temp.number_of_engines;
}

int main()
{
    struct Airplane tab[] =
    {
        {"AAA", 4},{"PPP", 2},{"WWW", 5}
    };
    printf("%d\n", minEngines(tab,3));
    return 0;
}
