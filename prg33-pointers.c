#include <stdio.h>

void printAge(int age){
    printf("Age: %d\n", age);
}

void printAgeP(int *pAge){
    printf("Age: %d\n", *pAge); // needs dereferencing
}

int main() {

    int age = 22;
    int *pAge = &age; // * indirection operator, the data type must be same as the org var

    printf("Memory address of age: %p\n", &age);
    printf("Value pAge: %p\n", pAge);
    printf("Value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge); //dereferencing

    printf("Size of age: %d\n", sizeof(age));
    printf("Size of pAge: %d\n", sizeof(pAge));

    printAge(age);
    printAgeP(pAge);

    int num = 10;
    int *pNum = NULL; // good practice to assign NULL if declaring a pointer w/o var 
    pNum = &num;

    return 0;
}