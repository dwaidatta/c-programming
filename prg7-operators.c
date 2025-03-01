#include <stdio.h>

int main(){
    // operators

    /*
        + addition
        - subtraction
        * multiplication
        / division
        % modulus
        ++ increment
        -- decrement
        = assignment
    */

    int x = 5;
    int y = 2;

    float z = x / (float)y;
    printf("%.2f\n",z);

    int k = x % y;
    printf("%d\n",k);

    x++;
    y--;

    printf("%d\n",x++);
    printf("%d\n",y++);
    printf("%d\n",++x);
    printf("%d\n",++y);

    return 0;
}