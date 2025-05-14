#include <stdio.h>
 
int main() {
 
    int r;
    double pi = 3.14159, v;
    scanf("%d %lf %lf", &r, &pi, &v);
    v = 4.0/3 * pi * r * r * r;
    printf("VOLUME = %.3lf\n", v);

    return 0;
}
