#include <stdio.h>

void birthday(char name[], int age){ // parameters
    printf("HBD %s. You are %d years old.", name, age);
}

int main() {

    char name[] = "Bro";
    int age = 21;

    birthday(name, age); // arguments


    return 0;
}