#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char titre[50][150],auteur[50][150];
    int quantite[50],count=0;
    float prix[50] ;
    char Ntitre[100];
    int choix=0;
    do{
        printf("----------Syst�me de Gestion de Stock dans une Librairie----------- \n 1: Ajouter un livre \n 2: Afficher tous les livres \n 3: Rechercher un livre \n 4: Mettre � jour la quantit� d'un livre \n 5: Supprimer un livre \n 6: Afficher le nombre total de livres en stock \n ");


        printf("entrer votre choix :\t");
        scanf("%d",&choix);

        switch(choix){
        case 1:
                    printf("entre le Titre du Livre :");
                    scanf("%s",titre[count]);
                    printf("entre le auteur du Livre :");
                    scanf("%s",auteur[count]);
                    printf("entre le quantit� du Livre :");
                    scanf("%d",&quantite);
                    printf("entre le prix du Livre:");
                    scanf("%f",&prix);

                    printf("ADD books Successful\n");
                    count++;

                break;
        case 2:
            if (count==0){
                printf("aucun livre en stock\n");
            }else{
                for(int i=0; i<count ;i++){
                    printf(" | titre %s\n | Auteur %s\n | Quentite %d\n | Prix %f\n",titre[i],auteur[i],quantite[i],prix[i]);
                    


                };
            }
                break;
        case 3:
            for(int j=0 ; j<count ; j++){
                printf("pleas saisir un titre :");
                scanf("%s",Ntitre);
                if (strcmp(titre[j], Ntitre) ==0) {
                    printf("Titre : %s\n", titre[j]);
                    printf("Auteur : %s\n", auteur[j]);
                    printf("Quantité : %d\n", quantite[j]);
                    printf("Prix : %.2f\n", prix[j]);
                    // break;
                }

            }
            break;
        case 4:
            printf("case 4");
            break;
        case 5:
            printf("case 5");
            break;

        case 6:
            printf("case 6");
            break;
            
        default:
        printf("syntaxe erreur !!\n");







    }

}while(choix!=0);


}


