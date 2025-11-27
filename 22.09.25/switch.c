#include <stdio.h>

int main(){
   
int M,O, V1,V2,R;
    M = 0;
    O = 0;
    V1 =0;
    V2 = 0;
    R = 0;
    do
    {
        printf ("Menu \n 1. Suma \n 2.Resta \n 3.Multiplicacion \n 4.division");
        scanf("%d",&O);
        printf("Ingrese dos valores \n");
        printf("valor 1:");
        scanf("%d",&V1);
        printf("valor 2:");
        scanf("%d",&V2);
        switch (O)
        {
        case 1:
            printf("suma");
            R = V1+V2;
            printf("Resultado: %d",R);
            printf("\n Quieres repetir? Si/no 1/2");
            scanf("%d",&M);
            break;
        case 2:
            printf("resta");
            R = V1-V2;
            printf("Resultado: %d",R);
            printf("\n Quieres repetir? Si/no 1/2");
            scanf("%d",&M);
            break;
        case 3:
            printf("Multiplicacion");
            R = V1*V2;
            printf("Resultado: %d",R);
            printf("\n Quieres repetir? Si/no 1/2");
            scanf("%d",&M);
            break;
        case 4:
            printf("Division");
            R = V1/V2;
            printf("Resultado: %d",R);
            printf("\n Quieres repetir? Si/no 1/2");
            scanf("%d",&M);
            break;

    }
    } while (M == 1);
    printf("Saliendo del Menu");   
}