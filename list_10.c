#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.14159265359

typedef struct Ponto {
    float x, y;
} Ponto;

float distancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

typedef struct Triangulo {
    Ponto A, B, C;
} Triangulo;

typedef struct Retangulo {
    Ponto A, B, C, D;
} Retangulo;

typedef struct Circunferencia {
    Ponto A, B;
} Circunferencia;

float perimetro(Triangulo ABC) {
    return distancia(ABC.A, ABC.B) + distancia(ABC.B, ABC.C) + distancia(ABC.C, ABC.A);
}

float angulo(Ponto p1, Ponto p2, Ponto p3) {
    //P2P1 = (P1x - P2x, P1y - P2y);
    //P2P3 = (P3x - P2x, P3y - P2y);
    return acos(((p1.x - p2.x) * (p3.x - p2.x) + (p1.y - p2.y) * (p3.y - p2.y))/(distancia(p1, p2) * distancia(p2, p3)));
}

float area(Triangulo ABC) {
    return (distancia(ABC.A, ABC.B)*distancia(ABC.B, ABC.C)*sin(angulo(ABC.A, ABC.B, ABC.C)))/2;    
} 

bool equilatero(Triangulo ABC) {
    if (distancia(ABC.A, ABC.B) == distancia(ABC.B, ABC.C) && distancia(ABC.B, ABC.C) == distancia(ABC.C, ABC.A)) return 1;
    return 0;
}

bool semelhante(Triangulo t1, Triangulo t2) {
    if (distancia(t1.A, t1.B)/distancia(t2.A, t2.B) == distancia(t1.B, t1.C)/distancia(t2.B, t2.C) && distancia(t1.B, t1.C)/distancia(t2.B, t2.C) == distancia(t1.C, t1.A)/distancia(t2.C, t2.A)) return 1;
    return 0;
}

float Rperimetro(Retangulo ABCD) {
    return distancia(ABCD.A, ABCD.B) + distancia(ABCD.A, ABCD.C) + distancia(ABCD.B, ABCD.D) + distancia(ABCD.D, ABCD.C);
}

float Rarea(Retangulo ABCD) {
    return distancia(ABCD.A, ABCD.B) * distancia(ABCD.A, ABCD.C);
}

bool Rquadrado(Retangulo ABCD) {
    if (distancia(ABCD.A, ABCD.B) == distancia(ABCD.A, ABCD.C)) return 1;
    return 0;
}

float Cperimetro(Circunferencia alpha) {
    return 2*PI*distancia(alpha.A, alpha.B);
}

float Carea(Circunferencia alpha) {
    return PI*pow(distancia(alpha.A, alpha.B), 2);
}

bool CcontemP(Circunferencia alpha, Ponto P) {
    if (distancia(alpha.A, P) <= distancia(alpha.A, alpha.B)) return 1;
    return 0;
}

bool CcontemABC(Circunferencia alpha, Triangulo ABC) {
    float raio = distancia(alpha.A, alpha.B);
    if (distancia(alpha.A, ABC.A) <= raio && distancia(alpha.A, ABC.B) <= raio && distancia(alpha.A, ABC.C) <= raio) return 1;
    return 0;
}

bool CcontemABCD(Circunferencia alpha, Retangulo ABCD) {
    float raio = distancia(alpha.A, alpha.B);
    if (distancia(alpha.A, ABCD.A) <= raio && distancia(alpha.A, ABCD.B) <= raio && distancia(alpha.A, ABCD.C) <= raio && distancia(alpha.A, ABCD.D) <= raio) return 1;
    return 0;
}

bool PnaLinha(Circunferencia alpha, Ponto P) {
    if (distancia(alpha.A, P) == distancia(alpha.A, alpha.B)) return 1;
    return 0;
}

bool ABCcircunscrito(Circunferencia alpha, Triangulo ABC) {
    float raio = distancia(alpha.A, alpha.B);
    if (distancia(alpha.A, ABC.A) == raio && distancia(alpha.A, ABC.B) == raio && distancia(alpha.A, ABC.C) == raio) return 1;
    return 0;
}

bool ABCDcircunscrito(Circunferencia alpha, Retangulo ABCD) {
    float raio = distancia(alpha.A, alpha.B);
    if (distancia(alpha.A, ABCD.A) == raio && distancia(alpha.A, ABCD.B) == raio && distancia(alpha.A, ABCD.C) == raio && distancia(alpha.A, ABCD.D) == raio) return 1;
    return 0;
}

int main() {
    Ponto A, B, C, D;
    printf("\n>>>> TRIANGULO <<<<\n\n");
    printf("Digite as coordenadas: \n");
    scanf("%f%f%f%f%f%f", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
    
    Triangulo ABC, t;
    ABC.A = A, ABC.B = B, ABC.C = C;
    t.A.x = 0, t.A.y = 0, t.B.x = 0, t.B.y = 3, t.C.x = 4, t.C.y = 0;
    
    printf("---------------\n");
    printf("dist(A, B) = %f\n", distancia(A, B));
    printf("dist(B, C) = %f\n", distancia(B, C));
    printf("dist(C, A) = %f\n", distancia(C, A));
    printf("---------------\n");
    printf("Perimetro ABC = %f\n", perimetro(ABC));
    printf("Area ABC = %f\n", area(ABC));
    printf("---------------\n");
    printf("Angulo entre AB-BC = %.2f graus\n", angulo(B, A, C)*180/PI);
    printf("Angulo entre BC-CA = %.2f graus\n", angulo(A, C, B)*180/PI);
    printf("Angulo entre CA-AB = %.2f graus\n", angulo(C, B, A)*180/PI);
    printf("---------------\n");
    printf("ABC eh equilatero? %d\n", equilatero(ABC));
    printf("ABC eh semelhante a t? %d\n", semelhante(ABC, t));
    
    printf("\n>>>> RETANGULO <<<<\n\n");
    printf("Digite as coordenadas: \n");
    scanf("%f%f%f%f%f%f%f%f", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y, &D.x, &D.y);

    Retangulo ABCD;
    ABCD.A = A, ABCD.B = B, ABCD.C = C, ABCD.D = D;
    
    printf("Perimetro ABCD = %f\n", Rperimetro(ABCD));
    printf("Area ABCD = %f\n", Rarea(ABCD));
    printf("ABCD eh quadrado ? %d\n", Rquadrado(ABCD));
    
    printf("\n>>>> CIRCUNFERENCIA <<<<\n\n");
    Ponto E, F, P;
    printf("Digite as coordenada E, F: \n");
    scanf("%f%f%f%f", &E.x, &E.y, &F.x, &F.y);

    Circunferencia alpha;
    alpha.A = E, alpha.B = F;

    printf("O perimetro da circunferencia dada eh: %f\n", Cperimetro(alpha));
    printf("A area da circunferencia dada eh: %f\n", Carea(alpha));
    printf("Digite um ponto P\n");
    scanf("%f%f", &P.x, &P.y);
    printf("A circunferencia contem P? %d\n", CcontemP(alpha, P));
    printf("A circunferencia contem ABC? %d\n", CcontemABC(alpha, ABC));
    printf("A circunferencia contem ABCD? %d\n", CcontemABCD(alpha, ABCD));
    printf("O ponto P esta na linha definida pela circunferenica? %d\n", PnaLinha(alpha, P));
    printf("A circunferencia eh circunscrita a ABC? %d\n", ABCcircunscrito(alpha, ABC));
    printf("A circunferencia eh circunscrita a ABCD? %d\n", ABCDcircunscrito(alpha, ABCD));

    return 0;
}
