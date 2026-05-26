#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * createWithHead(){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->next = NULL;
    return ptr;
}

int main()
{
    struct element * list = createWithHead();
    printf("%p\n", list);
    return 0;
}
