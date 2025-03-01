#include <stdio.h>

int main() {

    int x = 2;
    int y = 5;

    int max = (x >= y)? x : y;
    printf("%d", max);

    return 0;
}