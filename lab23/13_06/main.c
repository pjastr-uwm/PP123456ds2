#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[20];
    int age;
};

struct Person* initPerson(char name2[20], int age2){
    struct Person* ptr = malloc(sizeof(struct Person));
    int i;
    for(i=0; name2[i] !=0;i++){
        ptr->name[i] = name2[i];
    }
    ptr->name[i] = 0;
    ptr->age = age2;
    return ptr;
}

void showPerson(struct Person arg){
    printf("%s %d\n", arg.name, arg.age);
}

void birthday(struct Person* ptr){
    ptr->age ++;
}

int main()
{
    char name2[20] = "AA";
    struct Person * ptr = initPerson(name2, 33);
    showPerson(*ptr);
    birthday(ptr);
    showPerson(*ptr);
    return 0;
}
