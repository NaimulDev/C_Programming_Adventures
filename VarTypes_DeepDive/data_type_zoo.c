#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer types demonstration
    unsigned short rocket_count = 65535;
    signed int temperature = -40;
    long universe_age = 13800000000L;  // Approximately 13.8 billion years
    
    printf("📡 Space Station Inventory 📡\n");
    printf("Max rockets supported: %hu\n", rocket_count);
    printf("Martian temperature: %d°C\n", temperature);
    printf("Universe age: %ld years\n\n", universe_age);

    // Floating-point precision
    float pi = 3.14159265358979323846F;
    double exact_pi = 3.14159265358979323846;
    
    printf("π Approximations:\n");
    printf("Float (32-bit): %.15f\n", pi);
    printf("Double (64-bit): %.15f\n\n", exact_pi);

    // Type limits
    printf("Data Type Ranges:\n");
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("FLT_MAX: %e\n", FLT_MAX);
    
    return 0;
}