#include <stdio.h>
#include <stdlib.h>

// Sequencia de fibonacci:
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...

void fibonacci(int qtd) {
    int atual = 1;
    int anterior = 0;
    int novoNumero;
    int i;

    qtd--;
    // o 1 deve sempre aparecer, não faz parte da lógica
    printf("1 ");
    for(i = 0; i < qtd; i++) {
        novoNumero = atual + anterior;
        printf("%d ", novoNumero);
        anterior = atual;
        atual = novoNumero;
    }
}

int main()
{
    printf("Executando funcao de fibonacci\n");
    fibonacci(50);
    return 0;
}
