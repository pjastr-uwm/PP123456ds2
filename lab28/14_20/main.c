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

void removeFirstWithHead(struct element * list){
    if (list->next == NULL){
        return;
    }
    struct element * ptr = list->next;
    list->next = ptr->next;
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 7;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -3;
    list->next->next->next = NULL;
    printListWithHead(list);
    removeFirstWithHead(list);
    printListWithHead(list);
    removeFirstWithHead(list);
    printListWithHead(list);
    removeFirstWithHead(list);
    printListWithHead(list);
    return 0;
}
