#include <stdio.h>

float triangulo_area(float height, float base) {
    return height*base/2;
}

float triangulo_truncado(float height, float base) {
    return triangulo_area(height, base)*0.81;
}

int expo(int a, int b) {
    if (a >= b) {
        printf("Nao existem numeros entre o intervalo que vai de A ate B.\n");
        return 0;
    }
    if (a < (b-1)) {
        printf("O quadrado de %d eh %d\n", a+1, (a+1)*(a+1));
        expo(a+1, b);
    }
    return 0;
}

int fatiamento(unsigned N, unsigned K, int C) {
    if (N < 10) {
        if (N == K) C++;
        printf("O numero %d ocorre %d vezes.\n", K, C);
        return 0;
    }
    if (N%10 == K) C++;
    fatiamento(N/10, K, C);
}

int main() {
    float height, base;
    int n1, n2, K;
    long unsigned int N;
    printf(">> Digite a altura e a base de um triangulo qualquer: ");
    scanf("%f%f", &height, &base);
    printf("A area desse triangulo eh %f\n", triangulo_area(height, base));
    printf("A area desse triangulo menos sua ponta equivale a %f\n", triangulo_truncado(height, base));
    printf(">> OBS.: A ponta equivale a um triangulo que tem 0.1 da base e 0.1 da altura do primeiro triangulo.\n");

    printf(">> Digite dois numeros inteiros: ");
    scanf("%d%d", &n1, &n2);
    expo(n1, n2);

    printf(">> Digite um numero para ser fatiado e outro para saber quantas vezes este ocorre naquele:\n");
    scanf("%ld%d", &N, &K);
    fatiamento(N, K, 0);

    return 0;
}
