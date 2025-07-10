#include <stdio.h>

int main() {
    int b, n;

    while (scanf("%d %d", &b, &n) && (b != 0 || n != 0)) {
        long long bancos[b + 1];

        for (int i = 1; i <= b; i++) {
            scanf("%lld", &bancos[i]);
        }

        for (int i = 0; i < n; i++) {
            int d, c, v;
            scanf("%d %d %d", &d, &c, &v);
            bancos[d] -= v;
            bancos[c] += v;
        }

        int possivel = 1;
        for (int i = 1; i <= b; i++) {
            if (bancos[i] < 0) {
                possivel = 0;
                break;
            }
        }

        if (possivel) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
