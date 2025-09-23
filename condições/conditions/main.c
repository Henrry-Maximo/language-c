#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Entre com um valor:\n");
    scanf("%d", &valor);
    printf("Valor inserido: %d\n", valor);

    if (valor == 12) {
        printf("O valor e 12\n");
    } else {
        if (valor > 10) {
            printf("O valor e maior que 10\n");
        }
        else {
            printf("O valor e menor ou igual que 10\n");
        }
    };



    return 0;
}
