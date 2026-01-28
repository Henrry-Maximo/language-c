#include <stdio.h>
#include <stdlib.h>

void zeraTabuleiro(char tabuleiro[3][3])
{
    int i;
    int j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
};

void exibeTabuleiro(char tabuleiro[3][3])
{
    int i;
    int j;

    for (i = 0; i <  3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c |", tabuleiro[i][j]);
        }

        printf("\n");
    }
    printf("\n\n");
};

void jogada(char tabuleiro[3][3], char player)
{
    int x, y;

    while (1)
    {
        printf("Entre com as coordenadas: ");
        scanf("%d %d", &x, &y);

        // usuário digitou uma posição que não existe
        if ((x > 2 || y > 2) || (x < 0 || y < 0))
        {
            printf("Coordenadas invalidas\n");
        }
        else if (tabuleiro[x][y] == ' ')
        {
            tabuleiro[x][y] = player;
            break;
        }
        else
        {
            printf("Essa posicao nao pode ser utilizada\n");
        }

        // tabuleiro[x][y] = c1;
    }
}

int main()
{
    char tabuleiro[3][3];
    char c1 = 'X';
    char c2 = 'O';
    char player = c1;

    zeraTabuleiro(tabuleiro);
    exibeTabuleiro(tabuleiro);

    while (1)
    {
        jogada(tabuleiro, player);
        // quando usamos uma linha embaixo do bloco if, podemos remover as chaves
        if (player == c1) player = c2;
        else player = c1;
        exibeTabuleiro(tabuleiro);
    }

    return 0;
};
