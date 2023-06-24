#include <stdio.h>

#define PRODUCTOS 20

int carga_precios(int vec[PRODUCTOS]);

int main(){
    int mventas[PRODUCTOS][12] = {0};
    int precios[PRODUCTOS] = {0};

    carga_precios(precios);

    return 0;
}

int carga_precios(int vec[PRODUCTOS]){
    int i;
    int precio;
    for(i=0; i< PRODUCTOS; i++){
        printf("Ingrese el precio del producto N %d ", i+1);
        scanf("%d", &precio);
        vec[PRODUCTOS]=precio;
    }
}