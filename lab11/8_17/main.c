#include <stdio.h>
#include <stdlib.h>

void swap(double *p1, double *p2){
    if (*p1 * *p2 < 0){
        double temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

int main()
{
    double a=-5.2, b=12.4;
    printf("%lf %lf\n", a,b);
    swap(&a,&b);
    printf("%lf %lf\n", a,b);
    return 0;
}
