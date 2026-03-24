#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
    int vetor[5];
    float m;

    for (i=0; i<5; i++){

        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);

        m += vetor[i];
    }
    printf("A media dos numeros do vetor e: %.2f\n", m/5);

    return 0;
}