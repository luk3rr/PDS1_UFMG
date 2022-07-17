#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float equapoli3(float x, float a, float b, float c, float d) {
    return a*pow(x, 3) + b*pow(x, 2) + c*x + d;
}

int main() {
    float n, a, b, c, d;
    
    // O arquivo reais.txt já precisa estar no mesmo diretório que esse script
    FILE* f1=fopen("reais.txt", "r+t");
    if (f1 == NULL ) {
        printf("Erro ao abrir o arquivo reais.txt\n");
        exit(1);
    }
    
    FILE* f2=fopen("outputEq3.txt", "w+t");
    if (f2 == NULL) {
        printf("Erro ao abrir o arquivo outputEq3.txt\n");
        exit(1);
    }

    printf("Digite os coeficientes A, B, C e D da funcao polinomial de grau 3: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);

    fprintf(f2, "-- Aplicacoes de numeros reais a funcao f(x) = %fx^3 + %fx^2 + %fx + %f\n", a, b, c, d);
    fprintf(f2, "-- Numero >> resultado\n");
    fprintf(f2, "---------------------------------------\n");
    
    while (!feof(f1)) {
        fscanf(f1, "%f", &n);
        fprintf(f2, "%f >> %f\n", n, equapoli3(n, a, b, c, d));
    }
    
    fclose(f1);
    fclose(f2);
    return 0;
}
