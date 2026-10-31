#include <stdio.h>

int main(void){
    int v[10];
    int i;

    for (i = 0; i < 10; i++) {
        v[i] = i;
    }

    v[10] = 999;

    printf("v[0] = %d\n", v[0]);
    return 0;
}
