#include <stdio.h>

int main(){

    int vector [100];	/* un vector de enteros */
    int *ptr;			/* un puntero a enteros */
    ptr = &vector[0];	/* ptr apunta al principio del vector */
    *ptr = 33;		/* igual que vector[0] = 33 */
    *(ptr+1) = 44;		/* igual que vector[1] = 44 */
    *(ptr+2) = 90;		/* igual que vector[2] = 90 */

    printf("valor %d\n", vector[0]);
    printf("valor %d\n", vector[1]);
    printf("valor %d\n", vector[2]);

    
    return 0;
}