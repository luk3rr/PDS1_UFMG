#include <stdio.h>

long int fatorial(int n) {
    if(n == 0) return(1);
    return(n*fatorial(n-1));
}

int mdc(int a, int b) {
    if(a%b == 0) return(b);
    return(mdc(b, (a%b)));
}

int mdc3(int a, int b, int c) {
    if(mdc(a,b)%c == 0) return(c);
    return mdc(c, (mdc(a,b)%c));
}

int fib(int n) {
    if(n < 2) return(n);
    return(fib(n-1) + fib(n-2));
}

int primo(int x, int aux) {
    if(x <= 1) return(0);
    if(x == aux) return(1);
    if(x%aux == 0) return(0);
    if(aux < x) {
        primo(x, aux+1);
    }
}

void decrescente(int x) {
    printf("%d\n", x);
    if(x > 1) return(decrescente(x-1));
}

int res(int a, int b) {
    if(b == 1 || a/b == 0) return(0);
    if((a-b) < b) return(a-b);
    if(a/b != 1) return(res(a-b, b));
}

int form(int n) {
    if(n == 1) return(n);
    return(n*n + form(n-1));
}

int mmc(int a, int b) {
    return((a*b)/mdc(a,b));
}

int div(int a, int b) {
    return(a/b);
}

float sqrtC(float n, float aprox, int x) {
    if(n == 1) return(1);
    aprox = 0.5*(aprox+(n/aprox));
    if(x<10) {
        return(sqrtC(n, aprox, x+1));
    }
    return(aprox);
}

int dig(int n) {
    if(n == 0) return(0);
    return((n%10) + dig(n/10));
}

long int expo(int k, int n) {
    if(n == 0) return(1);
    return(k*expo(k, n-1));
}

void crescente(int x, int h) {
    printf("%d\n", h);
    if(h < x) {
        return(crescente(x, h+1));
    }
}

int main()
{
	int a, b, c;
    printf("Digite tres numeros inteiros arbitrarios:\n");
	scanf("%d %d %d", &a, &b, &c);

	printf(">> O fatorial de %d! eh %ld\n", a, fatorial(a));
	printf(">> O mdc de %d e %d eh %d\n", a, b, mdc(a, b));
	printf(">> O mdc3 de %d, %d e %d eh %d\n", a, b, c, mdc3(a, b, c));
	printf(">> O termo %d da serie de Fibonacci eh %d\n", a, fib(a));
	printf(">> O numero %d eh primo? %d\n", a, primo(a, 2));
	printf(">> A sequencia decrescente de inteiros menores que %d e maiores que 0: ", a);
	decrescente(a);
	printf(">> O resto da divisao entre %d e %d eh %d\n", a, b, res(a, b));
	printf(">> O valor do somatório de i*i, com i variando de 1 até %d eh %d\n", a, form(a));
	printf(">> O mmc de %d e %d é %d\n", a, b, mmc(a, b));
	printf(">> O resultado da divisão inteira de %d por %d eh %d\n", a, b, div(a, b));
	printf(">> A raiz quadrada de %d eh %.3f\n", a, sqrtC(a, 1.0, 1));
	printf(">> A soma dos digitos de um inteiro positivo %d eh %d\n", a, dig(a));
	printf(">> A pontencia de %d elevado a %d é %ld\n", a, b, expo(a, b));
	printf(">> Todos os inteiros maiores que 0 e menores ou iguais a %d: ", a);
	crescente(a, 1);

	return 0;
}
