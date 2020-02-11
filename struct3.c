#include <stdio.h>
#include <stdlib.h>

//typedef es para declarar nuevos tipos de datos
typedef struct _nodo {
  int valor;
  struct _nodo *siguiente;
} Nodo;

int main(){
  Nodo *n = (Nodo*) malloc(sizeof(Nodo));

  n->valor=5;
  n->siguiente = NULL;

  printf("%d\n", n->valor);
  free(n);
  return 0;
}