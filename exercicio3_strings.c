#include <stdio.h>

int main(void){
    char s[50];
    int len = 0;
    int i;

    printf("Palavra: ");
    if (scanf("%49s", s) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (s[len] != '\0') {
        len++;
    }

    printf("Invertida: ");
    for (i = len - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    printf("\n");

    return 0;
}
