#include <stdio.h>
#include <stdlib.h>

struct Bike{
    char model[40];
    int distance_travelled;
};

int length(char * txt){
    int i=0;
    while(txt[i] !=0){
        i++;
    }
    return i;
}

struct Bike* initBike(char model2[40],int distance_travelled2){
    int n = length(model2);
    if (n<=2 || distance_travelled2<=0){
        return NULL;
    }
    struct Bike* ptr = malloc(sizeof(struct Bike));
    for(int i=0;i<n;i++){
        ptr->model[i] = model2[i];
    }
    ptr->model[n] =0;
    ptr->distance_travelled = distance_travelled2;
    return ptr;
}

void increaseDistance(struct Bike* ptr){
    ptr->distance_travelled += 500;
}

int main()
{
    char model[40] = "AAAAA";
    struct Bike*ptr = initBike(model, 20000);
    if (ptr != NULL)
    {
        printf("%s %d\n", ptr->model, ptr->distance_travelled);
        increaseDistance(ptr);
        printf("%s %d\n", ptr->model, ptr->distance_travelled);
    }

    return 0;
}
