#include <stdio.h>
 
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    d = (a * b - c * d);
    printf("DIFERENCA = %d\n", d);
 
    return 0;
}
