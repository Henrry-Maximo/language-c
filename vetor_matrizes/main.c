#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// imprimir valores da matriz em sequencia, matriz index 0 até 5
// realizar a soma dos valores
// encontrar o menor valor
// encontrar o maior valor

typedef struct {
    int v[3][3];
    char name;
} s_pessoa;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 (valor anterior, atual, novo)

int main()
{
    int v[3][3], i, j, sum = 0, new_value_bigger, current_bigger, new_value_smaller, current_smaller;

    /*
    v[0][0] = 1;
    v[0][1] = 2;
    v[0][2] = 3;

    v[1][0] = 10;
    v[1][1] = 8;
    v[1][2] = 6;

    v[2][0] = 4;
    v[2][1] = 11;
    v[2][2] = 14;
   */

    for (int c = 0; c < 3; c++) {
        printf("bloco %d%\n", c);
        for (int r = 0; r < 3; r++) {
            printf("Digite o valor da posicao: ");
            scanf("%d", &v[c][r]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        printf("bloco %d: ", i);

        for (j = 0; j < 3; j++){
            sum += v[i][j];
            printf("%d\t", v[i][j]);
        }

        printf("\nsoma das linhas: %d", sum);
        sum = 0;
        printf("\n");

        for (j = 0; j < 3; j++) {
            current_bigger = v[i][0];
            new_value_bigger = v[i][j];
            if (current_bigger < new_value_bigger) {
                current_bigger = new_value_bigger;
            }
        }

        for (j = 0; j < 3; j++) {
            current_smaller = v[i][0];
            new_value_smaller = v[i][j];
            if (current_smaller > new_value_smaller) {
                current_smaller = new_value_smaller;
            }
        }

        printf("O maior valor eh: %d\n", current_bigger);
        printf("O menor valor eh: %d\n\n", current_smaller);
    }

    return 0;
}
