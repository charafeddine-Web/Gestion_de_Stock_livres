#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char titre[50][150], auteur[50][150];
    int quantite[100], count = 0;
    float prix[100];
    char Ntitre[50][150];
    int Nquantite;
    char tstitre[100];

    // char T[200][200] ;
    int choix = 0;
    int sum = 0;
    do
    {
        printf("----------Systame de Gestion de Stock dans une Librairie----------- \n \
               1: Ajouter un livre \n \
               2: Afficher tous les livres \n \
               3: Rechercher un livre \n \
               4: Mettre a jour la quantit dun livre \n \
               5: Supprimer un livre \n \
               6: Afficher le nombre total de livres en stock \n ");

        printf("entrer votre choix :\t");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            printf("entre le Titre du Livre :");
            scanf("%s", tstitre);
            for (int i = 0; i < count; i++){
                if(strcmp(titre[i], tstitre) == 0){
                    printf("ce livre existe deja !!\n  entre eutre Livre ");
                    scanf("%s",tstitre);
                    break;
                }
            }
            strcpy(titre[count],tstitre);
            printf("entre le auteur du Livre :");
            scanf("%s", auteur[count]);
            printf("entre le quantite du Livre :");
            scanf("%d", &quantite[count]);
            printf("entre le prix du Livre:");
            scanf("%f", &prix[count]);

            printf("ADD books Successful\n");
            count++;

            break;
        case 2:
            if (count == 0)
            {
                printf("aucun livre en stock\n");
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    printf("titre :%s ", titre[i]);
                    printf("Auteur :%s  ", auteur[i]);
                    printf("Quentite :%d ", quantite[i]);
                    printf("Prix %.2f\n", prix[i]);
                }
            }
            break;
        case 3:
             printf("pleas saisir un titre\t");
                scanf("%s", &Ntitre);
            for (int j = 0; j < count; j++)
            {

                if (strcmp(titre[j],Ntitre) == 0)
                {
                    printf("titre :%s\n", titre[j]);
                    printf("Auteur :%s\n", auteur[j]);
                    printf("Quentite :%d\n", quantite[j]);
                    printf("Prix :%.2f\n", prix[j]);
                    break;
                }
            }
            break;
        case 4:
            printf("pleas saisir un titre :\t");
            scanf("%s", Ntitre);
            for (int j = 0; j < count; j++)
            {
                if (strcmp(titre[j], Ntitre) == 0)
                {
                    printf("pleas saisir un autre quentite de Livre :");
                    scanf("%d", &Nquantite);
                    quantite[j] = Nquantite;

                }
            }
            break;
        case 5:
            printf("pleas saisir un titre:\t");
            scanf("%s", &Ntitre);
            for (int j = 0; j < count; j++)
            {
                if (strcmp(titre[j], Ntitre) == 0)
                {
                    for (int k = j; k < count; k++)
                    {
                        strcpy(titre[k], titre[k + 1]);
                        strcpy(auteur[k], auteur[k + 1]);
                        quantite[k] = quantite[k + 1];
                        prix[k] = prix[k + 1];
                    }
                    count--;
                }
            }
            printf("livre supprime avec sucess\n");

            break;

        case 6:
            for (int s = 0; s < count; s++)
            {
                sum = sum + quantite[s];
            }
            printf("le number total des livers est :%d\t\n", sum);
            break;
        }


    } while (choix != 0);
}
