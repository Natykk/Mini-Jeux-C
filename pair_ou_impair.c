#include <stdio.h>
int main(){
    int nombre;
    printf("Entre un nombre s'il-te-plait : \n");
    if(scanf("%d", &nombre) %2 == 0){
        printf("Chiffre Pair ! \n");
    }
    else{
      printf("Chiffre Impair !\n");
    }
}