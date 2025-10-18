#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    imprimir valores da matriz em sequencia, matriz index 0 até 5
    realizar a soma dos valores
    encontrar o menor valor
    encontrar o maior valor
*/

int main()
{
    int v[3][3], n[10], i, j, sum = 0, new_value_bigger, current_bigger, new_value_smaller, current_smaller;

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

    //printf("Digite 10 valores: ");
    char message[20];

    for (int r = 0; r < 10; r++) {
        switch (r) {
            case 0:
                strcpy(message, "Digite o primeiro valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 1:
                strcpy(message, "Digite o segundo valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 2:
                strcpy(message, "Digite o terceiro valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 3:
                strcpy(message, "Digite o quarto valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 4:
                strcpy(message, "Digite o quinto valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 5:
                strcpy(message, "Digite o sexto valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 6:
                strcpy(message, "Digite o setimo valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 7:
                strcpy(message, "Digite o oitavo valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 8:
                strcpy(message, "Digite o nono valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 9:
                strcpy(message, "Digite o decimo valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
            case 10:
                strcpy(message, "Digite o decimo valor: ");
                printf("%s", message);
                scanf("%d", &n[r]);
                break;
        }
    }

    for (int b = 0; b < 10; b++) {
            int result = n[b] % 2;
            if (result == 0) {
                printf("O numero %d eh par. O resto da divisao por 2 eh: %d\n", n[b], result);
            } else {
                printf("O numero %d eh impar. O resto da divisao por 2 eh: %d\n", n[b], result);
            }
    }

    for (int c = 0; c < 3; c++) {
        printf("bloco %d\n", c);
        for (int r = 0; r < 3; r++) {
            printf("digite o valor da posicao: ");
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

        current_bigger = v[i][0];
        for (j = 0; j < 3; j++) {
            new_value_bigger = v[i][j];
            if (current_bigger < new_value_bigger) {
                current_bigger = new_value_bigger;
            }
        }

        current_smaller = v[i][0];
        for (j = 0; j < 3; j++) {
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
