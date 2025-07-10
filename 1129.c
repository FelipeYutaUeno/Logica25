#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < n; i++) {
            int a, b, c, d, e;
            int cont = 0;
            char alt = '*';

            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            if (a <= 127) {
                cont++;
                alt = 'A';
            }
            if (b <= 127) {
                cont++;
                alt = 'B';
            }
            if (c <= 127) {
                cont++;
                alt = 'C';
            }
            if (d <= 127) {
                cont++;
                alt = 'D';
            }
            if (e <= 127) {
                cont++;
                alt = 'E';
            }

            if (cont == 1) {
                printf("%c\n", alt);
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}
