#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Digite dois números e um operador (+, -, *, /): ");
    scanf("%lf %lf %c", &num1, &num2, &operador);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisão por zero não é permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            }
            break;
        default:
            printf("Operador inválido.\n");
    }

    return 0;
}
