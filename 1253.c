#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    while (n--) {
        char s[51];
        int desl;

        fgets(s, sizeof(s), stdin);

        int i = 0;
        while (s[i] != '\0' && s[i] != '\n') {
            i++;
        }
        s[i] = '\0';

        scanf("%d", &desl);
        getchar();

        i = 0;
        while (s[i] != '\0') {
            char c = s[i];
            c = c - desl;
            if (c < 'A') {
                c = c + 26;
            }
            s[i] = c;
            i++;
        }
        printf("%s\n", s);
    }

    return 0;
}
