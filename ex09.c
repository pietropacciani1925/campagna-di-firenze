#include <stdio.h>

int main() {

    int latoA,
    int latoB,
    int latoC,
    printf("inserisci i valori dei tre lati");
    scanf("%d %d %d", &latoA, &latoB, &latoc);
    
    if(latoA=latoB=latoC) {
        printf("il triangolo è equilatero"\n);
    }      
    else if ((latoA == latoB || latoB == latoC || latoA == latoC) && latoA != latoC || latoA != latoB || latoB != latoC)     
    {
        printf("il triangolo è isoscele");
    }
    else
    {
        printf("il triangolo è equilatero");
    }
    
    return 0 

}