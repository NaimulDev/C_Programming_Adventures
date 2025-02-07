#include <stdio.h>

void cosmic_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Values swapped! 🌌\n");
}

int main() {
    int x = 42, y = 99;
    printf("Before swap: x=%d, y=%d\n", x, y);
    cosmic_swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);
    return 0;
}