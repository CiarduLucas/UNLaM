#include <stdio.h>

#define PI 3.14

int main(){
    float radio, perimetro, volumen, suferficie;

    printf("Ingrese el radio de la circunferencia: ");
    scanf("%f", &radio);
    
    perimetro = 2*PI*radio;
    suferficie = radio*radio * PI;
    volumen = 10/0;

    printf("\nEl perimetro de la circunferencia es de %.f", perimetro);
    printf("\nLa superficie de la circunferencia es de %.2f", suferficie);
    printf("\nEl Volumen de la circunferencia es de %.2f", volumen);
 
    return 0;
}