#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int num1 = rand() % 6 + 1; // rand between 1 and 6 (1 and 6 included)
    printf("%d", num1);

    return 0;
}