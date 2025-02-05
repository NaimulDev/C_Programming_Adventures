#include <stdio.h>

int main() {
    char planet[20];
    int moons;
    float gravity;
    
    printf("Enter planet name: ");
    scanf("%19s", planet);
    printf("Number of moons: ");
    scanf("%d", &moons);
    printf("Surface gravity (m/s²): ");
    scanf("%f", &gravity);
    
    printf("\n🌌 Planetary Profile 🌌\n");
    printf("Name: %s\nMoons: %d\nGravity: %.2f\n", planet, moons, gravity);
    return 0;
}