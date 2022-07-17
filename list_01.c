#include <stdio.h>
#include <math.h>

#define PI 3.142857

int main() {
    float a, b, c, d, delta;
    printf("1.a) 3 + 4 = %d\n", 3 + 4);
    printf("1.b) 7/2 = %.1f\n", (double)7 / 2);
    printf("1.c) 3^2 = %.0f\n", powf(3, 2));
    printf("1.d) 5.3 * 2.1 = %.2f\n", 5.3 * 2.1);
    printf("1.e) 2 * 5 = %d\n", 2 * 5);
    printf("1.f) 2 + 2 * 5 = %d\n", 2 + (2 * 5));
    printf("1.g) (2 + 5) * 3 = %d\n", (2 + 5) * 3);
    printf("1.h) sin(3.141502) = %.10f\n", sin(3.141502));
    printf("1.i) sqrt(5) = %f\n", sqrt(5));
    printf("1.j) 1 + 2 + 3 = %d\n", 1 + 2 + 3);
    printf("1.k) 1 * 2 * 3 = %d\n", 1 * 2 * 3);
    printf("1.l) (1 + 2 + 3)/3.0 = %.2f\n", (1 + 2 + 3) / 3.0);
    printf("1.m) (2 + 4) * (3 - 1) = %d\n", (2 + 4) * (3 - 1));
    printf("1.n) (9/2) + (3 * 2) = %f\n", (9.0 / 2) + (3 * 2));
    printf("1.o) sin(4.5) + cos(3.7) = %f\n", sin(4.5) + cos(3.7));
    printf("1.p) log(2.3) - log(3.1) = %f\n", log(2.3) - log(3.1));
    printf("1.q) log(7) + (log(7) * log(7) - cos(log(7))) = %f\n",
            log(7) + (log(7) * log(7) - cos(log(7))));
    printf("1.r) (10.3 + 8.4)/50.3 - (10.3 + 8.4) = %f\n",
            (10.3 + 8.4) / 50.3 - (10.3 + 8.4));
    printf("1.s) (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8) = %f\n",
            (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)));
    
    printf("---------------------------------------------------\n");
    
    printf("Entre com quatro numeros reais:\n");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    printf(">> Informacoes: a = %f, b = %f, c = %f, d = %f\n", a, b, c, d);
    printf("2.a) a + b = %f\n", a + b);
    printf("2.b) a/c = %f\n", a / c);
    printf("2.c) a^2 = %f\n", powf(a, 2.0));
    printf("2.d) b * c = %f\n", b * c);
    printf("2.e) a * b - c = %f\n", a * b - c);
    printf("2.f) a + b * c = %f\n", a + b * c);
    printf("2.g) (a+b)*c = %f\n", (a + b) * c);
    printf("2.h) sin(a) = %f\n", sinf(a));
    printf("2.i) sqrt(b) = %f\n", sqrtf(b));
    printf("2.j) a + b + c = %f\n", a + b + c);
    printf("2.k) a * b * c = %f\n", a * b * c);
    printf("2.l) (a + b + c)/d = %f\n", (a + b + c) / d);
    printf("2.m) (a + b) * (a - d) = %f\n", (a + b) * (a - d));
    printf("2.n) (b/c) + (a*d) = %f\n", (b / c) + (a * d));
    printf("2.o) sin(b) + cos(c) = %f\n", sinf(b) + cosf(c));
    printf("2.p) log(a) - log(c) = %f\n", logf(a) - logf(c));
    printf("2.q) log(a) + (log(b) * log(d) - cos(log(c))) = %f\n",
            logf(a) + (logf(b) * logf(d) - cosf(c)));
    printf("2.r) (b + a)/c - (d + a) = %f\n", (b + a) / c - (d + a));
    printf("2.s) (cos(d) + sin(c)) * (cos(b) - sin(a)) = %f\n",
            (cosf(d) + sinf(c)) * (cosf(b) - sinf(a)));
 
    printf("--------------------------------------------------\n");
    
    printf("3.a) Média aritmétia de a, b e c: %f\n", (a+b+c)/3);
    printf("3.b) Média ponderada com pesos 3, 4 e 5, respectivamente: %f\n",
           (a*3 + b*4 + 5*c)/(3+4+5));
    printf("3.c) Perímetro de um círculo de raio a: %f\n", 2*PI*a);
    printf("3.d) Área de um círculo de raio a: %f\n", PI*powf(a, 2));
    printf("3.e) Área do triângulo de base b e altura c: %f\n", (b*c)/2);
    printf("3.f) Hipotenusa de um triângulo retângulo, cujos lados conhecidos são b e c: %f\n",
           sqrtf(powf(b, 2) + powf(c, 2)));
    delta = powf(b, 2) - 4*a*c;
    printf("3.g) Raizes de uma equação do segundo grau definidade por ax^2 + bx + c: x1 = %f, x2 = %f\n",
           -b+(sqrtf(delta)/(2*a)), -b-(sqrtf(delta)/(2*a)));
  
  return 0;
}
