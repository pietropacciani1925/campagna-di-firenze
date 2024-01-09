#include <stdio.h>

int main(){
printf("inserisci un numero fino a 10: ");
int number;
scanf("%d", &number);
if (number >= 0 && number <= 10){
    if (number % 2 == 0){ 
       printf("il numero %d è pari.\n", number);  
  } else {
    printf("il numero %d è dispari.\n", number);
  }
    
    

} else {
   printf("inserisci un numero valido nell'intervallo da 0 a 10.\n");
}

return 0;