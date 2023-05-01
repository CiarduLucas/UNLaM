#include <stdio.h>

int main(){
    int num, num2, num3;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num3);

    if (num>num2){
        if (num>num3){
            printf("El numero mas grande es %d", num);
        }
        else{
            printf("El numero mas grande es %d", num3);
        }
    }
    else{
        if (num2>num3){
            printf("El numero mas grande es %d", num2);
        }
        else{
            printf("El numero mas grande es %d", num3);
        }
    }    

    return 0;
}