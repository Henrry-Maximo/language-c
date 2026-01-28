#include <stdio.h>
#include <stdlib.h>

void clearBoard(char board[3][3])
{
    int i;
    int j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
};

void displayBoard(char board[3][3])
{
    int i;
    int j;

    for (i = 0; i <  3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c |", board[i][j]);
        }

        printf("\n");
    }
    printf("\n\n");
};

void play(char board[3][3], char player)
{
    int x, y;

    while (1)
    {
        printf("Enter the coordinates: ");
        scanf("%d %d", &x, &y);

        // usuário digitou uma posição que não existe
        if ((x > 2 || y > 2) || (x < 0 || y < 0))
        {
            printf("Invalid Coordinates\n");
        }
        else if (board[x][y] == ' ')
        {
            board[x][y] = player;
            break;
        }
        else
        {
            printf("Essa posicao nao pode ser utilizada\n");
        }

        // board[x][y] = c1;
    }
}

int validateBoard(char board[3][3], char player)
{
    int i;
    int j;

    // validação por linhas
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return 1;
        }
    }

    // validação por colunas
    for (i = 0; i < 3; i++)
    {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j])
        {
            return 1;
        }
    }

    // validação de diagonais
    if (board[0][0] != ' '
            && board[0][0] == board[1][1]
            && board[1][1] == board[2][2])
    {
        return 1;
    }

    if (board[0][2] != ' '
            && board[0][2] == board[1][1]
            && board[1][1] == board[2][0])
    {
        return 1;
    }

    return 0;
}

int main()
{
    char board[3][3];
    char c1 = 'X';
    char c2 = 'O';
    char player = c1;

    clearBoard(board);
    displayBoard(board);

    while (1)
    {
        play(board, player);
        displayBoard(board);
        if (validateBoard(board, player) == 1)
        {
            printf("O player %c VENCEU!\n", player);
            break;
        }
        else
        {
            // quando usamos uma linha embaixo do bloco if, podemos remover as chaves
            if (player == c1) player = c2;
            else player = c1;
        }
    }

    printf("END GAME");
    return 0;
};
