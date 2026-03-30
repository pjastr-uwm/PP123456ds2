#include <stdio.h>
#include <stdlib.h>

float* initFloats(){
    float * temp = malloc(3*sizeof(float));
    * temp = 4.5f;
    *(temp+1) = 2.3f;
    *(temp+2) = -4.2f;
    return temp;
}

int main()
{
    float * result = initFloats();
    printf("%f\n", *result);
    printf("%f\n", *(result+1));
    printf("%f\n", *(result+2));
    return 0;
}
