#include <stdio.h>

int main(){
    int horas, valor_hora;
    
    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese el valor hora: ");
    scanf("%d", &valor_hora);

    printf("El sueldo es: %d", horas*valor_hora);
    return 0;
}