#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    while (n--) {
        char mina[1001];
        fgets(mina, sizeof(mina), stdin);

        int i = 0;
        int abertos = 0;
        int diamantes = 0;

        while (mina[i] != '\0') {
            if (mina[i] == '<') {
                abertos++;
            } else if (mina[i] == '>') {
                if (abertos > 0) {
                    diamantes++;
                    abertos--;
                }
            }
            i++;
        }
        printf("%d\n", diamantes);
    }

    return 0;
}
