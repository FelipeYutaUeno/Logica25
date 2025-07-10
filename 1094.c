#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total_cobaias = 0;
    int total_coelhos = 0;
    int total_ratos = 0;
    int total_sapos = 0;

    for (int i = 0; i < n; i++) {
        int quant;
        char tipo;
        scanf("%d %c", &quant, &tipo);
        
        total_cobaias += quant;

        if (tipo == 'C') {
            total_coelhos += quant;
        } else if (tipo == 'R') {
            total_ratos += quant;
        } else if (tipo == 'S') {
            total_sapos += quant;
        }
    }

    printf("Total: %d cobaias\n", total_cobaias);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos: %d\n", total_sapos);
    printf("Percentual de coelhos: %.2f %%\n", (float)total_coelhos / total_cobaias * 100.0);
    printf("Percentual de ratos: %.2f %%\n", (float)total_ratos / total_cobaias * 100.0);
    printf("Percentual de sapos: %.2f %%\n", (float)total_sapos / total_cobaias * 100.0);

    return 0;
}
