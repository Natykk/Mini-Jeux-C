#include<stdio.h>
#include<stdlib.h>
int main()
{
      int somme;
      int temp = 0;
      int nb_eleve = 1;
      float moyenne;
      int class[nb_eleve];
      int  i;
      somme=0;
      printf("Combien d'élève ? \n");
      scanf("%d",&nb_eleve);
      for (i=0 ; i< nb_eleve ; i++)
      {
        printf("La Note de l'élève %d\n",i);
        scanf("%d", &temp);
        somme += temp;
        printf("Tu a mis %d\n",temp);
      }
      printf("La Somme de toutes les notes -> %d\n",somme);
      printf("Le Nombre d'élève -> %d\n",nb_eleve);
      moyenne = (float)somme / (float)nb_eleve;
      printf("La moyenne de classe --> %f\n",moyenne);
}