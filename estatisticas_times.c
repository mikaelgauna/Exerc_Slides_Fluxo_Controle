#include <stdio.h>

int main() {
    int i;
    int vitorias, derrotas, empates, gols_feitos, gols_sofridos, cartoes_vermelhos;
    int maior_vitorias = 0, maior_derrotas = 0;
    int times_com_mais_de_3_cartoes = 0;
    float saldo_total = 0;

    for (i = 0; i < 34; i++) {
        printf("Time %d:\n", i + 1);

        printf("Digite o numero de vitorias: ");
        scanf("%d", &vitorias);

        printf("Digite o numero de derrotas: ");
        scanf("%d", &derrotas);

        printf("Digite o numero de empates: ");
        scanf("%d", &empates);

        printf("Digite o numero de gols efetuados: ");
        scanf("%d", &gols_feitos);

        printf("Digite o numero de gols sofridos: ");
        scanf("%d", &gols_sofridos);

        printf("Digite a quantidade de cartoes vermelhos: ");
        scanf("%d", &cartoes_vermelhos);

        if (vitorias > maior_vitorias) {
            maior_vitorias = vitorias;
        }

        if (derrotas > maior_derrotas) {
            maior_derrotas = derrotas;
        }

        saldo_total += (float)(gols_feitos - gols_sofridos);

        if (cartoes_vermelhos > 3) {
            times_com_mais_de_3_cartoes++;
        }

        printf("\n");
    }

    float saldo_medio = saldo_total / 34;
    float percentual_mais_3_cartoes = (times_com_mais_de_3_cartoes / 34.0) * 100;

    printf("a) Maior numero de vitorias: %d\n", maior_vitorias);
    printf("b) Maior numero de derrotas: %d\n", maior_derrotas);
    printf("c) Saldo medio de gols geral: %.2f\n", saldo_medio);
    printf("d) Percentagem de times com mais de 3 cartoes vermelhos: %.2f%%\n", percentual_mais_3_cartoes);

    return 0;
}