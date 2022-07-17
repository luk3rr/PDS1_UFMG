#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int primo(int x) {
    int i = sqrt(x);
    if (x <= 1) return 0;
    while (i != 1) {
        if (x%i == 0) return 0;
        i--;
    }
    return 1;
}

int main() {
    // O arquivo naturais.txt já precisa estar no mesmo diretório que esse script
    FILE* f1=fopen("naturais.txt", "r+t");
    if (f1 == NULL) {
        printf("Erro ao abrir o arquivo naturais.txt");
        exit(1);
    }
    FILE* f2=fopen("ehprimo.txt", "w+t");
    if (f2 == NULL) {
        printf("Erro ao abrir o arquivo ehprimo.txt");
        exit(1);
    }
    while (!feof(f1)) {
        int p;
        fscanf(f1, "%d", &p);
        fprintf(f2, "%d - %d\n", p, primo(p));
    }
    fclose(f1);
    fclose(f2);
    return 0;
}

