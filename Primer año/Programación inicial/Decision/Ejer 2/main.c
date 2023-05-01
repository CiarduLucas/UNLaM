#include <stdio.h>

int main(){
    int num, num2, num3;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num3);
   
    if (num<num2){
        if (num<num3){
            printf("El numero %d es el menor", num);
        }
        else{
            printf("El numero %d no es el menor", num);
        }
    }
   else{
        printf("El numero %d no es el menor", num);
    }
    return 0;
}