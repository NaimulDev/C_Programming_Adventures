#include <stdio.h>
#include <string.h>

int main() {
    char secret[] = "CProgramming";
    char guess[20];
    int attempts = 3;
    
    while(attempts > 0) {
        printf("Decrypt the secret (%d attempts left): ", attempts);
        scanf("%19s", guess);
        
        if(strcmp(secret, guess) == 0) {
            printf("Access granted! 🎉\n");
            return 0;
        }
        else {
            printf("Invalid code! ❌\n");
            attempts--;
        }
    }
    printf("System locked! 🔒\n");
    return 0;
}