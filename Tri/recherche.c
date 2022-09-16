#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,N,r;
    int T[100];

    printf("donner nomber l'element de tableau : ");
    scanf("%d",&N);

    printf("entre l'element du tableau ");

    for(i=0; i<N; i++){
        printf("entre l'element %d : ",i+1);
        scanf("%d",&T[i]);
    }

    printf("donner l'element qui recherche : ");
    scanf("%d",&r);

    for(i=0; i<N; i++){
        if(r == T[i]){
            printf("l'element recherche dans la posision %d  =  %d",i+1, T[i]);
            break;
        }
    }

    return 0;
}