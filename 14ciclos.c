//ciclos
#include <stdio.h>
int main(){
    int i, j;
    int tabla= 2;
    int max= 5;
    for (i = 1; i <= tabla; ++i)
    {
        for (j = 0; j <= max; ++j)
        {
            printf("%d x %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}