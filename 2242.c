#include <stdio.h>

int vogal(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + ('a' - 'A');
    }
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int tamanho(char *s) {
    int comp = 0;
    while (s[comp] != '\0') {
        comp++;
    }
    return comp;
}

int main() {
    char risada[51];
    char vogs[51];
    int cont = 0;

    scanf("%s", risada);

    for (int i = 0; risada[i] != '\0'; i++) {
        if (vogal(risada[i])) {
            vogs[cont++] = risada[i];
        }
    }
    vogs[cont] = '\0';

    int engra = 1;
    int tamVogs = tamanho(vogs);

    for (int i = 0; i < tamVogs / 2; i++) {
        if (vogs[i] != vogs[tamVogs - 1 - i]) {
            engra = 0;
            break;
        }
    }

    if (engra) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
