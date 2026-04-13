#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int tab[]){
    for(int i=0;i<n;i++){
        int temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
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
    int tab[] = {4,-6,7,22,1};
    printTable(5, tab);
    reverseArr(5, tab);
    printTable(5, tab);
    return 0;
}
