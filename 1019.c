#include <stdio.h>
 
int main() {
 
    int h, m, s, N;
    scanf("%d", &N);
    h = N / 3600;
    N %= 3600;
    m = N / 60;
    N %= 60;
    s = N;
    printf("%d:%d:%d\n", h, m, s);
 
    return 0;
}
