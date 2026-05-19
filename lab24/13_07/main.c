#include <stdio.h>
#include <stdlib.h>

struct Car{
    char brand[20];
    int mileage;
};

struct Car initCar(char brand2[20], int mileage2){
    struct Car temp;
    int i;
    for(i=0; brand2[i] !=0;i++){
        temp.brand[i] = brand2[i];
    }
    temp.brand[i] = 0;
    temp.mileage = mileage2;
    return temp;
}

void showCar(struct Car arg){
    printf("%s %d\n", arg.brand, arg.mileage);
}

void mileageService(struct Car * ptr){
    ptr->mileage += 10000;
}

int main()
{
    char brand[20] = "BB";
    struct Car c1 = initCar(brand, 20000);
    showCar(c1);
    mileageService(&c1);
    showCar(c1);
    return 0;
}
