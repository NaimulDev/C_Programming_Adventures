#include <stdio.h>

int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

void towerOfHanoi(int n, char from, char to, char aux) {
    if(n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    towerOfHanoi(n-1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    towerOfHanoi(n-1, aux, to, from);
}

int main() {
    printf("Fibonacci(7): %d\n", fibonacci(7));
    printf("\nTower of Hanoi Solution:\n");
    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}