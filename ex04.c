#include <stdio.h>

int main() {
    float number1, number2, somma, divisione, moltiplicazione, differenza;
printf("inserisci il primo numero: ");
scanf("%f", &number1);
printf("inserisci il secondo numero: ");
scanf("%f", &number2);
somma = number1 + number2;
printf("la somma di %f e %f è %.2f\n", number1, number2, somma);
divisione = number1 / number2;
printf("la divisione di %f e %f è %.2f\n", number1, number2, divisione);
moltiplicazione = number1 * number2;
printf("la moltiplicazione di %f e %f è %.2f\n", number1, number2, moltiplicazione);
differenza = number1 - number2;
printf("la differenza di %f e %f è %.2f\n", number1, number2, differenza);
return 0; 


}
    