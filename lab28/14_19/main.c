#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithoutHead(struct element * list){
    struct element * ptr = list;
    if (ptr == NULL){
        printf("Empty list\n---\n");
        return;
    }
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

struct element* removeFirstWithoutHead(struct element * list){
    if (list == NULL){
        return NULL;
    }
    struct element * ptr = list->next;
    free(list);
    return ptr;
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 7;
    list->next = malloc(sizeof(struct element));
    list->next->x = -3;
    list->next->next = NULL;
    printListWithoutHead(list);
    list = removeFirstWithoutHead(list);
    printListWithoutHead(list);
    list = removeFirstWithoutHead(list);
    printListWithoutHead(list);
    list = removeFirstWithoutHead(list);
    printListWithoutHead(list);
    return 0;
}
