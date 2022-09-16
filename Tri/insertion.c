#include <stdio.h>
#include <stdlib.h>

int insert(int *Arr, int n, int pos,int value){
    int i,j;
    
    for(i=6; i>=3; i--){
        Arr[i] = Arr[i-1];
    }
    
    Arr[pos]=value;
    Arr++;

    for(i=0; i<=n; i++){
        printf("l'element %d \n",Arr[i]);
    }
}

int main(){
    int Arr[255];
    int i,j,pos,nbrT,value;

    printf("donner nombre de l'elelment : ");
    scanf("%d",&nbrT);

    for(i=1; i<=nbrT; i++){
        printf("entre l'element %d ",i+1);
        scanf("%d", &Arr[i]);
    }

    printf("Entre la valeur d'insertion: ");
    scanf("%d",&value);

    printf("Entre la position d'insertion: ");
    scanf("%d",&pos);

    insert(Arr,nbrT,pos,value);

}