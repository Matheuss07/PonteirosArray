#include <stdio.h>
#include <stdint.h>

int main(void){
    int v[4];
    double d[4];
    int i;

    for (i = 0; i < 4; i++) {
        v[i] = i + 1;
        d[i] = (i + 1) * 1.5;
    }

    printf("sizeof(int)    = %zu bytes\n", sizeof(int));
    printf("sizeof(double) = %zu bytes\n\n", sizeof(double));

    printf("Vetor int:\n");
    printf("  base = %p\n", (void *)v);
    for (i = 0; i < 4; i++) {
        uintptr_t esperado = (uintptr_t)(void *)v + (size_t)i * sizeof(int);
        ptrdiff_t diff = 0;
        if (i > 0) {
            diff = (char *)&v[i] - (char *)&v[i - 1];
        }
        printf("  v[%d]: endereco=%p  base+i*sizeof(int)=%p  diff_bytes=%td\n",
               i, (void *)&v[i], (void *)esperado, diff);
    }

    printf("\nVetor double:\n");
    printf("  base = %p\n", (void *)d);
    for (i = 0; i < 4; i++) {
        uintptr_t esperado = (uintptr_t)(void *)d + (size_t)i * sizeof(double);
        ptrdiff_t diff = 0;
        if (i > 0) {
            diff = (char *)&d[i] - (char *)&d[i - 1];
        }
        printf("  d[%d]: endereco=%p  base+i*sizeof(double)=%p  diff_bytes=%td\n",
               i, (void *)&d[i], (void *)esperado, diff);
    }

    return 0;
}
