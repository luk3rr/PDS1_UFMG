#include <stdio.h>

int main() {
    int n;
    char file[32];
    printf("Digite o nome do arquivo:\n");
    scanf("%s", file);

    FILE* f=fopen(file, "w+t");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo '%s'\n", file);
        return 0;
    }

    printf("Digite cinco numeros inteiros:\n");
    for (int i=0; i < 5; i++) {
        scanf("%d", &n);
        fprintf(f, "%d\n", n);
    }
    
    fclose(f);

    FILE* f1=fopen(file, "r+t");
    if (f1 == NULL) {
        printf("Erro ao abrir o arquivo '%s'\n", file);
        return 0;
    }

    while(!feof(f1)) {
        fscanf(f1, "%d", &n);
        printf("%d\n", n);
    }

    fclose(f1);
    return 0;
}
