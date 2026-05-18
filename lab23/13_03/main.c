#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char * color;
};

int main()
{
    struct Rectangle r1 = {4.5, 2.3, "red"};
    struct Rectangle r2 = {2.7, 5.7, "green"};
    struct Rectangle r3 = {4.9, 6.1, "brown"};
    struct Rectangle r4 = {1.9, 9.5, "cyan"};
    struct Rectangle tab[] = {r1,r2,r3,r4};
    for(int i=0;i<4;i++){
        printf("%f %f %s\n", tab[i].width, tab[i].height, tab[i].color);
    }
    struct Rectangle tab2[] =
    {
        {4.5, 2.3, "red"},
        {2.7, 5.7, "green"},
        {4.9, 6.1, "brown"},
        {1.9, 9.5, "cyan"}
    };
    for(int i=0;i<4;i++){
        printf("%f %f %s\n", tab2[i].width, tab2[i].height, tab2[i].color);
    }
    return 0;
}
