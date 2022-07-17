#include <stdio.h>
#include <stdbool.h>

float max(float a, float b, float c) {
    if (a > b && a > c) return a;
    if (b > c) return b;
    return c;
}

float min(float a, float b, float c) {
    if (a < b && a < c) return a;
    if (b < c) return b;
    return c;
}

bool par(int x) {
    return(x%2 == 0);
}

bool dentro(float x, float y, float z) {
    return((x >= y && x <= z) || (x >= z && x <= y));
}

bool fora(float x, float y, float z) {
    return(!dentro(x, y ,z));
}

bool bissexto(int ano){
    return((ano%400 == 0) || (ano%4 == 0 && !(ano%100 == 0)));
}

int main() {
    float n1, n2, n3;
    int n4, ano, x, y;

    // Tarefas 1-a, 1-b, 2-b e 2-c
    printf("Digite tres numeros: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("o maior numero eh: %f\n", max(n1, n2, n3));
    printf("o menor numero eh: %f\n", min(n1, n2, n3));
    printf("%f esta entre %f e %f? %d\n", n1, n2, n3, dentro(n1, n2, n3));
    printf("%f esta fora de %f e %f? %d\n", n1, n2, n3, fora(n1, n2, n3));
    
    // Tarefa 2-a
    printf("Digite um numero inteiro: ");
    scanf("%d", &n4);
    printf("%d eh par? %d\n", n4, par(n4));
   
    // Tarefa 3
    printf("Digite um ano: ");
    scanf("%d", &ano);
    printf("o ano %d eh bissexto? %d\n", ano, bissexto(ano));

    return 0;
}
