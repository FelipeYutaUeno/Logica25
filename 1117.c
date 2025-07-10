#include <stdio.h>

int main() {
    double nota;
    int cont = 0;
    double soma = 0.0;

    while (cont < 2) {
        scanf("%lf", &nota);
        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            cont++;
        } else {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", soma / 2.0);

    return 0;
}
