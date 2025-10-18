#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fp;

    // w = write
    // r = read
    // a = append
    // w+ = escrita mais leitura

    char strPalavra[55] = "testando string";
    int valor;
    float fvalor;

    // um vetor é sempre um ponteiro
    char msg[80];

    fp = fopen("novo.txt", "r");
    //fp = fopen("primeiro.txt", "a+");
    //fprintf(fp, "ola, tudo bem?\ncomigo tudo!");
    //fprintf(fp, "\nsegunda execucao");
    //fprintf(fp, "%s", strPalavra);
    //fprintf(fp, "%d %f", valor, fvalor);

    fscanf(fp, "%[^\n]s", msg);
    //fscanf(fp, "%d %f", &valor, &fvalor);

    fclose(fp); // ponteiro destruído assim como referência

    //printf("Os valores sao: %d %f", valor, fvalor);
    printf("Valor do arquivo novo.txt: %s", msg);

    return 0;
}
