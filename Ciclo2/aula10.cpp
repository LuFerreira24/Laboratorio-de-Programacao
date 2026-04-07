#include <stdio.h>

int main() {
    int m[2][2];
    int i, j;

    printf("Digite os valores da matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", *(*(m + i) + j));
        }
        printf("\n");
    }

    return 0;
}