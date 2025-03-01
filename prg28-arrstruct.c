#include <stdio.h>

struct Student{
    char name[12];
    float gpa;
};

int main() {

    struct Student s1 = {"A", 8.5};
    struct Student s2 = {"B", 9.7};
    struct Student s3 = {"C", 6.4};
    struct Student s4 = {"D", 10.0};

    struct Student students[] = {s1, s2, s3, s4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%s\t%.2f\n", students[i].name, students[i].gpa);
    }

    return 0;
}