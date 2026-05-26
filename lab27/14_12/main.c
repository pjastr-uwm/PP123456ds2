#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithHead(struct element * list){
    struct element * ptr = list->next;
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

void addLast(struct element * list, int a){
    struct element * ptr2 = malloc(sizeof(struct element));
    ptr2->x = a;
    ptr2->next = NULL;
    struct element * ptr = list;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = ptr2;
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -7;
    list->next->next->next = NULL;
    printListWithHead(list);
    addLast(list, 11);
    printListWithHead(list);
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = NULL;
    printListWithHead(list2);
    addLast(list2, -3);
    printListWithHead(list2);
    addLast(list2, 8);
    printListWithHead(list2);
    return 0;
}
