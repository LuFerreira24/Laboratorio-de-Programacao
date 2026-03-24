#include <stdio.h>

int main() {
    int vetor[5];
    int i;
    int maior;
    float soma = 0, media;

    for(i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(i = 0; i < 5; i++) {
        soma += vetor[i];

        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    media = soma / 5;

    printf("\nValores digitados:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nMaior valor: %d", maior);
    printf("\nMedia: %.2f\n", media);

    return 0;
}