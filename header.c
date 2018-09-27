//Este programa abre un lee un archivo, si no existe lo crea y escribe sobre el
//si si existe solo lo busca al final
//se necesita que cada archivo tenga una cabecera como minimo de longitud 4B al principio
//y a partir de alli empezar a escribir los demás registros


#include <stdio.h>
#include <string.h>


int main(){
  printf("prueba 1\n");
    FILE *fd;
    char *filename="cabeceras.dat";
    fd = fopen(filename,"r");
    int cabecera=0;


    struct campo{
      char nombre[50];
      char apellido[50];
      char direccion[100];
    }cp;
    struct campo cp1,cp2,cp3,cp4;
    printf("prueba 2\n");

        if(fd==NULL){
          fd = fopen(filename,"w+");
          fwrite(&cabecera, sizeof(int), 1,fd);
                char *txt="Maria";
                char *e="Perez";
                char *d= "2av 4-0 Olopa";
                strncpy(cp.nombre, txt, strlen(txt));
                strncpy(cp.apellido, e, strlen(e));
                strncpy(cp.nombre, d, strlen(d));
                fwrite(&cp,sizeof(struct campo),1,fd);
                cabecera++;
                fwrite(&cabecera,sizeof(int),1,fd);
              fclose(fd);
              printf("%s\n",cp.nombre);

        }else{
              fclose(fd);
              fd= fopen(filename, "r+");
              int d = fread(&cabecera,4,1,fd);
              if(d!=0){
                printf("Ya existe cabecera");
              }
                //fseek(descriptor de archivos,cantidad de bytes que me quiero mover, desde donde me quiero mover)
                fseek(fd,0,SEEK_END);

                char *txti="Tomas";
                char *ei="Balmaceda";
                char *di= "Buenos Aires Blv";
                strncpy(cp1.nombre, txti, strlen(txti));
                strncpy(cp1.apellido, ei, strlen(ei));
                strncpy(cp1.nombre, di, strlen(di));
                //fwrite(direccion de lo que quiero leer, tama;o de lo que voy a leer, cuantos voy a escribir, donde lo voy a escribir)
                fwrite(&cp1,sizeof(struct campo),1,fd);

                fseek(fd,0, SEEK_SET);
                if(d!=0){
                  cabecera++;
                  fwrite(&cabecera,sizeof(int),1,fd);
                }
                fclose(fd);
              printf("%s\n",cp1.nombre);
}

  return 0;
}
