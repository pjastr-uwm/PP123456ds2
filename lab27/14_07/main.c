#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * createNoHead(){
    return NULL;
}

int main()
{
    struct element * list = createNoHead();
    printf("%p\n", list);
    return 0;
}
