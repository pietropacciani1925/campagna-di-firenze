#include <stdio.h>
int main() {
int numero1, numero2;
printf ("inserisci il primo numero:");
scanf("%d" , &numero1);
printf("inserisci il secondo numero: ");
scanf("%d" , &numero2);
if(numero2 != 0 && numero1 % numero2 == 0) {
printf("%d è multiplo di %d\n",numero1, numero2);
} else {
printf("%d non è multiplo di %d\n", numero1, numero2);
}

return 0;



}