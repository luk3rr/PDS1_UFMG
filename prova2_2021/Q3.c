#include <stdio.h>

int fatiamento(unsigned N, unsigned K, int C) {
    if (N < 10) {
        if (N == K) C++;
        printf("O numero %d ocorre %d vezes.\n", K, C);
        return 0;
    }
    if (N%10 == K) C++;
    fatiamento(N/10, K, C);
}

int main() {
    int K;
    long unsigned int N;

    printf("Digite um natural N e um K: \n");
    scanf("%ld%d", &N, &K);
    
    fatiamento(N, K, 0);

}
