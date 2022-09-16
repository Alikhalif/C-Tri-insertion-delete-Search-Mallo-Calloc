#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,n;
    float sum=0;

    printf("donner la taille du tableau : ");
    scanf("%d",&n);

    float *T = malloc(n * sizeof(float));

    for(i=0; i<n; i++){
        printf("entre l'element %d : ",i+1);
        scanf("%f",(T+i));
    }

    for(i=0; i<n; i++){
        sum = sum + *(T+i);
    }

    printf("%f",sum);
    return 0;
}