#include <stdio.h>

int main () {
    int n, i, auxiliar = 0;
    scanf("%d", &n);

    for (i=1; i*(i+1)*(i+2) <= n; i++) {
        if (i*(i+1)*(i+2) == n) {
            auxiliar = 1;
        }
    }
    if (auxiliar) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}