#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float equapoli2(float x) {
    return pow(x, 2) - 5*x + 1;
}

int main() {
    float n;
    
    // O arquivo reais.txt já precisa estar no mesmo diretório que esse script
    FILE* f1=fopen("reais.txt", "r+t");
    if (f1 == NULL ) {
        printf("Erro ao abrir o arquivo reais.txt\n");
        exit(1);
    }
    
    FILE* f2=fopen("outputEq2.txt", "w+t");
    if (f2 == NULL) {
        printf("Erro ao abrir o arquivo output.txt\n");
        exit(1);
    }

    fprintf(f2, "-- Aplicacoes de numeros reais a funcao f(x) = x^2 - 5x + 1\n");
    fprintf(f2, "-- numero >> resultado\n");
    fprintf(f2, "----------------------------\n");
    
    while (!feof(f1)) {
        fscanf(f1, "%f", &n);
        fprintf(f2, "%f >> %f\n", n, equapoli2(n));
    }
    
    fclose(f1);
    fclose(f2);
    return 0;
}

