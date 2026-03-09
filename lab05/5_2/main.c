#include <stdio.h>
int main() {
    // to zadanie trzecie a nie 5_2
    int x = 7;    // x =7 , y = , z =
    int y = 3;    // x =7 , y =3 , z =
    int z = 12;   // x =7 , y =3 , z =12
    x = x * 2;    // x =14 , y =3 , z =12
    y = y + x;    // x =14 , y =17 , z =12
    z = z - y;    // x =14 , y =17 , z =-5
    x = z / 2;    // x =-2 , y =17 , z =-5
    y = x % 3;    // x =-2 , y =-2, z =5
    z = x + y;    // x =-2 , y =-2 , z =-4
    x = z++;      // x =-4 , y =-2 , z =-3
    y = ++x;      // x =-3 , y =-3 , z =-3
    z = y--;      // x =-3 , y =-4 , z =-3
    return 0;
}
