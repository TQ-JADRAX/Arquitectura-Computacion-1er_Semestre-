#include <stdio.h>

int main(){
    int a,b,c,op,A,L,O2;
    float pi;
    L = 3;
    a = 2;
    b = 3;
    A = 0;
    op = 0;
    O2 = 0;
    pi = 3.14;
    do{
        printf("Cuadrado/Triangulo/Circulo/Rectangulo == 1/2/3/4\n");
        scanf("%d",&op);

       if(op == 1){
           printf("Establezca parametro L:\n");
           scanf("%d",&L);
           A = L*L;
           printf("\nAREA = %d",A);
           printf("\nContinuar? 1/2");
           scanf("%d",&O2);
        }
        if(op == 2){
            printf("Establezca parametro a\n");
            scanf("%d",&a);
            printf("Establezca parametro b\n");
            scanf("%d",&b);
            A = b*a/2;
            printf("Area = %d",A);
            printf("\nContinuar? 1/2\n");
            scanf("%d",&O2);    
        }
        if(op == 3){
            printf("Establezca parametro El radio:\n");
            scanf("%d",&a);
            b = a * a;
            A = pi*b;
            printf("Area = %d",A);
            printf("\nContinuar? 1/2\n");
            scanf("%d",&O2);    
        }
        if(op == 4){
            printf("Establezca parametro a\n");
            scanf("%d",&a);
            printf("Establezca parametro b\n");
            scanf("%d",&b);
            A = b*a;
            printf("Area = %d",A);
            printf("\nContinuar? 1/2\n");
            scanf("%d",&O2);    
        }
    }while (O2 == 1);
    printf("Ejecucion finalizada");
    }