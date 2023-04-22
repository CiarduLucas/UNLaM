#include <stdio.h>
#define CANT 2

int main(){
    int nota1, nota2;
    float promedio;

    printf("Ingrese la nota de la primera evaluacion: ");
    scanf("%d", &nota1);
    printf("Ingrese la nota de la segunda evaluacion: ");
    scanf("%d", &nota2);

    promedio = (float)(nota1 + nota2)/CANT;

    printf("La nota final es: %.2f", promedio);
    return 0;
}