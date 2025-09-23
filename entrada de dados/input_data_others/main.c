#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer = 100;
    float decimal = 70.45; // 4 bytes (8 bytes)
    double valor = 70.45; // it's float but is optimize, double of capacity - 8 bytes (16 bytes)
    char caracter = 'b'; // display only a letter

    printf("Inteiro: %d\n", integer); // 100
    printf("Decimal: %f\n", decimal); // 70.449997
    printf("Decimal com duas casas: %.2f\n", decimal); // 70.45
    printf("Decimal com tres casas (maior precisao) %.3f\n", valor); // 70.450000
    printf("Somente uma letra: %c\n", caracter); // b

    return 0;
}

/*
Note: variables type float too have space limit
    - It presents problem in rounding
    - The size of variable ever dependencie OS
    - .x => limit number house
    - It's possible read wi
*/
