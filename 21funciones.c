//funciones verificar numeros primos
#include <stdio.h>
int numeroprimo(int n);

int main(){
    int n, i, flag;

    printf("ingrese un numero: ");
    scanf("%d", &n);

    flag= numeroprimo(n);

    if(flag == 1)
    {
        printf("%d no es un numero primo.", n);
    }
    else
    {
        printf("%d es primo.", n);
    }
}

int numeroprimo(int n){
    int i;
    
        for (i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            return 1;
            break;
        }
    }

    return 0;
}