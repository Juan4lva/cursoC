//array
#include<stdio.h>
int main(){
    int numeros[4];
    printf("ingrese cuatro numeros: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", numeros[i]);
    }
}