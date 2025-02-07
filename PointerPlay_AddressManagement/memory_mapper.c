#include <stdio.h>

int main() {
    // Pointer array manipulation
    int cosmic_numbers[] = {10, 20, 30, 40, 50};
    int *ptr = cosmic_numbers;
    
    printf("🌌 Cosmic Number Navigation 🌠\n");
    printf("Base address: %p\n", (void*)ptr);
    
    // Pointer arithmetic demonstration
    printf("\nArray elements using pointers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d (Address: %p)\n", 
              i, *(ptr + i), (void*)(ptr + i));
    }
    
    // Pointer type differences
    char *char_ptr = (char*)ptr;
    printf("\nSame address different interpretation:\n");
    printf("int pointer: %p → %d\n", (void*)ptr, *ptr);
    printf("char pointer: %p → %d\n", (void*)char_ptr, *char_ptr);
    
    return 0;
}