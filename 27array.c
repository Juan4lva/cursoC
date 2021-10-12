//array-promedio
#include<stdio.h>
int main(){
    int numeros[8], i, n, sum = 0, pro;
    printf("cantidad de valores: ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("ingrese numeros %d: ", i+1);
        scanf("%d",&numeros[i]);
        sum += numeros[i];
    }
    pro = sum/n;
    printf("el promedio es: %d", pro);
    return 0;
}