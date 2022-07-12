#include <stdio.h>

typedef struct individuo {
    int id;
    int pontos[18];
} individuo;

int main() {
    individuo garoto;
    int aux = 0;

    for (int i=0; i < 18; i++) {
        scanf("%d", &garoto.pontos[i]);
        aux += garoto.pontos[i];
    }
    
    printf("%d\n", aux);
    return 0;
}
