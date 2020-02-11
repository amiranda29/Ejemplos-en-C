//Devuelve el tamanio de una estructura por medio de aritmetica de punteros 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct estudiante{
    char *nombre;
    char *apellido; 
    int carne;
};

int main(){

    struct estudiante *e1= (struct estudiante*) malloc(sizeof(struct estudiante));
    e1 -> nombre = "Juan";
    e1 -> apellido = "Diaz";
    e1 -> carne = 202040;

    int c = (int) sizeof(char)*strlen(e1->nombre);
    struct estudiante *p = e1+c;
    printf("%i\n", c);



    free(e1);
    
    



    return 0;
}