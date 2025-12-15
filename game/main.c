#include <stdio.h>
#include <stdlib.h>

void zeraTabuleiro(char tabuleiro[3][3]) {
    int i;
    int j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
};

void exibeTabuleiro(char tabuleiro[3][3]) {
    int i;
    int j;

    for (i = 0; i <  3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c |", tabuleiro[i][j]);
        }

        printf("\n");
    }
};

int main() {
    char tabuleiro[3][3];
    char c1 = "X";
    char c2 = "O";

    zeraTabuleiro(tabuleiro);
    exibeTabuleiro(tabuleiro);

    return 0;
};
