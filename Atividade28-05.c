#include <stdio.h>

int main() {
    // 1. CONTAGEM REGRESSIVA
    int n, i;
    printf("Contagem Regressiva\n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }
    i = n;
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n\n");

    // 2. SOMA ATÉ DIGITAR ZERO
    int num, soma = 0;
    printf("Soma até digitar zero:\n");
    while (1) {
        if (scanf("%d", &num) != 1) break;
        if (num == 0) break;
        soma += num;
    }
    printf("Soma = %d\n\n", soma);

    // 3. CÁLCULO DE FATORIAL
    unsigned long long fatorial = 1;
    printf("Cálculo de Fatorial:\n ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }
    i = n;
    while (i > 1) {
        fatorial *= i;
        i--;
    }
    printf("Fatorial de %d = %llu\n\n", n, fatorial);

    // 4. MÉDIA DE NOTAS VÁLIDAS
    float nota, somaNotas = 0.0;
    int count = 0;
    printf("Digite as notas:\n");
    while (1) {
        if (scanf("%f", &nota) != 1) break;
        if (nota < 0.0 || nota > 10.0) break;
        somaNotas += nota;
        count++;
    }
    if (count > 0)
        printf("Média = %.2f\n\n", somaNotas / count);
    else
        printf("Nenhuma nota válida.\n\n");

    // 5. CONTADOR DE DÍGITOS PARES/ÍMPARES
    int par = 0, impar = 0, digito;
    printf("Contador de dígitos pares e ímpares:\n");
    if (scanf("%d", &num) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    if (num < 0) num = -num;
    while (num > 0) {
        digito = num % 10;
        if (digito % 2 == 0)
            par++;
        else
            impar++;
        num /= 10;
    }
    printf("%d pares, %d ímpares", par, impar);

    // 6. SEQUÊNCIA DE FIBONACCI
    int nFibo, countFibo = 0;
    unsigned long long a = 0, b = 1, temp;
    printf("Sequência de Fibonacci:\n");
    if (scanf("%d", &nFibo) != 1 || nFibo < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }
    while (countFibo < nFibo) {
        printf("%llu", a);
        if (countFibo < nFibo - 1) printf(", ");
        temp = a + b;
        a = b;
        b = temp;
        countFibo++;
    }
    printf("\n\n");

    // 7. VERIFICADOR DE NÚMEROS PERFEITOS
    int somaDiv = 0;
    printf("Verificador de números perfeitos:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada inválida.\n");
        return 1;
    }
    i = 1;
    while (i < n) {
        if (n % i == 0)
            somaDiv += i;
        i++;
    }
    if (somaDiv == n)
        printf("%d é perfeito\n\n", n);
    else
        printf("%d não é perfeito\n\n", n);

    // 8. INVERSÃO DE NÚMEROS
    int invertido = 0;
    printf("Inversão de números");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }
    while (n > 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }
    printf("Número invertido: %d\n\n", invertido);

    // 9. MÁXIMO E MÍNIMO
    int max = 0, min = 0, primeiro = 1;
    printf("Máximo e Mínimo\n");
    while (1) {
        if (scanf("%d", &num) != 1) break;
        if (num == 0) break;
        if (primeiro) {
            max = min = num;
            primeiro = 0;
        } else {
            if (num > max) max = num;
            if (num < min) min = num;
        }
    }
    if (primeiro)
        printf("Nenhum número válido digitado.\n");
    else
        printf("Máximo = %d, Mínimo = %d\n\n", max, min);

    // 10. CONVERSÃO DECIMAL-BINÁRIO
    int bin[32], j = 0, numBin;
    printf("Conversão decimal para binário:\n ");
    if (scanf("%d", &numBin) != 1 || numBin < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }
    if (numBin == 0) {
        printf("0\n\n");
    } else {
        int tempNum = numBin;
        while (tempNum > 0) {
            bin[j] = tempNum % 2;
            tempNum /= 2;
            j++;
        }
        printf("%d em binário: ", numBin);
        while (j > 0) {
            j--;
            printf("%d", bin[j]);
        }
        printf("\n\n");
    }

    return 0;
}
