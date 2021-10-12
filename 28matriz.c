//matrices coronavirus
#include <stdio.h>
const int ciudad = 2;
const int semana = 7;
int main(){
    int coronavirus[ciudad][semana];
    for (int i = 0; i < ciudad; i++)
    {
        for (int j = 0; j < semana; j++)
        {
            printf("ciudad %d, dia %d: ", i+1, j+1);
            scanf("%d", &coronavirus[i][j]);
        }
        
    }
    printf("\ndatos: \n\n");
for (int i = 0; i < ciudad; i++)
{
    for (int j = 0; j < semana; j++)
    {
        printf("ciudad %d, dia %d: = %d\n", i+1, j+1, coronavirus[i][j]);
    }
    
}
    return 0;
}