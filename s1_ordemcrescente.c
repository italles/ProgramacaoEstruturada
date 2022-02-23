#include <stdio.h>

int main () {
    int N, numero[N];
    scanf("%d", &N);
    int i;
    
    for (i=0; i <=N; i++) {
        scanf("%d", &numero[i]);
    }
    for (i=0; i <=N; i++) {
        if (numero[i-1]<numero[i]) {
            printf("SIM\n");
        } else {
            printf("NÃO\n");
        }
    }
}