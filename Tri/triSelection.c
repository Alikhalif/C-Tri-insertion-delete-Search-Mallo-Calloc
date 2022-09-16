#include <stdio.h>
#include <stdlib.h>

int triAbulle(int *arrN){
    int i,j, c;
    for(i=1; i<6; i++){
        for(j=0; j<6; j++){
            if(arrN[j + 1] < arrN[j] ){
                c = arrN[j];
                arrN[j] = arrN[j+1];
                arrN[j+1] = c;
            }
        }
    }
}

int triSelection(int *arrN){
    int i,j,c;
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(arrN[j+1] > arrN[j]){
                c = arrN[j];
                arrN[j] = arrN[j+1];
                arrN[j+1] = c;
            }
        }
    }
}

int main(){
    int arrN[6]={8,6,88,34,2,9};
    int i,j, c;

    triAbulle(arrN);
    printf("a bulle ");
    for(i=0; i<=6; i++){
        printf("%d ", arrN[i]);
    }

    triSelection(arrN);
    
    printf("\npar selection ");
    for(i=0; i<=6; i++){
        printf("\n%d ", arrN[i]);
    }

    return 0;
}


