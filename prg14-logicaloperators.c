#include <stdio.h>
#include <stdbool.h>

int main() {

    int temp = 100;
    bool sunny = false;

    if(temp >= 0 && temp <= 30 && sunny){ // can use sunny==1, sunny==true, sunny only
        printf("Good weather and sunny");
    }

    if(temp >= 0 && temp <= 30 || sunny){
        printf("Good weather and maybe sunny");
    }

    sunny = false;
    if(!sunny){
        printf("Not sunny");
    }



    return 0;
}