#include <stdio.h>
#include <string.h>

int main(){
    // int age;

    // printf("Age: ");
    // scanf("%d", &age);
    // printf("Your age: %d\n", age);

    char name[25]; // 25 bytes size

    // printf("Name: ");
    // scanf("%s", &name); // reads upto white space
    // printf("Your name is %s\n", name);

    printf("Name with spaces: ");
    fgets(name, 25, stdin); // reads with white spaces, 25 to match size of name[25]
    
    name[strlen(name)-1] = '\0'; // remove the newline in last char

    printf("Your name is %s\n", name);
    printf("Your name is %s\n", name);

    return 0;
}