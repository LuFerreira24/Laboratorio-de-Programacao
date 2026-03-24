#include <stdio.h>

int main() {
    int matriz[2][2];
    int i, j;
    int soma = 0;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}
