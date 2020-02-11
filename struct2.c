#include <stdio.h>

struct Punto{
  int x;
  int y;
};

int main(){
  struct Punto punto;
  punto.x=10;
  punto.y=20;
  struct Punto *pPunto;
  pPunto = &punto;
  printf("X: %d, Y: %d\n", pPunto-> x, pPunto ->y);

  pPunto->y = 5;
  printf("X: %d, Y: %d\n", pPunto ->x, pPunto ->y);
  return 0; 
}
