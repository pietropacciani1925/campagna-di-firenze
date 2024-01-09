#include <stdio.h>

int main() {
   
   int anni;
   printf ("quanti anni hai?\n");
   scanf("%d", &anni);
   printf ("a quanti anni si può prendere la patente dove vivi?\n");

   int anniPatente;
    scanf("%d", &anniPatente);
    if(anni>=anniPatente)
    {
       printf ("puoi prenderela patente\n");
    }
    else
    {
       printf ("non puoi prendere la patente\n");
    }

    return 0;
}