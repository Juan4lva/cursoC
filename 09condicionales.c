//condicionales
#include <stdio.h>
int main(){
    int nota =76;
        if (nota > 90)
        {
            printf("excelente");
        }
        else if(nota > 75)
        {
            printf("muy bueno");
        }
        else if (nota > 51)
        {
            printf("aprobado");
        }
        else
        {
            printf("reprobado");
        }
    return 0;
}