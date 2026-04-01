#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2){
    return operation(number1, number2);
}

double foo(double x, double y){
    return x+2*y;
}

int main()
{
    printf("%lf\n", calculateOperation(pow, 3,4));
    printf("%lf\n", calculateOperation(foo, -3.4,1e2));
    return 0;
}
