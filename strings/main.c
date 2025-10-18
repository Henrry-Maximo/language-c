#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10] = "Ola";
    /*
    str[0] = 'O';
    str[1] = 'l';
    str[2] = 'a';
    str[3] = '\0';
    */

    // "\0" eh usado identificar o final da string (único byte)

    // printf("%s", str);

    printf("Entre com seu nome: ");
    scanf(" %s", str);

    printf("O seu nome eh: %s", str);

    return 0;
}
