#include <stdio.h>

int main() {
    int option;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
        printf("Domingo\n");
        break;
        case 2:
        printf("Segunda-Feira\n");
        break;
        case 3:
        printf("Terca-Feira\n");
        break;
        case 4:
        printf("Quarta-Feira\n");
        break;
        case 5:
        printf("Quinta-Feira\n");
        break;
        case 6:
        printf("Sexta-Feira\n");
        break;
        case 7:
        printf("Sabado\n");
        break;
        default:
        printf("Numero invalido!\n");
        break;
    }
    return 0;
}