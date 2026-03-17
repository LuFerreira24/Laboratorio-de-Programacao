#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
printf("\n");

    media = (nota1 + nota2)/2;
    printf("A media do aluno e: %.2f\n", media);

    if(media >= 7){
        printf("O aluno foi aprovado!\n");
    } else if(media >= 4) {
        printf("O aluno esta de recuperacao!\n");
    } else {
        printf("O aluno foi reprovado!\n");
    }

    return 0;
}
