#include <stdio.h>

    int main() {
        int numerounità;
        int prezzo = 5;
        int somma;
        while(1) {
        printf("inserire il numero di unità desiderate: ");
        scanf("%d", &numerounità); 
        if(numerounità < 30 && numerounità > 0 ) {

        somma=prezzo*numerounità;
        printf("%d\n" , somma);

        }
        else if(numerounità > 30 && numerounità < 50) {

        somma=prezzo*numerounità*0.90;
        printf("%d\n" , somma);

        }
        else if(numerounità > 50) {
        
        somma=prezzo*numerounità*0.85;
        printf("%d\n" , somma);

        }
        else if(numerounità <= 0) {

        break;
        }
        }
 return  0;












}