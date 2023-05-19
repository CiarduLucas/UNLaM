#include <stdio.h>

int main()
{
    char codigo='C';
    int importe;
    int error=0;
    float efectivo =0, cheque =0, tarjeta=0, total=0;
    
    while(codigo!='F'){
        error = 0;
        if (codigo=='C'){
            cheque = cheque + importe*1.20;
        }
        
        if (codigo=='E'){
            efectivo = efectivo +importe * 0.9;
        }    
        
        if (codigo=='T'){
            tarjeta = tarjeta + importe*1.12;
        }
        
        do{
            if (error==1){
                printf("Codigo no valido\n");
            }
            printf("Ingrese el codigo de descuento: ");
            scanf(" %c", &codigo);
            error=1;        
        }while(codigo!= 'C' && codigo!='E' && codigo!='T' && codigo!='F');
        
        
        if(codigo!='F'){
            error = 0;
            do{
                if (error==1){
                    printf("Importe no valido\n");
                }
                printf("Ingrese un importe: ");
                scanf("%d", &importe);
                error=1;
            }while(importe<=0);
            
        }
    }
    
    total = efectivo+tarjeta+cheque;
    
    printf("\nEfectivo en Caja:               $%2.2f", efectivo);
    printf("\nVentas con tarjetas de Credito: $%2.2f", tarjeta);
    printf("\nVentas con Cheques:             $%2.2f", cheque);
    printf("\nEfectivo en Caja:               $%2.2f", total);
    printf("\nImporte del IVA:                $%2.2f", total*1.21);
    return 0;
}
