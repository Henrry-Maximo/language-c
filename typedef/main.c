#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// é um bloco reservado na memória com propriedades específicas
typedef struct pessoa {
    int idade;
    char nome[51];
} s_pessoa;

typedef int INTEIRO; // apelido para tipo inteiro

int main()
{
    s_pessoa p1;
    s_pessoa p2;

    //INTEIRO i = 10;
    //printf("%d", i);

    p1.idade = 18;
    // p1.nome = "Alexandre"; // strings não podem ser alteradas após criação
    strcpy(p1.nome, "Alexandre");

    p2.idade = 22;
    strcpy(p2.nome, "Erik");

    printf("Nome: %s | Idade: %d\n", p1.nome, p1.idade);
    printf("Nome: %s | Idade: %d\n", p2.nome, p2.idade);

    printf("\n-------------------\n");

    s_pessoa p[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome e a idade da pessoa: ");
        scanf("%s %d", &p[i].nome, &p[i].idade);
    }

    s_pessoa paux = p[0];

    for(i = 0; i < 5; i++) {
        if (paux.idade < p[i].idade) {
            paux = p[i];
        }
    }

    printf("A pessoa mais velha e: %s com % d anos\n", paux.nome, paux.idade);

    return 0;
}
