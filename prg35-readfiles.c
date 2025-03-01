#include <stdio.h>

int main() {

    FILE *pF = fopen("poem.txt", "r");
    char buffer[255]; // to hold lines from file

    if(pF == NULL){
        printf("Unable to open file.");
    }
    else{
        while(fgets(buffer, 255, pF) != NULL){
            printf("%s\n", buffer);
        }
    }

    fclose(pF);

    return 0;
}