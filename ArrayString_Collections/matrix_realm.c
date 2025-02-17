#include <stdio.h>

#define ROWS 3
#define COLS 3

void print_matrix(int mat[][COLS], int rows, int cols);

int main() {
    // Matrix initialization
    int matrix_a[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int matrix_b[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    // Matrix addition
    int result[ROWS][COLS];
    printf("🔢 Matrix Operations Realm 🔢\n");
    
    printf("\nMatrix A:\n");
    print_matrix(matrix_a, ROWS, COLS);
    
    printf("\nMatrix B:\n");
    print_matrix(matrix_b, ROWS, COLS);
    
    // Perform matrix addition
    printf("\nA + B =\n");
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            result[i][j] = matrix_a[i][j] + matrix_b[i][j];
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void print_matrix(int mat[][COLS], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
}