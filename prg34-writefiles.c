#include <stdio.h>

int main() {

    FILE *pF = fopen("fantasy.txt", "w");
    // can use relative or absolute paths too

    fprintf(pF, "1st line.");

    fclose(pF);

    pF = fopen("fantasy.txt", "w");

    fprintf(pF, "All lost in W");

    fclose(pF);

    pF = fopen("fantasy.txt", "a");

    fprintf(pF, "\nAppending new words!!!");

    fclose(pF);

    // if(remove("fantasy.txt") == 0){ // 0 denotes successful operation
    //     printf("File deleted.");
    // }
    // else{
    //     printf("File NOT deleted.");
    // }

    return 0;
}