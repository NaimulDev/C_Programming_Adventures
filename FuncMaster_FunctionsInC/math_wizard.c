#include <stdio.h>

// Function prototypes
int factorial(int n);
double power(double base, int exponent);
void print_binary(unsigned int num);

int main() {
    // Mathematical functions demo
    printf("🧙♂️ Math Wizard's Toolkit 🧙♀️\n");
    printf("5! = %d\n", factorial(5));
    printf("2^8 = %.0f\n", power(2, 8));
    
    // Binary conversion demonstration
    printf("\n42 in binary: ");
    print_binary(42);
    printf("\n");
    
    return 0;
}

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n-1);
}

double power(double base, int exponent) {
    double result = 1.0;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

void print_binary(unsigned int num) {
    if(num > 1) print_binary(num >> 1);
    printf("%d", num & 1);
}