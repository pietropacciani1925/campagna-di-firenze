#include <stdio.h> 
int main() {
   int numerozona;
   char *via1[] = {" Via Massa 4"};
   char *via2[] = {" Via della Condotta 7"};
   char *via3[] = {" Via dei Pescioni 23"};
   char *via4[] = {" Via Lorenzo il Magnifico 45"};
   char *via5[] = {"Via del Baluardo 25"};
   char *via6[] = {"Via della Camorra 2"};
   char *via7[] = {" Via San Carlo 69"};
   char *via8[] = {" Via Lorenzo Maitani 99"};
   char *via9[] = {" Via Valdarno 13"};
   char *via10[] = {"Viale degli Astronauti 41"};
printf("\n\nCiao benvenuto in FlashParking!!!\n Grazie al GPS rileviamo che sei a Firenze \n Per trovare un parcheggio scrivi il numero della zona in cui lo desideri:\n 1 Centro Storico\n 2 Campo di Marte \n 3 Gavinana-Galluzzo \n 4 Isolotto-Legnaia \n 5 Rifredi \n INSERISCI IL NUMERO QUI:\n");
scanf("%d",&numerozona);
printf("La zona inserita è: %d\n", numerozona);
    if (numerozona < 1 || numerozona > 5) {
        printf("La zona inserita non esiste\n");
 } else {
        printf("I parcheggi che abbiamo trovato sono elencati qui sotto:\n", numerozona);
        
        if (numerozona == 1) {
            printf("1. %s\n", via1[0]);
            printf("2. %s\n", via2[0]);
        } else if (numerozona == 2) {
            printf("1. %s\n", via3[0]);
            printf("2. %s\n", via4[0]);
        } else if (numerozona == 3) {
            printf("1. %s\n", via5[0]);
            printf("2. %s\n", via6[0]);
        } else if (numerozona == 4) {
            printf("1. %s\n", via7[0]);
            printf("2. %s\n", via8[0]);
        } else if (numerozona == 5) {
            printf("1. %s\n", via9[0]);
            printf("2. %s\n", via10[0]);
        }
    }
printf("Speriamo che il servizio sia stato di tuo gradimento! \n Buona giornata dal team di FlashParking :-)");
return 0;
}
    