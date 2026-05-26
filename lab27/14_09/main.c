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

struct element * addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list;
    return ptr;
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 5;
    list->next = malloc(sizeof(struct element));
    list->next->x = -7;
    list->next->next = NULL;
    printListWithoutHead(list);
    list = addFirst(list, 11);
    printListWithoutHead(list);
    struct element * list2 = NULL;
    printListWithoutHead(list2);
    list2 = addFirst(list2, 4);
    printListWithoutHead(list2);
    list2 = addFirst(list2, -3);
    printListWithoutHead(list2);
    return 0;
}
