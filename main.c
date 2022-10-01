#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main(int argc, char *argv[])
{

  int choix = 0;
  int nombre=0;

     printf("____________________Menu FAQ______________________ \n \n Quelque question et reponse a votre disposition. Veillez choisir une lettre correspondant a votre question \n\n " );

        printf("1 : C'est quoi la programmation C en informatique  ?\n\n ");
        printf("2 : Quel est le but du langage C?\n\n ");
        printf("3 :Quelles sont les instructions et expressions en langage C  ?\n\n ");
        printf("4 : Pourquoi on utilise les boucles ?\n\n ");
         printf("5 : Quand on utilise la boucle for ?\n\n ");


 while ( nombre==0)
{
         printf("Votre choix ? \n\n");
         scanf("%d", &choix);
    switch (choix)
    {
        case 1:
            printf("Le langage C est un langage de programmation qui s'ecrit dans un fichier source. \n Ensuite ce fichier doit etre traduit a l'aide d'un compilateur en langage machine. \nOn parle alors de langage compile qui s'oppose aux langages interpretes, comme Python par exemple.\n\n");
            break;
        case 2:
            printf("Le langage C a ete mis au point par D. Ritchie et B.W.Kernighan au debut des annees 70. \nLeur but etait de permettre de developper un langage qui permettrait d'obtenir un systeme d'exploitation de type UNIX portable.\n");
            break;
        case 3:
            printf("Le langage C met trois instructions de boucles a votre disposition : l'instruction for , l'instruction while et l'instruction do while .\n");
            break;
        case 4:
            printf("Une boucle permet de repeter une instruction ( ou une liste d'instructions ) plusieurs fois.\n Les boucles pour permettent de repeter une instruction un nombre donne de fois. \nElle se caracterisent par le fait que l'on connait a l'avance le nombre d'iterations que l'on va devoir effectuer.\n");
            break;
        case 5:
            printf(" la boucle for est une structure de controle de programmation qui permet de repeter l'execution d'une sequence d'instructions. \n Selon les langages de programmation, differents mots-cles sont utilises pour signaler cette structure de controle : for pour les descendants d'Algol do pour FORTRAN PL/I etc.\n\n ");
            break;
        default:
            printf("le numero de la question n'existe pas\n\n");


}
}
    return ;

}
