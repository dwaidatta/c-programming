#include <stdio.h>

int main(){
    // format specifier

    // %.1 decimal precision
    // %1 = minimum field width
    // %- left align

    float item1 = 233.23;
    float item2 = 233.579;
    float item3 = 233.956;

    printf("Item 1: $%10.2f\n",item1);
    printf("Item 2: $%10.2f\n",item2);
    printf("Item 3: $%-10.2f\n",item3);

    return 0;
}