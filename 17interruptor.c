#include <stdio.h>
int main(){
    char calculadora;
    double n1, n2;

    printf("ingrese un operador (+,-,*,/) : ");
    scanf("%c", &calculadora);

    printf("ingrese un numero: ");
    scanf("%lf", &n1);
    printf("ingrese otro numero: ");
    scanf("%lf", &n2);

    switch (calculadora)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", n1, n2, n1 + n2);
    break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", n1, n2, n1 - n2);
    break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", n1, n2, n1 * n2);
    break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf", n1, n2, n1 / n2);
    break;

    default:
    printf("error");
    }
    return 0;
}