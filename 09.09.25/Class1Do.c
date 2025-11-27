#include <stdio.h>

int main(){
    int a,b,c,op,A,L,O2;
    L = 3;
    a = 2;
    b = 3;
    A = 0;
    op = 0;
    O2 = 0;
    do{
        printf("Cuadrado/Triangulo");
        scanf("%d",&op);

       if(op == 1){
           printf("Establezca parametro L:");
           scanf("%d",&L);
           A = L*L;
           printf("\nAREA = %d",A);
           printf("\nContinuar? 1/2");
           scanf("%d",&O2);
        }
        if(op == 2){
            printf("Establezca parametro a");
            scanf("%d",&a);
            printf("Establezca parametro b");
            scanf("%d",&b);
            A = b*a/2;
            printf("Area = %d",A);
            printf("\nContinuar? 1/2");
            scanf("%d",&O2);    
        }
        
    }while (O2 == 1);  
    printf("Ejecucion finalizada");  
    }
