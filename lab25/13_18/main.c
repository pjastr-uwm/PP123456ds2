#include <stdio.h>
#include <stdlib.h>

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN};

void print_days(enum Day day, int n){
    if(n<=0)
        return;
    switch(day){
        case MON:
            printf("MON");
            break;
        case TUE:
            printf("TUE");
            break;
        case WED:
            printf("WED");
            break;
        case THU:
            printf("THU");
            break;
        case FRI:
            printf("FRI");
            break;
        case SAT:
            printf("SAT");
            break;
        case SUN:
            printf("SUN");
            break;
    }
    printf("\n");
    day = (day+1)%7;
    print_days(day, --n);
}

int main()
{
    enum Day d1 = WED;
    print_days(d1,10);
    printf("%zu\n", sizeof(enum Day));
    return 0;
}
