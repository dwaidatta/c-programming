#include <stdio.h>
#include <stdbool.h>

int main(){
    
    char a = 'C'; // single character %c
    char b[] = "Hello"; // array of characters %s

    float c = 1.254326; // 4 bytes %f
    float d = 1.254326870379; // 8 bytes %lf

    bool e = true; // 1 byte true or false %d
    printf("%d\n",e);

    char f = 97; // 1 byte (-128 to +128) %d %c
    printf("%d\n",f);
    printf("%c\n",f);

    unsigned char g = 255; // 1 byte 0 to +255
    signed char h = 100; // signed is used implicitly

    short int i = 10; // 2 bytes %d
    unsigned short int j = 10200; // 2 bytes %u

    // can just use "short" instead of "short int"

    // "long int" is implicit

    long long int k = 1000000000; // %lld
    unsigned long long int l = 999999999999U; // %llu

    return 0;
}