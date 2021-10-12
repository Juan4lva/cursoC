//almacenamiento
#include <stdio.h>
void pantalla();
int n = 3; //variable global

int main(){
    ++n;
    pantalla();
    return 0;
}

void pantalla(){
    ++n;
    printf("n = %d", n);
}