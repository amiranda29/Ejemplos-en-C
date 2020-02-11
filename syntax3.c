//Encuentra el numero mayor, entre tres numeros 

#include<stdio.h>

int main()
{
   int num1,num2,num3;
   
   //Ask user to input any three integer numbers
   printf("\nIngrese tres valores:\n");
   //Store input values in variables for comparsion
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
      printf("El primer numero es mayor\n");
   else if((num2>num3)&&(num2>num1))
      printf("El segundo numero es mayor\n");
   else
      printf("El tercer numero es mayor\n");
   return 0;
}