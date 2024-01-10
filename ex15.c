#include <stdio.h>
#include <math.h>
void calcolaRadici(float a, float b, float c);
int main() {
    float a, b, c;
    printf("Inserisci il coefficiente a: ");
    scanf("%f", &a);
    printf("Inserisci il coefficiente b: ");
    scanf("%f", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%f", &c);
    calcolaRadici(a, b, c);
    return 0;
}
void calcolaRadici(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Le radici dell'equazione sono reali e distinte:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("L'equazione ha due radici reali e coincidenti:\n");
        printf("x1 = x2 = %.2f\n", x);
    } else {
        float parteReale = -b / (2 * a);
        float parteImmaginaria = sqrt(fabs(delta)) / (2 * a);
        printf("Le radici dell'equazione sono complesse:\n");
        printf("x1 = %.2f + %.2fi\n", parteReale, parteImmaginaria);
        printf("x2 = %.2f - %.2fi\n", parteReale, parteImmaginaria);
    }
}