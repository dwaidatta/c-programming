#include <stdio.h>

void hello(char[], int); // function prototype

int main() {

    char name[] = "bro";
    int age = 24;

    // hello(name); // will give error rather than running due to func prototype

    hello(name, age);
    return 0;
}

void hello(char name[], int age){
    printf("%s, %d", name, age);
}
