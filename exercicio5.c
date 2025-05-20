#include <stdio.h>

int main() {
    int senha;
    int cargo;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 1234) {
        printf("Acesso permitido!\n");

        printf("Digite seu cargo (1-Admin, 2-Gerente, 3-Funcionário): ");
        scanf("%d", &cargo);

        switch (cargo) {
            case 1:
                printf("Acesso total ao sistema.\n");
                break;
            case 2:
                printf("Acesso parcial (relatórios e estoque).\n");
                break;
            case 3:
                printf("Acesso básico (apenas consultas).\n");
                break;
            default:
                printf("Cargo inválido!\n");
        }

    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}
