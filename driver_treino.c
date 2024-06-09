#include <stdio.h>
#include <math.h>

// Definição do tipo de função que o ponteiro apontará

float calculaRaizesQuadradas(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    float raiz1 = (-b + sqrt(delta)) / (2 * a);
    float raiz2 = (-b - sqrt(delta)) / (2 * a);
    printf("Raiz 1: %.2f\n", raiz1);
    printf("Raiz 2: %.2f\n", raiz2);
    return delta;
}

float calculaRaizesCubica(float a, float b, float c, float d) {
    float delta = b * b - 3 * a * c;
    float delta1 = 2 * b * b * b - 9 * a * b * c + 27 * a * a * d;
    float raiz1 = (-b + cbrt(delta1)) / (3 * a);
    float raiz2 = (-b + cbrt(delta1) * cos(2 * 3.14 / 3)) / (3 * a);
    float raiz3 = (-b + cbrt(delta1) * cos(4 * 3.14 / 3)) / (3 * a);
    printf("Raiz 1: %.2f\n", raiz1);
    printf("Raiz 2: %.2f\n", raiz2);
    printf("Raiz 3: %.2f\n", raiz3);#include <stdio.h>
#include <math.h>

// Definição do tipo de função que o ponteiro apontará

float calculaRaizesQuadradas(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    float raiz1 = (-b + sqrt(delta)) / (2 * a);
    float raiz2 = (-b - sqrt(delta)) / (2 * a);
    printf("Raiz 1: %.2f\n", raiz1);
    printf("Raiz 2: %.2f\n", raiz2);
    return delta;
}

float calculaRaizesCubica(float a, float b, float c, float d) {
    float delta = b * b - 3 * a * c;
    float delta1 = 2 * b * b * b - 9 * a * b * c + 27 * a * a * d;
    float raiz1 = (-b + cbrt(delta1)) / (3 * a);
    float raiz2 = (-b + cbrt(delta1) * cos(2 * 3.14 / 3)) / (3 * a);
    float raiz3 = (-b + cbrt(delta1) * cos(4 * 3.14 / 3)) / (3 * a);
    printf("Raiz 1: %.2f\n", raiz1);
    printf("Raiz 2: %.2f\n", raiz2);
    printf("Raiz 3: %.2f\n", raiz3);
    return delta;
}

int main() {
    int escolha;
    float a, b, c, d;
    float (*calculaQuadradas)(float, float, float);
    float (*calculaCubica)(float, float, float, float);
    printf("Escolha a função que você deseja (quadrada - 1, cúbica - 3): ");
    scanf("%d", &escolha);
    if (escolha == 1) {
        printf("Digite os valores de a, b e c: ");
        scanf("%f %f %f", &a, &b, &c);
        calculaQuadradas = calculaRaizesQuadradas;
        float resultado = (*calculaQuadradas)(a, b, c);
        printf("Delta: %.2f\n", resultado);
    } else if (escolha == 3) {
        printf("Digite os valores de a, b, c e d: ");
        scanf("%f %f %f %f", &a, &b, &c, &d);
        calculaCubica = calculaRaizesCubica;
        float resultado = (*calculaCubica)(a, b, c, d);
        printf("Delta: %.2f\n", resultado);
    } else {
        printf("Escolha inválida!\n");
    }
    return 0;
}

    return delta;
}

int main() {
    int escolha;
    float a, b, c, d;
    float (*calculaQuadradas)(float, float, float);
    float (*calculaCubica)(float, float, float, float);
    printf("Escolha a função que você deseja (quadrada - 1, cúbica - 3): ");
    scanf("%d", &escolha);
    if (escolha == 1) {
        printf("Digite os valores de a, b e c: ");
        scanf("%f %f %f", &a, &b, &c);
        calculaQuadradas = calculaRaizesQuadradas;
        float resultado = (*calculaQuadradas)(a, b, c);
        printf("Delta: %.2f\n", resultado);
    } else if (escolha == 3) {
        printf("Digite os valores de a, b, c e d: ");
        scanf("%f %f %f %f", &a, &b, &c, &d);
        calculaCubica = calculaRaizesCubica;
        float resultado = (*calculaCubica)(a, b, c, d);
        printf("Delta: %.2f\n", resultado);
    } else {
        printf("Escolha inválida!\n");
    }
    return 0;
}
