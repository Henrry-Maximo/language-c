#include <stdio.h>
#include <stdlib.h>

void addOne(int* valor) {
    (*valor)++;
    //valor = valor + 1;
    //valor += 1;

    v[10][10];

    for (int i = 0; i < v[10][10]; i++) {
        for ()
    }

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
