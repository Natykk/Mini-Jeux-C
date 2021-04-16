#include <stdio.h>
#include <stdlib.h>

int main(void){
  srand(time(0));
  int random = rand();
  int reponse;
  int compteur = 0;
  printf("Devine le nombre Random\n");
  while(reponse != random) {
    scanf("%d",&reponse);
    compteur+=1;
    if(reponse==random){
        break;
    }
    if(reponse<=random){
      printf("Trop Petit !\n");
    }
    if(reponse>=random){
      printf("Trop Grand !\n");
    }
  }
  printf("Réussi au bout de %d tentative\n", compteur);
}