#include <stdio.h>

int main() {
    // Pyramid pattern generator
    int levels = 5;
    
    for(int i=1; i<=levels; i++) {
        for(int j=1; j<=levels-i; j++) printf(" ");
        for(int k=1; k<=2*i-1; k++) printf("★");
        printf("\n");
    }
    
    // While loop countdown
    int count = 3;
    while(count > 0) {
        printf("\nT-minus %d...", count);
        count--;
    }
    printf("\nLiftoff! 🚀\n");
    return 0;
}