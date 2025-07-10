#include <stdio.h>

int main() {
    int C;
    char T;
    double matriz[12][12];

    scanf("%d", &C);
    scanf(" %c", &T);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    double soma = 0.0;
    for (int i = 0; i < 12; i++) {
        soma += matriz[i][C];
    }

    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}
