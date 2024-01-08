#include <stdio.h>

int main() {
    float number1, number2, somma;
printf("inserisci il primo numero: ");
scanf("%f", &number1);
printf("inserisci il secondo numero: ");
scanf("%f", &number2);
somma = number1 + number2;
printf("la somma di %f e %f è %.2f\n", number1, number2, somma);
return 0;


}
    