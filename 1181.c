#include <stdio.h>

int main() {
    int L;
    char T;
    double matriz[12][12];

    scanf("%d", &L);
    scanf(" %c", &T);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    double soma = 0.0;
    for (int j = 0; j < 12; j++) {
        soma += matriz[L][j];
    }

    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12);
    }

    return 0;
}
