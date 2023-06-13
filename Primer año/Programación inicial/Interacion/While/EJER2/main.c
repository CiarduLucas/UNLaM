#include <stdio.h>

int main()
{
    int flag = 0;
    int dia;
    
    printf("Ingrese un día: ");
    scanf("%d", &dia);    
    
    do{
        if (flag == 1){
            printf("Ingrese un día correcto: ");
            scanf("%d", &dia);
        }
        flag = 1;
    }while(dia<=0 || dia>31);
    
    
    
    return 0;
}
