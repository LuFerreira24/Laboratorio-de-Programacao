#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 15;
    int *ponteiro1;

    ponteiro1 = &numero;

    printf("Valor de numero: %d\n", numero);
    printf("Endereco de numero: %p\n", &numero);
    printf("Valor apontado por ponteiro1: %d\n", *ponteiro1);
    printf("Endereco armazenado em ponteiro1: %p\n", ponteiro1);
    printf("\n");

    char letra = 'a';
    char *ponteiro2;
    ponteiro2 = &letra;

    printf("Valor de letra: %c\n", letra);
    printf("Endereco de letra: %p\n", &letra);
    printf("Valor apontado por ponteiro2: %c\n", *ponteiro2);
    printf("Endereco armazenado em ponteiro2: %p\n", ponteiro2);

    return 0;
}
