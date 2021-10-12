//almacenamiento
#include <stdio.h>
void pantalla();

int main(){
    pantalla();
    pantalla();
}

void pantalla(){
    static int c = 1;
    c += 5;
    printf("%d ", c); 
}