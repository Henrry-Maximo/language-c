#include <stdio.h>
#include <stdlib.h>

void addOne(int* valor) {
    (*valor)++;
    //valor = valor + 1;
    //valor += 1;

    printf("Valor dentro da funcao addOne: %d\n", *valor);
}

int main()
{
    int valor = 5;
    //int* pvalor = &valor;

    addOne(&valor);
    printf("Valor na funcao main: %d\n", valor);
    return 0;
}
