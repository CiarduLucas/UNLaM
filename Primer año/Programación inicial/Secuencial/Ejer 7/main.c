#include <stdio.h>

int main(){
    int num, decena, unidad, centena;

    printf("Ingrese un numero de 3 cifras: ");
    scanf("%d", &num);

    unidad = num%10;
    centena = num/100;
    decena = (num%100 - unidad)/10;
    
    printf("\nEl numero %d se descompone en %d centena + %d decenas + %d unidades", num, centena,decena,unidad);
    return 0;
}