#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main() {

    enum Day today = Sun;

    printf("%d\n", today); // enums are not strings but can be treated as int

    if(today == 1 || today == 7){
        printf("Weekend");
    }
    else{
        printf("Work!");
    }

    if(today == Sun || today == Sat){
        printf("Weekend");
    }
    else{
        printf("Work!");
    }

    return 0;
}