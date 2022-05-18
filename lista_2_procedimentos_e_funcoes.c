#include <stdio.h>
#include <math.h>

#define PI 3.1415

float media(float a, float b, float c) {return (a+b+c)/3;}

float media_ponderada(float a, float b, float c) {return (3*a+4*b+5*c)/(3+4+5);}

float perimetro_circulo(unsigned r) {return (2*PI*r);}

float area_circulo(float r) {return (PI*r*r);}

float area_triangulo(float b, float c) {return (b*c/2);}

float area_caixa(float a, float b, float c) {return (2*(a*b+b*c+a*c));}

float volume_caixa(float a, float b, float c) {return (a*b*c);}

float area_cilindro(float r, float h) {return (area_circulo(r)*(r+h));}

float volume_cilindro(float r, float h) {return (area_circulo(r)*h);}

float hipotenusa(float b, float c) {return sqrtf(b*b+c*c);}

void raiz_positiva(float a, float b, float c) {
    float raiz1, raiz2, delta;
    delta = powf(b, 2) - 4*a*c;
    if (delta >= 0) {
        raiz1 = (-b + sqrtf(delta))/(2*a);
        raiz2 = (-b - sqrtf(delta))/(2*a);
        if (raiz1 <= 0 && raiz2 <= 0) {
            printf("A equacao do segundo grau dada por %.2f*x^2 + %.2f*x + %.2f, nao tem raiz positiva\n", a, b, c);
        }
        else {
            if (raiz1 > 0 && raiz2 > 0) {
                printf("%.2f e %.2f sao raizes positivas da equacao %.2f*x^2 + %.2f*x + %.2f\n", raiz1, raiz2, a, b, c);
            } 
            else if (raiz1 > 0) {
                printf("%.2f eh a unica raiz positiva da equacao %.2f*x^2 + %.2f*x + %.2f\n", raiz1, a, b, c);
            } 
            else if (raiz2 >0) {
                printf("%.2f eh a unica raiz positiva da equacao %.2f*x^2 + %.2f*x + %.f\n", raiz2, a, b, c);
            }
        }
    }
    else {
        printf("A equação do segundo grau dada por %.2f*x^2 + %.2f*x + %.2f, nao tem raizes reais\n", a, b, c);
    }
}

int main() {
    float a, b, c, r, h;
    printf("Digite cinco numeros a serem armazenados nas variaveis A, B, C, R e H, respectivamente: ");
    scanf("%f%f%f%f%f", &a, &b, &c, &r, &h);
    printf("a) A media de A, B e C eh %.2f\n", media(a, b, c));
    printf("b) A media ponderada de A, B e C, onde A tem peso 3, B tem peso 4 e C tem peso 5 eh %.2f\n", media_ponderada(a, b, c));
    printf("c) O perimetro do circulo de raio R eh %.2f\n", perimetro_circulo(r));
    printf("d) A area do circulo de raio R eh %.2f\n", area_circulo(r));
    printf("e) A area do triangulo de base B e altura C eh %.2f\n", area_triangulo(b, c));
    printf("f) A area da caixa de dimensoes A, B, e C eh %.2f\n", area_caixa(a, b, c));
    printf("g) O volume da caixa de dimensoes A, B e C eh %.2f\n", volume_caixa(a, b, c));
    printf("h) A area do cilindro de raio R e altura H eh %.2f\n", area_cilindro(r, h));
    printf("i) O volume do cilindro de raio R e altura H eh %.2f\n", volume_cilindro(r, h));
    printf("j) A hipotenusa de um triangulo retangulo com catetos B e C eh %.2f\n", hipotenusa(b, c));
    printf("k) ");
    raiz_positiva(a, b, c);
    
    return 0;
}
