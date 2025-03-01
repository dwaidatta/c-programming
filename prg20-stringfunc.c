#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Bro";
    char string2[] = "Code";

    // strlwr(string1); // to lowercase
    // strupr(string1); // to uppercase
    // strcat(string1, string2); // appends str2 to end of str1
    // strncat(string1, string2, 2); // appends n chars of str2 to end of str1
    // strncpy(string1, string2, 2); // copy n chars of str2 to str 1

    // strset(string1, '*'); // sets all char of str to given char
    // strnset(string1, '*', 2); // sets first n chars of str to given char
    // strrev(string1); // reverses a string

    // int result = strlen(string1); // returns len of str
    // int result = strcmp(string1, string2); // str compare all chars, 0 if same
    // int result = strncmp(string1, string2, 2); // str compare n chars
    // int result = strcmpi(string1, string2); // ignore case 
    // int result = strnicmp(string1, string2, 1); // str compare n chars, ignore case


    printf("%s", string1);
    // printf("%d", result);

    return 0;
}