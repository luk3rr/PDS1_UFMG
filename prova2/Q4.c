#include <stdio.h>

int mult(int n1, int n2)
{
    if (n1 == 0 || n2 == 0) return 0;

    if (n1 < 0 && n2 < 0) return mult(-1 * n1, -1 * n2);

    if (n2 < 0) return mult(n2, n1);

    return n1 + mult(n1, n2 - 1);
}

int main() {
    int n, m;
    printf("Digite dois inteiros: ");
    scanf("%d%d", &n, &m);

    printf("%d\n", mult(n, m));
    return 0;
}
