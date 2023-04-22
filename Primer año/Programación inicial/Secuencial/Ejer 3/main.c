#include <stdio.h>

int main(){
    int num1, num2, suma, resta, producto;
    float division;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    producto = num1 * num2;
    division = (float) num1/num2;

    printf("\nLa suma es: %d", suma);
    printf("\nLa resta es: %d", resta);
    printf("\nEl producto es: %d", producto);
    printf("\nLa division es: %.2f", division);
      
    
    return 0;
}