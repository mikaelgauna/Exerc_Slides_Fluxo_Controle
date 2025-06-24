#include <stdio.h>

int main() {
    // ==============================
    // 1. Soma de todos os ímpares entre 50 números
    // ==============================
    {
        int i, num, soma = 0;

        printf("1) SOMA DE TODOS OS IMPARES:\n");

        for (i = 0; i < 50; i++) {
            printf("Digite o %dº numero: ", i + 1);
            scanf("%d", &num);

            if (num % 2 != 0) {
                soma += num;
            }
        }

        printf("Soma dos impares: %d\n\n", soma);
    }

    // ==============================
    // 2. Soma dos ímpares entre 100 e 200
    // ==============================
    {
        int i, num, soma = 0;

        printf("2) SOMA DOS IMPARES ENTRE 100 E 200:\n");

        for (i = 0; i < 50; i++) {
            printf("Digite o %dº numero: ", i + 1);
            scanf("%d", &num);

            if (num % 2 != 0 && num >= 100 && num <= 200) {
                soma += num;
            }
        }

        printf("Soma dos impares entre 100 e 200: %d\n\n", soma);
    }

    // ==============================
    // 3. Maior e menor entre 20 números inteiros
    // ==============================
    {
        int i, num;
        int maior, menor;

        printf("3) MAIOR E MENOR ENTRE 20 NUMEROS:\n");

        printf("Digite o 1º numero: ");
        scanf("%d", &num);
        maior = menor = num;

        for (i = 1; i < 20; i++) {
            printf("Digite o %dº numero: ", i + 1);
            scanf("%d", &num);

            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n\n", menor);
    }

    // ==============================
    // 4. Maior e menor entre 20 números, sem permitir negativos
    // ==============================
    {
        int i = 0, num;
        int maior, menor;
        int primeira_entrada = 1;

        printf("4) MAIOR E MENOR SEM NEGATIVOS:\n");

        while (i < 20) {
            printf("Digite o %dº numero (nao negativo): ", i + 1);
            scanf("%d", &num);

            if (num < 0) {
                printf("Valor invalido. Tente novamente.\n");
                continue;
            }

            if (primeira_entrada) {
                maior = menor = num;
                primeira_entrada = 0;
            } else {
                if (num > maior) maior = num;
                if (num < menor) menor = num;
            }

            i++;
        }

        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
    }

    return 0;
}