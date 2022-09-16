#include <stdio.h>
#include <stdlib.h>

int delete(int *Arr, int n, int pos){
    int i;

    for(i=pos;i<=n; i++){
        Arr[i-1] = Arr[i];
    }
    Arr--; 

    for(i=1; i<n; i++){
        printf("l'element : %d\n",Arr[i]);
    }
}

int main(){
    int Arr[100];
    int i,pos,nbrT;

    printf("donner nombre des l'element : ");
    scanf("%d",&nbrT);

    for(i=0; i<nbrT; i++){
        printf("Entre l'element : ");
        scanf("%d",&Arr[i]);
    }
    
    while (nbrT != 0)
    {
        printf("Entrez la position de l'élément à supprimer : ");
        scanf("%d",&pos);   

        delete(Arr,nbrT,pos);
        nbrT--;

        if(nbrT == 0){
            printf("delete all !!");
        }
    }
    
       
    return 0;
}