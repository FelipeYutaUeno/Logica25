#include <stdio.h>

int main() {
    int n_casos;
    scanf("%d", &n_casos);
    getchar();

    while (n_casos--) {
        int contadores[26] = {0};
        char linha[1001];

        fgets(linha, sizeof(linha), stdin);

        int i = 0;
        while (linha[i] != '\0') {
            char c = linha[i];
            if (c >= 'a' && c <= 'z') {
                contadores[c - 'a']++;
            } else if (c >= 'A' && c <= 'Z') {
                contadores[c - 'A']++;
            }
            i++;
        }

        int max_cont = 0;
        for (int j = 0; j < 26; j++) {
            if (contadores[j] > max_cont) {
                max_cont = contadores[j];
            }
        }

        for (int j = 0; j < 26; j++) {
            if (contadores[j] == max_cont) {
                printf("%c", 'a' + j);
            }
        }
        printf("\n");
    }

    return 0;
}
