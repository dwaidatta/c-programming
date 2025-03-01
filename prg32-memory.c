#include <stdio.h>

int main() {

    short a = 'X';
    char b = 'Y';
    double c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    char i;
    char j[100];

    printf("%d bytes\n", sizeof(i));
    printf("%d bytes\n", sizeof(j));

    printf("%p\n", &i);
    printf("%p\n", &j);

    return 0;
}