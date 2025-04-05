#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("\nhola mundo");

    int * pnum;
    int numero = 25;
    pnum = &numero;

    //1
    printf("\n1_El contenido del puntero: %d", *pnum);

    //2
    printf("\n2_La direccion de memoria almacenada por el puntero: %p", (void *)pnum);
    
    //3
    printf("\n3_La direccion de memoria de la variable: %p", &numero);

    //4
    printf("\n4_La direccion de memoria del puntero: %p", &pnum);

    //5
    printf("\n5_El tamanio de memoria utilizado por esa variable: %zu bytes", sizeof(numero));

    return 0;
}