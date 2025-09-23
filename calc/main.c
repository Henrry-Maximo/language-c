#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1;
    float v2;
    char op;
    float result;

    printf("Entre com o primeiro valor:");
    scanf("%f", &v1);

    // Problem Buffer

    // Buffer => The communication with keyboard is slow, then
    // OS accumalate the characters typed in a Buffer Temp of Memory RAM.
    // Functions (methods) do the reading how `scanf` and `getchar`, is very fast.
    // Buffer allow that you typed a value integer all at once (example: 123 456\n)

    printf("Entre com a operacao desejada:");
    scanf(" %c", &op);

    printf("Entre com o segundo valor:");
    scanf("%f", &v2);

    if (op == '+') {
        result = v1 + v2;
    }
    else if (op == '-') {
        result = v1 - v2;
    }
    else if (op == '*') {
        result = v1 * v2;
    }
    else if (op == '/') {
        result = v1 / v2;
    }
    else {
        printf("Operacao invalida");
        return 1; // program is not execution correctly
    }

    //printf("%f %c %f \n", v1, op, v2);
    printf("Resultado: %2.f", result);
    //printf("%.2f", v1);
    // + - * /
    return 0;
}
