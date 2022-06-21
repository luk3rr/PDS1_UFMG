#include <stdio.h>

int mult(int n, int m, int v) {
    if (m == 0 || n == 0) return v;
    
    if (m < 0) {
        v += n;
        mult(n, m+1, v);
    }
    else {
        v += n; 
        mult(n, m-1, v);
    }
}

int main() {
    int n, m;
    printf("Digite dois inteiros: ");
    scanf("%d%d", &n, &m);

    printf("%d", mult(n, m, 0));
    return 0;
}
