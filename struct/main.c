#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// � um bloco reservado na mem�ria com propriedades espec�ficas
struct pessoa {
    int idade;
    char nome[51];
};

int main()
{
    struct pessoa p1;
    struct pessoa p2;

    p1.idade = 18;
    // p1.nome = "Alexandre"; // strings n�o podem ser alteradas ap�s cria��o
    strcpy(p1.nome, "Alexandre");

    p2.idade = 22;
    strcpy(p2.nome, "Erik");

    printf("Nome: %s | Idade: %d\n", p1.nome, p1.idade);
    printf("Nome: %s | Idade: %d\n", p2.nome, p2.idade);

    return 0;
}
