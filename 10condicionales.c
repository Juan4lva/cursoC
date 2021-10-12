//condicionales
//encontrar el mayor de 3 numeros
#include <stdio.h>
int main(){
    int n1, n2, n3;
    int mayor;
    printf("\n ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("\n ingrese el segundo numero: ");
    scanf("%d", &n2);
    printf("\n ingrese el tercer numero: ");
    scanf("%d", &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            mayor = n1;
        }
        else
        {
            mayor = n3;
        }
    }
    else
    {
        if (n2 > n3)
        {
            mayor = n2;
        }
        else
        {
            mayor = n3;
        }
    }
    printf("\n %d es el mayor.", mayor);

    return 0;
}