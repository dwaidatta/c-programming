#include <stdio.h>
#include <string.h>

int main() {

    // FOR LOOP

    for(int i = 1; i <=5; i++){
        printf("%d\n", i);
    }
    for(int i = 1; i <=20; i+=5){
        printf("%d\n", i);
    }

    // WHILE LOOP

    char name[25];
    printf("Name: ");
    fgets(name, 25, stdin);

    name[strlen(name)-1] = '\0';

    while(strlen(name)==0){
        printf("Name not entered.\n");
        printf("Name: ");
        fgets(name, 25, stdin);

        name[strlen(name)-1] = '\0';
    }

    printf("Hello %s\n", name);
    
    // DO WHILE LOOP

    int num = 0;
    int sum = 0;

    do{
        printf("Enter a num > 0: ");
        scanf("%d", &num);
        if(num>0){
            sum += num;
        }
    }while(num>0);

    printf("%d\n", sum);

    int rows = 5;
    int cols = 4;
    char symbol = '*';

    // NESTED LOOP

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }

    return 0;
}