#include <stdio.h>

int main()
{
	int numero;
	int *punt;

	numero = 43;
	punt = &numero;

	printf( "Dirección de numero = %p, valor de numero = %i\n", 
		punt, numero );
return 0;
}
