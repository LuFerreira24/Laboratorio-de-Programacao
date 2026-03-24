#include <stdio.h>

int main() {
    int i, num, senha;

    for (i = 1; 1 <= 3; i++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == 2323) {
            printf("Acesso permitido!\n");
            break;
        } else {
            printf("Senha incorreta! Tente novamente.\n");

            if (i == 3) {
                printf("Acesso bloqueado! Voce excedeu o numero de tentativas.\n");
                break;
            }
        }


    }    return 0;
}
