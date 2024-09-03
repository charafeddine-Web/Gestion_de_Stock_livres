#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char titre[50][150],auteur[50][150];
    int quantite,count=0;
    float prix ;
    char Ntitre[90][100];
    // char T[200][200] ;
    int choix=0;
    do{
        printf("----------Système de Gestion de Stock dans une Librairie----------- \n 1: Ajouter un livre \n 2: Afficher tous les livres \n 3: Rechercher un livre \n 4: Mettre à jour la quantité d'un livre \n 5: Supprimer un livre \n 6: Afficher le nombre total de livres en stock \n ");


        printf("entrer votre choix :\t");
        scanf("%d",&choix);

        switch(choix){
        case 1:
                    printf("entre le Titre du Livre :");
                    scanf("%s",titre[count]);
                    printf("entre le auteur du Livre :");
                    scanf("%s",auteur[count]);
                    printf("entre le quantité du Livre :");
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
                    printf("titre %s\n",titre[i]);
                    printf("titre %s\n",auteur[i]);
                    printf("Quentite %d\n",quantite);
                    printf("Prix %.2f\n",prix);


                };
            }
                break;
        case 3:
            for(int j=0 ; j<count ; j++){
                printf("pleas saisir un titre");
                scanf("%s",&Ntitre);
                if(strcmp(titre[count]),Ntitre==0){
                        printf("titre :%s",titre);

                };

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







    }

}while(choix!=0);


}


