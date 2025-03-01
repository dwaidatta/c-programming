#include <stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("Adult");
    }
    else if(age < 0){
        printf("Hmm");
    }
    else if (age == 0){
        printf("Just born");
    }
    
    else{
        printf("Child");
    }

    return 0;
}
