#include <stdio.h>

int main () {
    int a, b, n_primo = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i<=b; i++){
        n_primo=0;

        for (int x = 1; x <=i; x++) {
            if(i % x == 0){
                n_primo++;
            }
        }
        if (n_primo==2) {
            printf("%d ", i);
        }
    }

    return 0;
}