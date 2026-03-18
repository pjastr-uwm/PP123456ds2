#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main()
{
    printf("%d\n", sumNumbers(5));
    return 0;
}
