#include <stdio.h>

int main(){
    int num, num2, num3;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num3);

    if (num == num3+num2){
        printf("%d es la suma de %d + %d = %d", num, num2, num3, num);
    }
    else if (num2 == num + num3){
                printf("%d es la suma de %d + %d = %d", num2, num, num3, num2);
    }
    else if (num3 == num + num2){
        printf("%d es la suma de %d + %d = %d", num3, num2, num, num3);
    }
    else{
        printf("Ninguno de los numeros es la suma de los otros dos");
    }

    return 0;
}