#include <stdio.h>
#include <math.h>

void calcularDistancia(float* punto1, float* punto2, float* distancia) {
    float dx = punto2[0] - punto1[0];
    float dy = punto2[1] - punto1[1];
    float dz = punto2[2] - punto1[2];
    *distancia = sqrt(dx*dx + dy*dy + dz*dz);
}

void calcularPerimetro(float* punto1, float* punto2, float* punto3, float* punto4, float* perimetro) {
    calcularDistancia(punto1, punto2, perimetro);
    float distancia_temp;
    calcularDistancia(punto2, punto3, &distancia_temp);
    *perimetro += distancia_temp;
    calcularDistancia(punto3, punto4, &distancia_temp);
    *perimetro += distancia_temp;
    calcularDistancia(punto4, punto1, &distancia_temp);
    *perimetro += distancia_temp;
}

void calcularArea(float* punto1, float* punto2, float* punto3, float* punto4, float* area) {
    float v321 = punto3[0]*punto2[1]*punto1[2];
    float v231 = punto2[0]*punto3[1]*punto1[2];
    float v312 = punto3[0]*punto1[1]*punto2[2];
    float v132 = punto1[0]*punto3[1]*punto2[2];
    float v213 = punto2[0]*punto1[1]*punto3[2];
    float v123 = punto1[0]*punto2[1]*punto3[2];
    *area = 0.5 * (v321 + v231 + v312 - v132 - v213 + v123);
}

void calcularVolumen(float* punto1, float* punto2, float* punto3, float* punto4, float* volumen) {
    float v321 = punto3[0]*punto2[1]*punto1[2];
    float v231 = punto2[0]*punto3[1]*punto1[2];
    float v312 = punto3[0]*punto1[1]*punto2[2];
    float v132 = punto1[0]*punto3[1]*punto2[2];
    float v213 = punto2[0]*punto1[1]*punto3[2];
    float v123 = punto1[0]*punto2[1]*punto3[2];
    *volumen = (1.0/6.0) * (-v321 + v231 + v312 - v132 - v213 + v123);
}

int main() {
    float p1[] = {0, 0, 3};
    float p2[] = {3, 0, 0};
    float p3[] = {0, 0, 0};
    float p4[] = {1, 7, 1};

    float distancia;
    calcularDistancia(p1, p2, &distancia);
    printf("Distancia entre P1 y P2: %.2f\n", distancia);

    float perimetro;
    calcularPerimetro(p1, p2, p3, p4, &perimetro);
    printf("Perímetro del cuadrilátero: %.2f\n", perimetro);

    float area;
    calcularArea(p1, p2, p3, p4, &area);
    printf("Área del cuadrilátero: %.2f\n", area);

    float volumen;
    calcularVolumen(p1, p2, p3, p4, &volumen);
    printf("Volumen del cuadrilátero: %.2f\n", volumen);

    return 0;
}
