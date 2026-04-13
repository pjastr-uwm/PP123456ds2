#include <stdio.h>
#include <stdlib.h>

void revCopy(int n, int tab1[], int tab2[]){
    for(int i=0;i<n;i++){
        tab2[n-1-i] = tab1[i];
    }
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n----------\n");
}

int main()
{
    int tab1[] = {4,-6,7,22,1};
    int tab2[] = {1,9,8,-4,-5};
    printTable(5, tab1);
    printTable(5, tab2);
    revCopy(5, tab1, tab2);
    printTable(5, tab1);
    printTable(5, tab2);
    return 0;
}
