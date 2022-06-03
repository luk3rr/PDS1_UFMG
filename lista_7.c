#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float *v, int n) {
    float sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += v[i];
    }
    return sum/n;
}

float varPopulacional(float *v, int n) {
    float med = media(v, n);
    float var = 0;
    int i;
    for (i = 0; i < n; i++) {
        var += pow((v[i] - med), 2);
    }
    return var/n;
}

float maior(float *v, int n) {
    float m=0;
    int i;
    for (i=0; i < n; i++) {
        if (v[i] > m) m = v[i];
    }
    return m;
}

float menor(float *v, int n) {
    float m=0;
    int i;
    for (i=0; i < n; i++) {
        if (v[i] < m) m = v[i];
    }
    return m;
}

float prodEscalar(float *u, float *v, int n) {
    float uv=0;
    int i;
    for (i=0; i < n; i++) {
        uv += u[i]*v[i];
    }
    return uv;
}

int main() {
    FILE* f=fopen("reais.txt", "r+t");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo naturais.txt");
        exit(1);
    }
    FILE* vetv=fopen("vetorV.txt", "r+t");
    if (vetv == NULL) {
        printf("Erro ao abrir o arquivo naturais.txt");
        exit(1);
    }
    FILE* vetu=fopen("vetorU.txt", "r+t");
    if (vetu == NULL) {
        printf("Erro ao abrir o arquivo naturais.txt");
        exit(1);
    }
    
    float a[1000];
    float v[100];
    float u[100];
    int i=0, n=0, m=0;
    
    while (!feof(f)) {
        fscanf(f, "%f", &a[i]);
        i++;
    }
    i -= 1;

    while (!feof(vetv)) {
        fscanf(vetv, "%f", &v[n]);
        n++;
    }
    n -= 1;
    
    while (!feof(vetu)) {
        fscanf(vetu, "%f", &u[m]);
        m++;
    }
    m -= 1;

    printf("%d\n", i);
    for (int j=0; j < i; j++) {
        printf("%d %f\n", j, a[j]);
    }

    fclose(f);
    
    if (i >= 999) printf("OBS.: O limite do arranjo foi atingido\n");
    printf("A media eh %f\n", media(a, i));
    printf("A variancia eh %f\n", varPopulacional(a, i));
    printf("O maior valor armazenado no vetor A eh %f\n", maior(a, i));
    printf("O menor valor armazenado no vetor A eh %f\n", menor(a, i));
    if (n != m) {
        printf("O produto escalar entre vetores nao eh definido para vetores em espaços diferentes\n");
    }
    else {
        printf("O produto escalar entre os vetores V e U eh %f\n", prodEscalar(v, u, n));
    }
    return 0;
}
