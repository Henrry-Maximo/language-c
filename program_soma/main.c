#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro1, inteiro2, soma;

    printf("Entre com o primeiro inteiro\n"); /* prompt */
    // string de controle de formato / ampersand - operador de endereco
    scanf("%d", &inteiro1);                   /* le um inteiro */
    printf("Entre com o segundo inteiro\n");  /* prompt */
    scanf("%d", &inteiro2);                   /* le um inteiro */

    soma = inteiro1 + inteiro2;               /* atribui soma */
    printf("A soma e %d\n", soma);            /* imprime soma */

    return 0;                                 /* indica que o programa foi bem-sucedido */
}
