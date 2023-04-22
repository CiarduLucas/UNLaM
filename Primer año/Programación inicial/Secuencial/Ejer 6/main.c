#include <stdio.h>

#define TURISTA 8800
#define PRIMERA 8800*1.15

int main(){
    int turista, primera;
    float recaudacion;

    printf("Ingrese la cantidad de pasajes turistas vendidos: ");
    scanf("%d", &turista);
    printf("Ingrese la cantidad de pasajes de primera clase vendidos: ");
    scanf("%d", &primera);
    
    recaudacion =(float) turista*TURISTA + primera*PRIMERA; 
    printf("La recaudacion es: %.2f", recaudacion);

    return 0;

}