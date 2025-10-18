#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 3;
    int v[tam];
    int i;
    // int v[3];

    for(i = 0; i < tam; i++) {
        printf("Encotre com o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    };

    /*
    v[0] = 5;
    v[1] = 7;
    v[2] = 1;
    v[9] = 3; // última posição
    */

    printf("%d %d %d", v[0], v[1], v[2]);

    return 0;
}
