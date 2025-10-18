#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[3][3];

    v[0][0] = 5;
    v[0][1] = 2;
    v[0][2] = 1;

    v[1][0] = 10;
    v[1][1] = 3;
    v[1][2] = 4;

    v[2][0] = 6;
    v[2][1] = 7;
    v[2][2] = 9;

    int i;
    int j;

    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}
