#include <stdio.h>
#include <stdlib.h>
void getMatrix(int matrix[MAX][MAX], int r, int c) {
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
}

void displayMatrix(int matrix[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

void addMatrices() {
    int r, c, a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Matrix A:\n"); getMatrix(a, r, c);
    printf("Matrix B:\n"); getMatrix(b, r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Resultant Matrix:\n");
    displayMatrix(sum, r, c);
}

void findSaddlePoint() {
    int r, c, matrix[MAX][MAX];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    getMatrix(matrix, r, c);

    for (int i = 0; i < r; i++) {
        int min_row = matrix[i][0], col_ind = 0;
        for (int j = 1; j < c; j++) {
            if (min_row > matrix[i][j]) {
                min_row = matrix[i][j];
                col_ind = j;
            }
        }
        int k;
        for (k = 0; k < r; k++)
            if (min_row < matrix[k][col_ind]) break;
        
        if (k == r) {
            printf("Saddle Point found: %d at (%d, %d)\n", min_row, i, col_ind);
            return;
        }
    }
    printf("No Saddle Point found.\n");
}

void generateMagicSquare() {
    int n;
    printf("Enter odd order for Magic Square: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return;
    }
    int magic[MAX][MAX] = {0};
    int i = n / 2, j = n - 1;
    for (int num = 1; num <= n * n; ) {
        if (i == -1 && j == n) { j = n - 2; i = 0; }
        else {
            if (j == n) j = 0;
            if (i < 0) i = n - 1;
        }
        if (magic[i][j]) { j -= 2; i++; continue; }
        else magic[i][j] = num++;
        j++; i--;
    }
    displayMatrix(magic, n, n);
}

void inverse2x2() {
    float a[2][2], det;
    printf("Enter elements of 2x2 matrix:\n");
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++) scanf("%f", &a[i][j]);

    det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    if (det == 0) printf("Inverse not possible (Determinant = 0).\n");
    else {
        printf("Inverse Matrix:\n");
        printf("%.2f\t%.2f\n", a[1][1]/det, -a[0][1]/det);
        printf("%.2f\t%.2f\n", -a[1][0]/det, a[0][0]/det);
    }
}

int main() {
    int choice;
    while(1) {
        printf("\n--- Matrix Operations ---\n1. Addition\n2. Saddle Point\n3. Magic Square\n4. Inverse (2x2)\n5. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addMatrices(); break;
            case 2: findSaddlePoint(); break;
            case 3: generateMagicSquare(); break;
            case 4: inverse2x2(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
