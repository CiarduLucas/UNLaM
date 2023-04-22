#include <stdio.h>

int main(){
    int fecha_aa, fecha_dd;

    printf("Ingrese la fecha en formato(ddmmaa): ");
    scanf("%d", &fecha_dd);

    fecha_aa = fecha_dd/10000 + (fecha_dd%100)*10000+ fecha_dd%10000-fecha_dd%100;
    printf("La fecha en formato (aammdd) es: %.6d", fecha_aa);

    return 0;
}