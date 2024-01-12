#include <stdio.h>
#include <math.h>


int main(){
    float latoA, latoB, latoC, somma, area, semiperimetro;
    printf("inserisci il valore del primo lato: ");
    scanf("%f", &latoA);
    printf("inserisci il valor del secondo lato: ");
    scanf("%f", &latoB);
    printf("inserisci il valore del terzo lato: ");
    scanf("%f", &latoC);
    somma = latoA + latoB + latoC;
    printf("Il perimetro del triangolo è %.2f\n", somma);
    semiperimetro = somma /2 ;
    area = sqrt(semiperimetro * (semiperimetro - latoA) * (semiperimetro - latoB) * (semiperimetro - latoC));
   printf(" L'area del triangolo è %.2f\n", area);
    
    return 0;

    










}