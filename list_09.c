#include <stdio.h>
#include <stdbool.h>

float media_matriz(int n, float mat[][100]) {
    int i, j;
    float sum;
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++){
            sum += mat[i][j];
        }
    }
    return sum/(n*n);
}

void identidade(int n, float A[][100]) {
    int i, j;
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            if (i == j) {
                A[i][j] = 1;
            }
            else {
                A[i][j] = 0;
            }
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
}

void transposta(int n, float A[][100], float T[][100]) {
    int i, j; 
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            T[i][j] = A[j][i];
            printf("%.2f ", T[i][j]);
        }
        printf("\n");
    }
}

bool simetrica(int n, float A[][100]) {
    int i, j;
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            if (A[j][i] != A[i][j]) return 0;
        }
    }
    return 1;
}

void soma_matriz(int n, float A[][100], float B[][100], float S[][100]) {
    int i, j;
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            S[i][j] = A[i][j] + B[i][j];
            printf("%.2f ", S[i][j]);
        }
        printf("\n");
    }
}

void mult_matriz(int n, float A[][100], float B[][100], float P[][100]) {
    int i, j, k;
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            k=0;
            while (k <= n) {
                P[i][j] += A[i][k] * B[k][j];
                k++;
            }
            printf("%.2f ", P[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE* f=fopen("matriz.txt", "r+t");
    if (f==NULL) {
        printf("Erro ao abrir o arquivo matriz.txt");
        return 0;
    }

    int m, n, i, j, k, l;
    fscanf(f, "%d %d", &m, &n);
    float matriz[m][n];
    
    for (i=0; i < m; i++) {
        for (j=0; j < n; j++) {
            fscanf(f, "%f", &matriz[i][j]);
        }
    }
    for (k=0; k < m; k++) {
        for (l=0; l < n; l++) {
            printf("%.2f ", matriz[k][l]);
        }
        printf("\n");
    }

    float A[][100] = {{1,2,3}, {2,5,6}, {3,6,1}};
    float B[][100] = {{6,5,4}, {3,2,1}, {1,2,3}};
    float S[100][100];
    float P[100][100];
    
    printf("\n>> A media aritmetica da matriz A eh: %f\n", media_matriz(3, A));
   
    printf("\n>> A eh simetrica? %d\n\n", simetrica(3, A));
    
    printf(">> A soma da matriz A com a matriz B eh: \n");
    soma_matriz(3, A, B, S);

    printf("\n>> A multiplicacao da matriz A com a matriz B eh: \n");
    mult_matriz(3, A, B, P);

    printf("\n>> A transposta de A eh: \n");
    transposta(3, A, B);
 
    printf("\n>> A identidade de A eh: \n");
    identidade(3, A); 

    return 0;
}
