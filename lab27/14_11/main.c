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

struct element * addLast(struct element * list, int a){
    struct element * ptr2 = malloc(sizeof(struct element));
    ptr2->x = a;
    ptr2->next = NULL;
    if (list == NULL){
        return ptr2;
    }
    struct element * ptr = list;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = ptr2;
    return list;
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 5;
    list->next = malloc(sizeof(struct element));
    list->next->x = -7;
    list->next->next = NULL;
    printListWithoutHead(list);
    list = addLast(list, 11);
    printListWithoutHead(list);
    struct element * list2 = NULL;
    printListWithoutHead(list2);
    list2 = addLast(list2, 4);
    printListWithoutHead(list2);
    list2 = addLast(list2, -3);
    printListWithoutHead(list2);
    return 0;
}
