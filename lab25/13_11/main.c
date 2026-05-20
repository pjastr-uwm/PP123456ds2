#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char * brand;
    int number_of_cores;
};


int maxCores(struct Computer tab[], int n){
    struct Computer temp = tab[0];
    for(int i=1;i<n;i++){
        if (tab[i].number_of_cores > temp.number_of_cores){
            temp = tab[i];
        }
    }
    return temp.number_of_cores;
}


int main()
{
    struct Computer tab[] =
    {
        {"AA", 4},{"BBB", 3},{"FF", 5}
    };
    printf("%d\n",maxCores(tab,3));
    return 0;
}
