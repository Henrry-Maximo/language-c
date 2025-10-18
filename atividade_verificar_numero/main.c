#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2;

    printf("Digite dois valores: ");
    scanf("%d %d", &v1, &v2);

    if (v1 > v2) {
        printf("O numero %d eh maior que %d.", v1, v2);
    } else if (v2 > v1) {
        printf("O numero %d eh maior que %d.", v2, v1);
    } else {
        printf("Os valores sao iguais");
    }

    return 0;
}
