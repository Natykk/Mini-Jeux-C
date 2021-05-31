#include<stdio.h>
#include<stdlib.h>
int main()
{ // 0 Pierre - 1 Feuille - Ciseaux BOT/r
  // 1 Pierre - 2 Feuille - Ciseaux JOUEUR/choix
  int choix;
  srand(time(NULL));
  int r = rand() % 4;
  printf("%d",r);
  printf("Bienvenue au Pierre-Feuille-Ciseaux\n");
  printf("Qu'allez vous jouer ? \n(1)Pierre\n(2)Feuille\n(3)Ciseaux\n");
  scanf("%d",&choix);
  if(choix == 1 && r == 0){
    printf("Egalité ! PierreVsPierre\n");
    replay();
  }
  else if(choix == 2 && r == 0){
    printf("Victoire :) FeuilleVsPierre\n");
    replay();
  }
  else if(choix == 3 && r == 0  ){
    printf("Défaite :( CiseauxVsPierre\n");
    replay();
  }
  else if(choix == 1 && r == 1){
    printf("Défaite :(  PierreVsFeuille\n");
    replay();
  }
  else if(choix == 2 && r == 1){
    printf("Egalité ! FeuilleVsFeuille\n");
    replay();
  }
  else if(choix == 3 && r == 1){
    printf("Victoire :) CiseauxVsFeuille \n");
    replay();
  }
  else if(choix == 1 && r == 2){
    printf("Victoire :) PierreVsCiseaux\n");
    replay();
  }
  else if(choix == 2 && r == 2){
    printf("Défaite :( FeuilleVsCiseaux\n");
    replay();
  }
  else if(choix == 3 && r == 2){
    printf("Egalité ! CiseauxVsCiseaux\n");
    replay();
  }
  else{
    printf("%d n'est pas une reponse valide\n",choix);
  }
}
int replay(){
  char reponse;
  printf("Vouler vous rejouer ? Y/N\n");
  scanf("%s",&reponse);
  if(reponse == 'Y'){
    main();
  }
  else{
    return 0;
  }
}