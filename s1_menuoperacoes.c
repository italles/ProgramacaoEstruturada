#include <stdio.h>

int main () {
    int a, b, c, op, operacao;

    do {
        scanf("%d", &operacao);
        
        if (operacao == 1) {
            scanf("%d %d", &a, &b);
            op = a+b;
            printf("%d\n", op);
        }

        if (operacao == 2) {
            scanf("%d %d %d", &a, &b, &c);
            printf("%d\n", (a+b+c));
        }

        if (operacao == 3) {
            scanf("%d %d", &a, &b);
            printf("%d\n", (a*b));
        }
    } while (operacao > 0);

    return 0;
}