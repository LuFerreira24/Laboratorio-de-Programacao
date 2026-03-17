#include <stdio.h>

int main() {
    int i, soma, num;

for (i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);
        
        if (num > 0) {
        soma += num;
        }
}
printf("A soma dos numeros e: %d\n", soma);
    return 0;
}