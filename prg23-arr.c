#include <stdio.h>
#include <string.h>

int main() {

    int prices[] = {100, 300, 200, 500, 600};
    char name[] = "DDDD"; // string is arr of chars

    printf("$%d\n", prices[1]);

    // int arr[5]; // 5 ele array
    // arr[2] = 42;

    // printf("%d", arr[2]);

    /*
    for(int i=0; i<5; i++){
        printf("Price: $%d\n", prices[i]);
    }
    */

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("Price: $%d\n", prices[i]);
    }

    // sizeof () gives total bytes

    // 2D array

    int nums[2][3] = { 
                      {1,2,3},
                      {4,5,6}
                     }; // [row][col]


    nums[0][1] = 10;
    printf("%d\n", nums[0][1]);
    printf("%d\n", nums[1][2]);

    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d ", nums[i][j]);
    //     }
    //     printf("\n");
    // }

    int rows = sizeof(nums)/sizeof(nums[0]); // arr/ 1 row
    int cols = sizeof(nums[0])/sizeof(nums[0][0]); // row / 1 ele in col

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }


    char cars[][10] = {"BMW", "Mustang", "Chervolet"};

    strcpy(cars[0], "Tesla"); // for changing values in str arr

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }


    return 0;
}