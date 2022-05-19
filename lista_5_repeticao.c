#include <stdio.h>

long int fatorial(int n) {
    int p=1;
    for (int i=1; i <= n; i++) {
        p *= i;
    }
    return p;
}

int res(int a, int b) {
    while (a >= b) {
        a -= b;
    }
    return a;
}

int dig(int n) {
    int s=0;
    while (n > 9) {
        s += n%10;
        n /= 10;
    }
    return s+n;
}

int mdc(int a, int b) {
    if (a%b == 0) return b;
    int i = 1;
    while (i != 0) {
        i = a%b;
        a = b;
        b = i;
    }
    return a;
}

int mdc3(int a, int b, int c) {
    if(mdc(a,b)%c == 0) return c;
    return mdc(mdc(a, b), c);
}

int fib(int n) {
    if (n < 2) return n;
    int f1 = 1, f2 = 1;
    for (int i = 3; i < n; i++) {
        if (f1 < f2) {
            f1 += f2;
        }
        else {
            f2 += f1;
        }
    }
    return f1 + f2;
}

int primo(int x) {
    if(x <= 1) return(0);
    for (int i = 2; i < x; i++) {
        if (x%i == 0) return 0;
    }
    return 1;
}

void decrescente(int x) {
    x -= 1;
    while (x > 0) {
        printf("%d\n", x);
        x--;
    }
}

int form(int n) {
    if(n == 1) return(n);
    int j = 0;
    for (int i = 1; i <= n; i++){
        j += i*i;
    }
    return j;
}

int mmc(int a, int b) {
    return((a*b)/mdc(a,b));
}

int div(int a, int b) {
    return(a/b);
}

float sqrtC(float n) {
    if (n == 1) return(1);
    float aprox = 1.0;
    for (int i = 1; i <= 15; i++) {
        aprox = 0.5*(aprox+(n/aprox));
    }
    return(aprox);
}

long int expo(int k, int n) {
    if (n == 0) return(1);
    int j = 1;
    for (int i = 0; i < n; i++) {
        j *= k;
    }
    return j;
}

void crescente(int x) {
    int h = 1;
    while (x >= h) {
        printf("%d\n", h);
        h++;
    }
}

int main()
{
	int a, b, c;
    printf("Digite tres numeros arbitrarios:\n");
	scanf("%d %d %d", &a, &b, &c);

	printf(">> O fatorial de %d! eh %ld\n", a, fatorial(a));
	printf(">> O mdc de %d e %d eh %d\n", a, b, mdc(a, b));
	printf(">> O mdc3 de %d, %d e %d eh %d\n", a, b, c, mdc3(a, b, c));
	printf(">> O termo %d da serie de Fibonacci eh %d\n", a, fib(a));
	printf(">> O numero %d eh primo? %d\n", a, primo(a));
	printf(">> A sequencia decrescente de inteiros menores que %d e maiores que 0: ", a);
	decrescente(a);
	printf(">> O resto da divisao entre %d e %d eh %d\n", a, b, res(a, b));
	printf(">> O valor do somatório de i*i, com i variando de 1 até %d eh %d\n", a, form(a));
	printf(">> O mmc de %d e %d é %d\n", a, b, mmc(a, b));
	printf(">> O resultado da divisão inteira de %d por %d eh %d\n", a, b, div(a, b));
	printf(">> A raiz quadrada de %d eh %.3f\n", a, sqrtC(a));
	printf(">> A soma dos digitos de um inteiro positivo %d eh %d\n", a, dig(a));
	printf(">> A pontencia de %d elevado a %d é %ld\n", a, b, expo(a, b));
	printf(">> Todos os inteiros maiores que 0 e menores ou iguais a %d: ", a);
	crescente(a);

	return 0;
}
