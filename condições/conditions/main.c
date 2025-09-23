#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Entre com um valor:\n");
    scanf("%d", &valor);
    printf("Valor inserido: %d", valor);

    if (valor > 10) {
        printf("O valor e maior que 10\n");
    }

    return 0;
}
