#include <stdio.h>

int main() {
    int qtd, aux;

    printf("Numero de questoes no concurso:\n");
    scanf("%d", &qtd);

    typedef struct individuo {
        int id;
        int pontos[qtd];
    } individuo;

    individuo garoto;

    for (int i=0; i < qtd; i++) {
        scanf("%d", &garoto.pontos[i]);
        aux += garoto.pontos[i];
    }
    
    printf("%d\n", aux);
    return 0;
}
