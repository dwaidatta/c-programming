#include <stdio.h>
#include <string.h>

int main() {

    char x = 'X';
    char y = 'Y';
    char temp1;

    temp1 = x;
    x = y;
    y = temp1;

    printf("%c\n", x);
    printf("%c\n", y);

    char a[25] = "water";
    char b[25] = "petrol";
    char temp2[25];

    strcpy(temp2, a);
    strcpy(a, b);
    strcpy(b, temp2);

    printf("%s\n", a);
    printf("%s\n", b);

    return 0;
}