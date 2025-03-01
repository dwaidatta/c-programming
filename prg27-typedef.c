#include <stdio.h>

typedef char hello[25];

typedef struct {
    char name[25];
    char password[10];
    int id;
} User;

int main() {

    hello kello = "DD";

    User user1 = {"Acbd", "pass21", 1};
    User user2 = {"Ijkl", "lock12", 2};

    printf("%s\t%s\t%d", user1.name, user1.password, user1.id);

    return 0;
}