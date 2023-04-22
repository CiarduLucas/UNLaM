#include <stdio.h>

int main(){
    float kib, mib,gib, tib;

    printf("Ingrese el peso de un programa en kib: ");
    scanf("%f", &kib);

    mib = kib/1024;
    gib = mib/1024;
    tib = gib/1024;

    printf("\nEl peso del programa es de %.2f kiB", kib);
    printf("\nEl peso del programa es de %.2f MiB", mib);
    printf("\nEl peso del programa es de %.2f GiB", gib);
    printf("\nEl peso del programa es de %.2f TiB", tib);

    return 0;
}