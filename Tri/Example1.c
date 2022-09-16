#include <stdio.h>
#include <stdlib.h>

int Recherche(int *arr , int n){
    int R,i,ch=0;
    printf("donner l'lement recherche : ");
    scanf("%d",&R);

    for(i=0; i<n; i++){
        if(arr[i] == R){
            ch = 1;
            return i;
        }
    }
    if(ch == 0){
        printf("errur");
        return -1;
    }
}

void insert(int *arr, int n, int Nadd){
    int i;
    int pos = Recherche(arr , n);

    for(i=n; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos]=Nadd;
    arr++;

}
i
int main(){
    int i;
    int size, Nadd;
    printf("donner nomber l'element de tableau : ");
    scanf("%d",&size);

    int *T = malloc(size * sizeof(int));

    for(i=0; i<size; i++){
        printf("donner l'lement ");
        scanf("%d",&T[i]);
    }

    printf("donner l'lement insere : ");
    scanf("%d",&Nadd);

    insert(T, size, Nadd);
    //Recherche(T, size);





    for(i=0; i<size; i++){
        printf("l'lement %d",T[i]);
    }
}