#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    char nome[55];
} s_pessoa;

int main()
{
    s_pessoa p;

    //p.idade = 20;
    //strcpy(p.nome, "Erik");

    // w = escrever
    // r = ler
    // a = adicionar
    FILE* fp = fopen("data.bin", "ab+"); // adicionar ou ler um arquivo binário
    //fwrite(&p, sizeof(s_pessoa), 1, fp);

    // ler o arquivo
    fread(&p, sizeof(s_pessoa), 1, fp);

    printf("%d %s", p.idade, p.nome);

    fclose(fp);

    return 0;
}
