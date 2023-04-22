#include <stdio.h>

#define PULGADAS 12
#define CENTIMETROS 2.54
#define YARDAS 3 

int main(){
    float pies, centimetros, pulgadas, yardas;

    printf("Ingrese la medida en pies: ");
    scanf("%f", &pies);

    pulgadas = pies*PULGADAS; 
    centimetros = pulgadas * CENTIMETROS;
    yardas = pies / YARDAS;

    printf("\nLa mediada en pies es: %.2f", pies);
    printf("\nLa medida en pulgadas es: %.2f", pulgadas);
    printf("\nLa mediada en centimetros es: %.2f", centimetros);
    printf("\nLa medida en yardas es: %.2f", yardas);
    
    return 0;
}