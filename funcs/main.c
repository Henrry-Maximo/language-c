#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int retornaQuantidadeChar(char s[], char letra) {
    int i;
    int qtdS = strlen(s);
    int contador = 0;

    for (i = 0; i < qtdS; i++) {
        if (s[i] == letra) {
            contador++;
        }
    }
    return contador;
}

int somaInteiros(int v1, int v2) {
    int resultado;
    // v1 += 1;
    resultado = v1 + v2;
    return resultado;
}

// tipo de retorno
/*
void exibir() {
    printf("Ola sou a funcao exibir\n");
}
*/

int main()
{
    //int resultado;
    //resultado = somaInteiros(10,  2);
    // printf("%d", somaInteiros(10,  2));

    // exibir();

    /*
    int a = 5;
    int b = 3;
    int c = somaInteiros(a, b);
    int d = somaInteiros(c, a);
    printf("%d %d %d %d", a, b, c, d);
    */

    printf("%d", retornaQuantidadeChar("Ola tudo bem com voce?", 'e'));

    return 0;
}
