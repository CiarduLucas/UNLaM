#include <stdio.h>

int main(){
    float precio;
    int descuento;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    printf("Ingrese 1 si hay descuento y 0 si no: ");
    scanf("%d", &descuento);

    precio = precio - (precio*0.2)*descuento;
    printf("\nEl precio final es de $%.2f", precio);

    return 0;
}