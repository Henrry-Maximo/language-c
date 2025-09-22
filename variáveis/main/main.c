#include <stdio.h>
#include <stdlib.h>

int main()
{
    // type | name | value
    int firstVariable = 15;
    int secondVariable = 4;
    int result;

    result = firstVariable + secondVariable + 1;

    printf("Primeira variável: %d\n", firstVariable);
    printf("Segunda variável: %d\n", secondVariable);

    printf("Resultado: %d\n", result);
    printf("Primeira: %d, Segunda %d, Resultado %d\n", firstVariable, secondVariable, result);

    //firstVariable = firstVariable + secondVariable;
    //firstVariable += secondVariable;
    //firstVariable -= secondVariable;

    //firstVariable = 7; // overwrite the value of variable

    //firstVariable = firstVariable++;
    //firstVariable = firstVariable--;

    //firstVariable = firstVariable + 1;
    //firstVariable = firstVariable - 1;
    //firstVariable = firstVariable * 1;
    //firstVariable = firstVariable / 1;

    //printf("%d", firstVariable); // %d => mask for display values of integer
    //printf("%d", result);

    return 0;
}
