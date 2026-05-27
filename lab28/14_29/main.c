#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

int floorSqrt(int n){
    int i=0;
    while(i*i<=n){
        i++;
    }
    return i-1;
}

void printPerfectSquares(struct node * list){
    struct node * ptr = list;
    while(ptr != NULL){
        int n = ptr->i;
        if (n >=0 && floorSqrt(n)*floorSqrt(n) == n){
            printf("%d\n", n);
        }
        ptr = ptr->next;
    }
}

int main()
{
    struct node * list = malloc(sizeof(struct node));
    list->i = -5;
    list->next = malloc(sizeof(struct node));
    list->next->i = 81;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 70;
    list->next->next->next = NULL;
    printPerfectSquares(list);
    return 0;
}
