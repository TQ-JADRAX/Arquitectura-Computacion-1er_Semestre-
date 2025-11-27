#include <stdio.h>

int main(){
    int a,b,c,op,A,L;
    L = 3;
    a = 2;
    b = 3;
    A = 0;
    op = 0;
    printf("Area\n");
    printf("Cuadrado...1\n");
    printf("Triangulo...2\n");
    scanf("%d",&op);
    printf("%d",op,"\n");
    if(op == 1){
        printf("Establezca parametro L:");
        scanf("%d",&L);
        A = L*L;
        printf("\nAREA = %d",A);
    }
    if(op == 2){
        printf("Establezca parametro a");
        scanf("%d",&a);
        printf("Establezca parametro b");
        scanf("%d",&b);
        A = b*a/2;
        printf("Area = %d",A);    
    }

    }


