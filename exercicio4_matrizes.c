#include <stdio.h>

int main(void){
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    int soma;

    for (i = 0; i < 3; i++) {
        soma = 0;
        for (j = 0; j < 3; j++) {
            soma += m[i][j];
        }
        printf("Linha %d: %d\n", i, soma);
    }

    return 0;
}
