//Dos punteros apuntan a la misma variable
#include <stdio.h>

main()
{
	int a;
	int *punt1, *punt2;
	a = 5;
	punt1 = &a; 
    punt2 = &a;

	if ( punt1 == punt2 )
	printf( "punt1 y punt2 apuntan al mismo sitio\n" );
}