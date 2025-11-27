#include <stdio.h>

int main(){
    int M,O;
    M = 0;
    O = 0;
    do
    {
        printf ("Menu \n 1. Suma \n 2.Resta");
        scanf("%d",&O);
        if (O == 1){
            printf("Suma \n");
        }
        if (O == 2){
            printf("Resta");   
        }
        printf("\n Quieres repetir? Si/no 1/2");
        scanf("%d",&M);
    } while (M == 1);
    printf("Saliendo del Menu");   
}