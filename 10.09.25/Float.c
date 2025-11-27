#include <stdio.h>

int main(){
    float R,P, cantidad,total;
    int op,C;
    op = 0;
    R = 20;
    P = 20;
    C = 0;
    do
    {
        /* code */

        printf("Refrescos ---- $ 20 /1\n");
        printf("Papas ---$ 20 /2\n");
        scanf("%d",&op);
        if (op ==1){
            printf("#Refrescos\n");
            scanf("%f",&cantidad);
            total = cantidad * R;
            printf("Total:%f",total);
            printf("Volver a comprar? 1/2 si/no\n");
            scanf("%d",&C);
        }

        if (op ==2){
            printf("#Papas\n");
            scanf("%f",&cantidad);
            total = cantidad * P;
            printf("Total:%f \n",total);
            printf("Volver a comprar? 1/2 si/no\n");
            scanf("%d",&C);
        }
    } while (C == 1);
        printf("Gracias");
        return(0);
}