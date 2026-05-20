#include <stdio.h>
#include <stdlib.h>

union Number{
    int a;
    float b;
};

struct Data{
    int type; // 0 int, 1 float
    union Number num;
};

struct Data input(){
    struct Data temp;
    printf("Select type: 0-int, 1-float\n");
    scanf("%d", &temp.type);
    if (temp.type ==0){
        printf("Input int:\n");
        scanf("%d", &temp.num.a);
    }
    else{
        printf("Input float:\n");
        scanf("%f", &temp.num.b);
    }
    return temp;
};

void printData(struct Data arg){
    if (arg.type == 0){
        printf("int %d\n", arg.num.a);
    }
    else{
        printf("float %f\n", arg.num.b);
    }
}

int main()
{
    struct Data d1 = input();
    printData(d1);
    return 0;
}
