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

void addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list->next;
    list->next = ptr;
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
    addFirst(list, 11);
    printListWithHead(list);
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = NULL;
    printListWithHead(list2);
    addFirst(list2, -3);
    printListWithHead(list2);
    addFirst(list2, 8);
    printListWithHead(list2);
    return 0;
}
