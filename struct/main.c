#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// é um bloco reservado na memória com propriedades específicas
struct pessoa {
    int idade;
    char nome[51];
};

int main()
{
    struct pessoa p1;
    struct pessoa p2;

    p1.idade = 18;
    // p1.nome = "Alexandre"; // strings não podem ser alteradas após criação
    strcpy(p1.nome, "Alexandre");

    p2.idade = 22;
    strcpy(p2.nome, "Erik");

    printf("Nome: %s | Idade: %d\n", p1.nome, p1.idade);
    printf("Nome: %s | Idade: %d\n", p2.nome, p2.idade);

    return 0;
}
