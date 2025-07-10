#include <stdio.h>

int chamadas;
int fib(int n) {
    chamadas++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int T, X;
    scanf("%d", &T);
    
    while(T--) {
        chamadas = 0;
        scanf("%d", &X);
        int resultado = fib(X);
        printf("fib(%d) = %d calls = %d\n", X, chamadas-1, resultado);
    }
    
    return 0;
    
}
