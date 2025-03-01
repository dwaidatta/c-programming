#include <stdio.h>

double square(double num){
    return (num * num);
}


int main() {

    double x = square(2.78);
    printf("%lf", x);

    return 0;
}