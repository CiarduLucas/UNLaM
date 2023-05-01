#include <stdio.h>

int main(){
    float num, num2, num3;

    printf("Ingrese un numero entero: ");
    scanf("%f", &num);
    printf("Ingrese otro numero entero: ");
    scanf("%f", &num2);
    printf("Ingrese otro numero entero: ");
    scanf("%f", &num3);

    if (num == num2){
        if (num == num3){
            printf("TRES IGUALES");
        }
    }

    if (num3 < num){
        if (num3 < num2){
            printf("MAYORES AL TERCERO");
        }
    }
    else{
        if (num2<num3){
            printf("ALGUNOS ES MENOR");
        }
        else{
            printf("ALGUNO ES MENOR");
        }
    }
    return 0;
}