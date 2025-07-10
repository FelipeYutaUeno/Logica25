#include <stdio.h>

int main() {
    int val;
    int maior = 0;
    int pos = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &val);
        if (val > maior) {
            maior = val;
            pos = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}
