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

/*
Types of variables

%d ou %i => int: trabalha dentro um limite com valores negativos e positivos (limite de 4 bytes)
%U => unsigned int: elimina os valores negativos, aumentando os valores positivos
%o => unsigned em octal
%x => unsigned int em hexadecimal
%X => unsigned int em hexadecimal (em maiusculo)
%f => Float, em minusculo: tipos para valores decimais
%F => Float, em maiusculo
%e => Notação cientifica minuscula
%E => Notação cientifica maiuscula
%a => Float em hexadecimal, com letras minusculas
%A => Float em hexadecimal, com letras maiusculas
%c => Character
%s => String de characteres
%p => Ponteiro

*/
