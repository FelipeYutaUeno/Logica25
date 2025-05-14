#include <stdio.h>
 
int main() {
    
    int n, h;
    float v, s;
    scanf("%d %d %f %f", &n, &h, &v, &s);
    s = h * v;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", s);
    
    return 0;
}
