//matrices sumar matrices
#include <stdio.h>
int main(){
    int a[2][2], b[2][2], result[2][2];
    printf("ingresa los valores de la matriz a\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ingresa para a %d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("ingresa los valores de la matriz b\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ingresa para b %d%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
        
    }
    printf("\n suma de la matriz a y b: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", result[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
            
        }
    }
    return 0;
}