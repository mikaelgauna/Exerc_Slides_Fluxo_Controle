#include <stdio.h>
#include <math.h>

int main() {
    double Y, X_atual, X_novo, erro = 0.1;
    int iteracoes = 0;

    printf("Digite um numero positivo para calcular a raiz quadrada: ");
    scanf("%lf", &Y);

    if (Y <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    X_atual = Y / 2.0;

    do {
        X_novo = X_atual - ((X_atual * X_atual - Y) / (2 * X_atual));
        iteracoes++;
    } while (fabs(X_novo - X_atual) >= erro);

    printf("\nResultado aproximado (Newton-Raphson): %.5f\n", X_novo);
    printf("Resultado da funcao sqrt(): %.5f\n", sqrt(Y));
    printf("Diferenca entre os resultados: %.5f\n", fabs(X_novo - sqrt(Y)));
    printf("Numero de iteracoes realizadas: %d\n", iteracoes);

    return 0;
}