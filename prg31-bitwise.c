#include <stdio.h>

int main() {

    /*
        BITWISE OPERATORS

        & AND
        | OR
        ^ XOR
        << LEFT SHIFT
        >> RIGHT SHIFT
    */

    int x = 6; //   6   =   00000110
    int y = 12; //  12  =   00001100
    int z = 0; //   0   =   00000000

    z = x & y;
    printf("AND %d\n",z); // 4  =   00000100

    z = x | y;
    printf("OR %d\n",z); // 14  =   00001110

    z = x ^ y;
    printf("XOR %d\n",z); // 10  =   00001010

    z = x << 1;
    printf("LEFT SHIFT %d\n",z); // 12  =   00001100

    z = x >> 2;
    printf("RIGHT SHIFT %d\n",z); // 1  =   00000001

    return 0;
}