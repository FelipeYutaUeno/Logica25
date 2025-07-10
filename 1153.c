#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d", &N);
    int fatorial = 1;
    int i = N;
    while(i >= 1){
        fatorial *= i;
        i--;
    }
    printf("%d\n", fatorial);
 
    return 0;
}
