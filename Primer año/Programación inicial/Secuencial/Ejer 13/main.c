#include <stdio.h>

int main(){
    int num, cuenta;

    printf("Ingrese un numero de 4 cifras: ");
    scanf("%d", &num);

    cuenta = num/1000 + num%10 + (num%100-num%10)/10 + (num%1000-num%100)/100;
    cuenta = cuenta/10 + cuenta%10;
    cuenta = cuenta/10 + cuenta%10;

    printf("La suma final de los digitos es %d ", cuenta);

    return 0;
}