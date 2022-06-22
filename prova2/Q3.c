#include <stdio.h>

int fatiamento(unsigned N, unsigned K, int C) {
    if (N < 10) {
        if (N == K) C++;
        return C;
    }
    if (N%10 == K) C++;
    fatiamento(N/10, K, C);
}

int main() {
    int K;
    long unsigned int N;

    printf("Digite um natural N e um K: \n");
    scanf("%ld%d", &N, &K);
    
    printf("%d\n", fatiamento(N, K, 0));
    return 0;

}
