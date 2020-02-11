//Parte A: Hacer una programa que por medio de una funcion sume dos numeros;
//Parte B: Hacer uno de los numeros dentro de la funcion 0;

#include <stdio.h>

int suma(int *x, int y){
    int result;
    result = *x + y;
    *x = 0;
    return result;
}

int main(){

    int a,b;
    a= 4;
    b=10;

    int total = suma(&a,b);
    printf("El resultado es %i\n", total);
    printf("El valor de X es %i\n",a);

    return 0;
}
