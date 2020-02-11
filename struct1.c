#include<stdio.h>
#include <string.h>

/*
struct Persona{
  char *Nombre;
  char *Direccion;
}
*/

struct Persona{
  char Nombre[65];
  char Direccion[65];
  int AnioNacimiento;
}per;

int main(){
  strcpy(per.Nombre,"John Doe");
  strcpy(per.Direccion,"Chiquimula");
  per.AnioNacimiento=1993;
  printf("%s\n%s\n%d\n",per.Nombre,per.Direccion, per.AnioNacimiento);
  return 0;
}
