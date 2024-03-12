#include<stdio.h>
#include<stdlib.h>

void read_matrix(float a[100][100], int row, int col);
void display_matrix(float a[100][100], int row, int col);
void findMax(float a[100][100], int row, int col);

int main() {
    float a[100][100];
    int row, col, test;

    printf("Enter number of rows and columns: ");
    test = scanf("%d%d", &row, &col);

    if (test != 2) {
        printf("Enter valid data\n");
        exit(0);
    }

    if (row <= 0 || col <= 0) {
        printf("Order of matrix should be greater than Zero\n");
    } else if (row > 100 || col > 100) {
        printf("Order of matrix should be less than or equal to 100\n");
    } else {
        read_matrix(a, row, col);
        display_matrix(a, row, col);
        findMax(a, row, col);
    }

    return 0;
}

void read_matrix(float a[100][100], int row, int col) {
    int i, j, test;
    printf("Reading all matrix elements...\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            test = scanf("%f", &a[i][j]);
            if (test != 1) {
                printf("Enter valid data\n");
                exit(0);
            }
        }
    }
}

void display_matrix(float a[100][100], int row, int col) {
    int i, j;
    printf("Displaying all matrix elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%f\t", a[i][j]);
        }
        printf("\n");
    }
}

void findMax(float a[100][100], int row, int col) {
    int i, j;
    float max = a[0][0]; // Assuming 1st element is max
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    printf("Maximum element of matrix = %f\n", max);
}
