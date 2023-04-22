#include <stdio.h>

int main(){
    int tarros, cant_1l, cant_4l, cant_20l;

    printf("Ingrese la cantidad de tarros: ");
    scanf("%d", &tarros);

    cant_1l = tarros * .5;
    cant_4l = tarros * .3;
    cant_20l = tarros - cant_1l - cant_4l;

    printf("\nLa cantidad de tarros de un litro es: %d", cant_1l);
    printf("\nLa cantidad de tarros de cuatro litros es: %d", cant_4l);
    printf("\nLa cantidad de tarros de veinte litros es: %d", cant_20l);
    
    return 0;
}