#include <cmath>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.14159265359

typedef struct Ponto {
    float x, y;
    
    float distancia(Ponto &p);
    void atribuir(float a, float b);

} Ponto;

float Ponto::distancia(Ponto &p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

void Ponto::atribuir(float a, float b) {
    x = a;
    y = b;
    
}

typedef struct Triangulo {
    Ponto A, B, C;

    float perimetro();
    float area();
    bool equilatero();
    bool semelhante(Triangulo &ABC);
} Triangulo;

float Triangulo::perimetro() {
    return A.distancia(B) + A.distancia(C) + C.distancia(B);
}


float angulo(Ponto p1, Ponto p2, Ponto p3) {
    //P2P1 = (P1x - P2x, P1y - P2y);
    //P2P3 = (P3x - P2x, P3y - P2y);
    return acos(((p1.x - p2.x) * (p3.x - p2.x) + (p1.y - p2.y) * (p3.y - p2.y)) / (p1.distancia(p2) * p2.distancia(p3)));
}

float Triangulo::area() {
    return (A.distancia(B) * B.distancia(C) * sin(angulo(A, B, C))) / 2;    
}

bool Triangulo::equilatero() {
    if (A.distancia(B) == B.distancia(C) && B.distancia(C) == C.distancia(A)) return 1;
    return 0;
}

bool Triangulo::semelhante(Triangulo &ABC) {
    if (A.distancia(B) / ABC.A.distancia(ABC.B) == B.distancia(C) / ABC.B.distancia(ABC.C) && B.distancia(C) / ABC.B.distancia(ABC.C) == C.distancia(A) / ABC.C.distancia(ABC.A)) return 1;
    return 0;
}

typedef struct Retangulo {
    Ponto A, B, C, D;
    
    float perimetro();
    float area();
    bool quadrado();

} Retangulo;

float Retangulo::perimetro() {
    return A.distancia(B) + B.distancia(C) + C.distancia(D) + D.distancia(A);
}

float Retangulo::area() {
    return A.distancia(B) * A.distancia(D);
}

bool Retangulo::quadrado() {
    if (A.distancia(B) == A.distancia(D)) return 1;
    return 0;
}

typedef struct Circunferencia {
    Ponto A, B;

    float perimetro();
    float area();
    bool contemP(Ponto &P);
    bool contemABC(Triangulo &ABC);
    bool contemABCD(Retangulo &ABCD);
    bool pertenceP(Ponto &P);
    bool circunscritaABC(Triangulo &ABC);
    bool circunscritaABCD(Retangulo &ABCD);

} Circunferencia;

float Circunferencia::perimetro() {
    return 2 * PI * A.distancia(B);
}

float Circunferencia::area() {
    return PI * pow(A.distancia(B), 2);
}

bool Circunferencia::contemP(Ponto &P) {
    if (A.distancia(P) <= A.distancia(B)) return 1;
    return 0;
}

bool Circunferencia::contemABC(Triangulo &ABC) {
    float raio = A.distancia(B);
    if (ABC.A.distancia(A) <= raio && ABC.B.distancia(A) <= raio && ABC.C.distancia(A) <= raio) return 1;
    return 0;
}

bool Circunferencia::contemABCD(Retangulo &ABCD) {
    float raio = A.distancia(B);
    if (ABCD.A.distancia(A) <= raio && ABCD.B.distancia(A) <= raio && ABCD.C.distancia(A) <= raio && ABCD.D.distancia(A) <= raio) return 1;
    return 0;
}

bool Circunferencia::pertenceP(Ponto &P) {
    if (A.distancia(P) == A.distancia(B)) return 1;
    return 0;
}

bool Circunferencia::circunscritaABC(Triangulo &ABC) {
    float raio = A.distancia(B);
    if (ABC.A.distancia(A) == raio && ABC.B.distancia(A) == raio && ABC.C.distancia(A) == raio) return 1;
    return 0;
}

bool Circunferencia::circunscritaABCD(Retangulo &ABCD) {
    float raio = A.distancia(B);
    if (ABCD.A.distancia(A) == raio && ABCD.B.distancia(A) == raio && ABCD.C.distancia(A) == raio && ABCD.D.distancia(A) == raio) return 1;
    return 0;
}

int main() {
    Ponto A, B, C;
    printf("\n>>>> TRIANGULO <<<<\n\n");
    printf("Digite as coordenadas: \n");
    scanf("%f%f%f%f%f%f", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
    
    Triangulo ABC;
    ABC.A = A;
    ABC.B = B;
    ABC.C = C;

    Triangulo XYZ;
    XYZ.A.atribuir(35, 10);
    XYZ.B.atribuir(40, 5);
    XYZ.C.atribuir(45, 10);

    printf("dist(A, B) = %f\n", A.distancia(B));
    printf("perimetro(ABC) = %f\n", ABC.perimetro());
    printf("area(ABC) = %f\n", ABC.area());
    printf("equilatero(ABC) = %d\n", ABC.equilatero());

    printf("\n>>>> RETANGULO <<<<\n\n");
    Ponto D, E, F, G;
    printf("Digite as coordenadas: \n");
    scanf("%f%f%f%f%f%f%f%f", &D.x, &D.y, &E.x, &E.y, &F.x, &F.y, &G.x, &G.y);

    Retangulo ABCD;
    ABCD.A = D;
    ABCD.B = E;
    ABCD.C = F;
    ABCD.D = G;
    
    printf("perimetro(ABCD) = %f\n", ABCD.perimetro());
    printf("area(ABCD) = %f\n", ABCD.area());
    printf("quadrado(ABCD) = %d\n", ABCD.quadrado());

    printf("\n>>>> CIRCUNFERENCIA <<<<\n\n");
    Ponto H, I, P;
    printf("Digite as coordenadas: \n");
    scanf("%f%f%f%f", &H.x, &H.y, &I.x, &I.y);

    Circunferencia alpha;
    alpha.A = H;
    alpha.B = I;

    P.atribuir(0, -10);

    printf("perimetro(alpha) = %f\n", alpha.perimetro());
    printf("area(alpha) = %f\n", alpha.area());
    printf("alpha contem P=(%.2f, %.2f) = %d\n", P.x, P.y, alpha.contemP(P));
    printf("alpha contem ABC = %d\n", alpha.contemABC(ABC));
    printf("alpha contem ABCD = %d\n", alpha.contemABCD(ABCD));

    printf("P pertence a alpha = %d\n", alpha.pertenceP(P));
    printf("alpha circunscrita a ABC = %d\n", alpha.circunscritaABC(ABC));
    printf("alpha circunscrita a ABCD = %d\n", alpha.circunscritaABCD(ABCD));


}

