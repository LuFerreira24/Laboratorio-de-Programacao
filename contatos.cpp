#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[100];
    char telefone[20];
    char email[100];
} Contato;

void cadastrarContato(Contato contatos[], int *total) {
    if (*total >= MAX) {
        printf("Agenda cheia!\n");
        return;
    }

    printf("Nome: ");
    scanf(" %[^\n]", contatos[*total].nome);

    printf("Telefone: ");
    scanf("%s", contatos[*total].telefone);

    printf("Email: ");
    scanf("%s", contatos[*total].email);

    (*total)++;

    printf("Contato cadastrado com sucesso!\n");
}

void listarContatos(Contato contatos[], int total) {
    if (total == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("\nContato %d\n", i);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n", contatos[i].email);
    }
}

void buscarContato(Contato contatos[], int total) {
    char nome[100];

    printf("Digite o nome do contato: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < total; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n", contatos[i].email);
            return;
        }
    }

    printf("Contato nao encontrado.\n");
}

void editarContato(Contato contatos[], int total) {
    int indice;

    printf("Digite o indice do contato: ");
    scanf("%d", &indice);

    if (indice < 0 || indice >= total) {
        printf("Indice invalido.\n");
        return;
    }

    getchar();

   printf("Novo nome: "); 
   scanf(" %[^\n]", contatos[indice].nome);

    printf("Novo telefone: ");
    scanf("%s", contatos[indice].telefone);

    printf("Novo email: ");
    scanf("%s", contatos[indice].email);

    printf("Contato atualizado com sucesso!\n");
}

void removerContato(Contato contatos[], int *total) {
    int indice;

    printf("Digite o indice do contato: ");
    scanf("%d", &indice);

    if (indice < 0 || indice >= *total) {
        printf("Indice invalido.\n");
        return;
    }

    for (int i = indice; i < *total - 1; i++) {
        contatos[i] = contatos[i + 1];
    }

    (*total)--;

    printf("Contato removido com sucesso!\n");
}

int contarNomesGrandes(Contato contatos[], int n) {
    if (n == 0) {
        return 0;
    }

    if (strlen(contatos[n - 1].nome) > 5) {
        return 1 + contarNomesGrandes(contatos, n - 1);
    } else {
        return contarNomesGrandes(contatos, n - 1);
    }
}

int main() {
    Contato contatos[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar contato\n");
        printf("2 - Listar contatos\n");
        printf("3 - Buscar por nome\n");
        printf("4 - Editar contato\n");
        printf("5 - Excluir contato\n");
        printf("6 - Estatisticas (recursivo)\n");
        printf("7 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarContato(contatos, &total);
                break;

            case 2:
                listarContatos(contatos, total);
                break;

            case 3:
                buscarContato(contatos, total);
                break;

            case 4:
                editarContato(contatos, total);
                break;

            case 5:
                removerContato(contatos, &total);
                break;

            case 6: {
                int resultado = contarNomesGrandes(contatos, total);
                printf("Contatos com nome maior que 5 letras: %d\n", resultado);
                break;
            }

            case 7:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 7);

    return 0;
}