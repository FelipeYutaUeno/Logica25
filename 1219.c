#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double a, b, c;
    
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double p = (a + b + c) / 2.0;
        double at = sqrt(p * (p - a) * (p - b) * (p - c));
        
        double rc = (a * b * c) / (4 * at);
        double ac = PI * rc * rc;
        
        double ri = at / p;
        double ai = PI * ri * ri;
        
        double violetas = ac - at;
        double girassois = at - ai;
        double rosas = ai;
        
        printf("%.4lf %.4lf %.4lf\n", violetas, girassois, rosas);
    }
    
    return 0;
}
