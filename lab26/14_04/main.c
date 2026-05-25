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

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    printListWithHead(list);
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = NULL;
    printListWithHead(list2);
    return 0;
}
