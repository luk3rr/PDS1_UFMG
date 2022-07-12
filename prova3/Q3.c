#include <stdio.h>
#include <math.h>

typedef struct restaurante {
    float locX, locY;
    int nivel;
    char nome[128];
} restaurante;

void localizarPorDistancia(restaurante *restaurantes, int qtd, float coordX, float coordY, float raio) {
    for (int i=0; i < qtd; i++) {
        float distancia = sqrt(pow(restaurantes[i].locX - coordX, 2) + pow(restaurantes[i].locY - coordY, 2));
        if (distancia <= raio) {
            printf("Nome: Restaurante %s\n", restaurantes[i].nome);
            printf("Nivel: %d\n", restaurantes[i].nivel);
            printf("Distancia: %.2f m\n", distancia);
        }
    }
}

void localizarPorDistanciaNivel(restaurante *restaurantes, int qtd, float coordX, float coordY, float raio, int nivel) {
    for (int i=0; i < qtd; i++) {
        float distancia = sqrt(pow(restaurantes[i].locX - coordX, 2) + pow(restaurantes[i].locY - coordY, 2));
        if (distancia <= raio && restaurantes[i].nivel <= nivel) {
            printf("Nome: Restaurante %s\n", restaurantes[i].nome);
            printf("Nivel: %d\n", restaurantes[i].nivel);
            printf("Distancia: %.2f\n", distancia);
        }
    }
}


int main() {
    int qtd, nivel;

    float x, y, raio;

    FILE* f=fopen("restaurantes.txt", "r+t");
    if(f == NULL) return 0;
    
    // Se o numero for maior do real vai da merda
    printf("Quantidade de restaurantes no arquivo:\n");
    scanf("%d", &qtd);

    restaurante restaurantes[qtd];

    // Se tiver espaco no nome do restaurante vai da merda
    for (int i=0; i < qtd; i++) {
        fscanf(f, "%s", restaurantes[i].nome);
        fscanf(f, "%d", &restaurantes[i].nivel);
        fscanf(f, "%f", &restaurantes[i].locX);
        fscanf(f, "%f", &restaurantes[i].locY);
    }
    fclose(f);
    
    printf("Suas coordenadas atual:\n");
    scanf("%f%f", &x, &y);
    printf("Buscar restaurante em um raio de ? metros:\n");
    scanf("%f", &raio);
    localizarPorDistancia(restaurantes, qtd, x, y, raio);
 
    printf("Buscar restaurante em um raio de ? metros e com nivel nao superio a ?:\n");
    scanf("%f%d", &raio, &nivel);
    localizarPorDistanciaNivel(restaurantes, qtd, x, y, raio, nivel);

    return 0;
}
