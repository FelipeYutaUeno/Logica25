#include <stdio.h>

int tam_str(char *s) {
    int c = 0;
    while (s[c] != '\0') {
        c++;
    }
    return c;
}

int main() {
    int casos;
    scanf("%d", &casos);
    getchar();

    while (casos--) {
        char texto[1001];
        fgets(texto, sizeof(texto), stdin);

        int n = tam_str(texto);
        if (n > 0 && texto[n-1] == '\n') {
            texto[n-1] = '\0';
            n--;
        }

        for (int i = 0; i < n; i++) {
            if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')) {
                texto[i] += 3;
            }
        }

        for (int i = 0; i < n / 2; i++) {
            char temp = texto[i];
            texto[i] = texto[n - 1 - i];
            texto[n - 1 - i] = temp;
        }

        for (int i = n / 2; i < n; i++) {
            texto[i] -= 1;
        }

        printf("%s\n", texto);
    }

    return 0;
}
