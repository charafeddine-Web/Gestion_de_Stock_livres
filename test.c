#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
//1
        /*char name[50];
        printf("pleas give me your full Name :");
        scanf("%[^\n]s",name);
        printf("Full Name :%s",name);*/

//2

        /*
        char chaine[50];
        int t=0;
        puts("please entrer une chaine :");
        gets(chaine);
        do{
           t++;
        }while(chaine[t]!='\0');

        while(chaine[t]!='\0'){
        t++;
        }
        printf("longueur de chaine est :%d",t);
        */
//3
        /*
        char name[50];
        char result[50];
        char post[]=" Developpeur";
        puts("pleas entre votre Nom :");
        gets(name);
        strcat(name,post);
        printf("le nom et post est :\t%s",name);
        */

//10


char chaine[]="charafrafdhdjejraflmjjjraf";
char souschaine[]="raf";
int lenchaine=strlen(chaine);
int lensouschaine = strlen(souschaine);
int k=0;
int t = 0;
for (int i=0;i < lenchaine;i++){
    if(chaine[i]==souschaine[0]){
        for(int j=i;j<strlen(souschaine);j++){
                k++;
            if(k == lensouschaine){
                t++;
            }
        }
    }
}
printf("nombres des repetitions:%d",t);

















    return 0;
}
