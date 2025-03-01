#include <stdio.h>

int main() {

    char grade;
    printf("Enter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect");
            break; // to break out of switch case
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Bad");
            break;
        case 'E':
            printf("Fail");
            break;
        default:
            printf("Enter valid grades.");
    }


    return 0;
}