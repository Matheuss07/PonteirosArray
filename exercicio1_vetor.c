#include <stdio.h>

int main(void){
    int v[5];
    int maior;
    int soma = 0;
    int i;

    printf("Digite 5 inteiros: ");
    for (i = 0; i < 5; i++) {
        if (scanf("%d", &v[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    maior = v[0];
    for (i = 1; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
        soma += v[i];
    }
    soma += v[0];

    printf("\nMaior valor: %d\n", maior);
    printf("Media: %.2f\n", soma / 5.0);

    return 0;
}
