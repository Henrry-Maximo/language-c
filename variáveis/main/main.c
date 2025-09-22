#include <stdio.h>
#include <stdlib.h>

int main()
{
    // type | name | value
    int firstVariable = 15;
    int secondVariable = 4;
    int result;

    result = firstVariable + secondVariable + 1;
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
    printf("%d", result);

    return 0;
}
