#include<stdio.h>

int main(){
int* ptr;			/* el puntero */
int vector [100];	/* el vector */
int i;			/* variable contadora */

ptr = &vector[0];

for(i=0; i<100 ; i++){
    *ptr = i;
    printf("%d\n", vector[i]);
    ptr = ptr+1;
}

return 0;
}