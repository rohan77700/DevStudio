// Divide and Conquer Approach

#include <stdio.h>

// Exponent Divide and Conquer
double EXPONENT_DC(double x, int n) {
    if(n == 0) {
        return 1;
    } else {
        double m = EXPONENT_DC(x, n/2);
        if(n%2 == 0) {
            return m*n;
        } else {
            return m*n*x;
        }
    }
}

int main() {
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = EXPONENT_DC(x, n);
    printf("Result: %.2f\n", result);
    
    return 0;
}