#include <stdio.h>

int main(){
    int empanadas, costo;

    printf("Ingresen las cantidad de empanadas a comprar: ");
    scanf("%d", &empanadas);

    costo = (empanadas/12) * 300 + (empanadas%12)*30;
    printf("\nSerian %d pesos: ", costo);
    return 0;
}