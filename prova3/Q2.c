#include <stdio.h>
#include <stdlib.h>

int maior(int *A, int B) {
    int aux = 0;
    for (int i=0; i < B; i++) {
        if (A[i] > aux) aux = A[i];
    }
    return aux;
}

int main() {
    int len;
    scanf("%d", &len);
    int vec[len];

    for (int i=0; i < len; i++) {
        scanf("%d", &vec[i]);
    }

    printf("%d\n", maior(vec, len));

    return 0;
}
