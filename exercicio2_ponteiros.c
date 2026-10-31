#include <stdio.h>

void dobra(int *v, int n){
    int i;
    for (i = 0; i < n; i++) {
        v[i] *= 2;
    }
}

int main(void){
    int v[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Antes: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    dobra(v, 5);

    printf("Depois: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
