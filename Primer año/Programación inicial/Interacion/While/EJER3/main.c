#include <stdio.h>

int main()
{
    int letra_mayuscula=0, num=0, otros=0, letra_minuscula = 0;
    char caracter;
    
    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);    
    
    while(caracter != '*'){
        if (caracter >= '0' && caracter<='9'){
            num += 1;
        }
        else if(caracter>= 'A' && caracter<='Z'){
            letra_mayuscula+=1;
        }
        else if(caracter>='a' && caracter<='z'){
            letra_minuscula+=1;
        }
        else{
            otros+=1;
        }
        
        printf("Ingrese otro caracter: ");
        scanf(" %c", &caracter);
        
    }
    
    printf("La cantidad de letras minusculas son %d", letra_minuscula);
    printf("\nLa cantidad de letras minusculas son %d", letra_mayuscula);
    printf("\nLa cantidad de numeros son %d", num);
    printf("\nOtros %d", otros);
    
    
    return 0;
}
