#include <stdio.h>
#include <stdlib.h>

struct Car{
    char * brand;
    char model[20];
    int year;
    int isAvailable;
};

int main()
{
    struct Car c1 = {"AA", "BB", 2020, 0};
    printf("%s %s %d %d\n", c1.brand, c1.model, c1.year, c1.isAvailable);
    return 0;
}
