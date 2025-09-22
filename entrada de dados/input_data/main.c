#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;

    printf("Digite um valor de entrada:\n");
    scanf("%d", &input); // type int

    input++;

    printf("Valor: %d\n", input); // displaying result in memory
    printf("Endereco memoria: %p\n", &input); // displaying address in memory

    //input += input;
    //printf("%d", input);
    //printf("%p", &input);

    return 0;
}
