#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int primo(int x) {
    int i = sqrt(x);
    if (x == 1) return 1;
    while (i != 1) {
        if (x%i == 0) return 0;
        i--;
    }
    return 1;
}

int main() {
    int n, i=0, p=2;
    printf("Digite a quantidade desejada de numeros primos: ");
    scanf("%d", &n);
    
    FILE* f=fopen("primos.txt", "w+t");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    
    while (i < n) {
        if (primo(p)) {
            fprintf(f, "%d\n", p);
            i++;
        }
        p++;
    }
    fclose(f);
    return 0;
}
