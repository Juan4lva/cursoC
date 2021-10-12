//funciones verificar numeros primos
#include <stdio.h>
int numeroprimo();

int main(){
    int n, i, flag = 0;

    n= numeroprimo();

    for (i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("%d no es un numero primo.", n);
    }
    else
    {
        printf("%d es primo.", n);
    }
}

int numeroprimo(){
    int n;
    printf("ingrese un numero: ");
    scanf("%d", &n);
    return n;
}