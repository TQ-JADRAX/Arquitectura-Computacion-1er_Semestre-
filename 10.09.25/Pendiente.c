#include <stdio.h>

int main(){
float R,P, cantidad,total;
int op;
op = 0;
R = 20;
P = 20;
printf("Refrescos ---- $ 20 /1");
printf("Papas ---$ 20 /2");
scanf("%d",&op);
if (op ==1){
    printf("#Refrescos");
    scanf("%f",&cantidad);
    total = cantidad * R;
    printf("Total:%f",total);
}

if (op ==2){
    printf("#Papas");
    scanf("%f",&cantidad);
    total = cantidad * P;
    printf("Total:%f",total);
}
return(0);
}