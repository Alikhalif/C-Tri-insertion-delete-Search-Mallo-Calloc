#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char CIN;
    char Nom; 
    float Montant;
}compte;

compte info[1000];
static int i=0, indexTable=0;


void AjouterCompte(){
    printf("creer un compte : \n");
    printf("Entre CIN : ");
    scanf("%s",&info[i].CIN);
    printf("Entre Nom : ");
    scanf("%s",&info[i].Nom);
    printf("Entre Montant : ");
    scanf("%f",&info[i].Montant);
    indexTable++;
}

void AjouterPluseurCompt(){
    int nbrC=0,i;
    printf("creer Plusseur compte : \n");
    printf("donner nomber de compte : ");
    scanf("%d",&nbrC);
    for(i=0; i<nbrC; i++){
        printf("Entre CIN : ");
        scanf("%s",&info[i].CIN);
        printf("Entre Nom : ");
        scanf("%s",&info[i].Nom);
        printf("Entre Montant : ");
        scanf("%f",&info[i].Montant);
        indexTable++;
    }
    for(i=0; i<indexTable; i++){
        printf("Entre CIN : %s\n",info[i].CIN);
        printf("Entre Nom : %s\n",info[i].Nom);
        printf("Entre Montant : %f\n",info[i].Montant);
    }
}

void Afficher(){
    for(i=0; i<indexTable; i++){
        printf("Entre CIN : %s\n",info[i].CIN);
        printf("Entre Nom : %s\n",info[i].Nom);
        printf("Entre Montant : %f\n",info[i].Montant);
    }
}


int main(){

    //AjouterCompte();
    AjouterPluseurCompt();
    Afficher();

    return 0;
}