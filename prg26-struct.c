#include <stdio.h>
#include <string.h>

struct Player{ // class like, not methods
    char name[12];
    int score;
};

int main() {

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Priya");
    player1.score = 100;

    strcpy(player2.name, "Shreya");
    player2.score = 99;

    printf("%s\t%d\n", player1.name, player1.score);
    printf("%s\t%d\n", player2.name, player2.score);

    return 0;
}