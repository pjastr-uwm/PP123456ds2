#include <stdio.h>
#include <stdlib.h>

float calculatePowerOfTwo(int n){
    float temp=1;
    if (n>=1){
        for(int i=1;i<=n;i++){
            temp *=2;
        }
        return temp;
    }
    for(int i=-1;i>=n;i--){
        temp /=2;
    }
    return temp;
}

int main()
{
    printf("%f\n", calculatePowerOfTwo(4));
    return 0;
}
