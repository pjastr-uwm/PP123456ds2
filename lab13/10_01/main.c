#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size){
    int max = numbers[0];
    for(int i=1;i<size;i++){
        if (max < numbers[i]){
            max = numbers[i];
        }
    }
    printf("%d\n", max);
}

int main()
{
    int tab[] = {-3,-4,-2,-7,-8};
    printf("%p\n", tab);
    findMaxValue(tab, 5);
    return 0;
}
