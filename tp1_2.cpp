#include <stdio.h>

//a
int resolverCuadrado (int base);

//b
void resolverCuadrado1 (int base);

//d
void invertir(int a, int b);

//e
void orden(int* a, int* b);

int main() {

    //c
    int * puntero;

    int num;
    int resultado;
    int a;
    int b;

    //c
    puntero = &num;

    printf("\nIngrese un numero para obtener su CUADRADO:");
    scanf("%d", &num);

    printf("Ingrese valor A:");
    scanf("%d", &a);
    printf("ingrese valor B:");
    scanf("%d", &b);

    //a
    resultado = resolverCuadrado(num);
    printf("\nEl cuadrado de %d es: %d", num, resultado);

    printf("\n");
    //b
    resolverCuadrado1(num);

    printf("\n");
    //c
    printf("\nDireccion de la variable: %p", &puntero);
    printf("\nContenido de la variable: %d", *puntero);

    printf("\n");
    //d
    invertir(a, b);

    printf("\n");
    //e
    printf("\nAntes de ordenar: a=%d -- b=%d", a, b);
    //e
    orden(&a, &b);
    //e
    printf("\nDespues de ordenar: a=%d -- b=%d", a, b);

    printf("\n");
    //f
    
    return 0;
}

//a
int resolverCuadrado (int base) {

    int resultado;

    resultado = base * base;

    return resultado;
}

//b
void resolverCuadrado1 (int base) {

    int result;

    result = base * base;

    printf("\nEl cuadrado del numero ingresado es: %d", result);
}

//d
void invertir(int a, int b) {

    printf("\nEl valor de a es: %d", a);
    printf("\nEl valor de b es: %d", b);

    int aux;
    aux = a;
    a = b;

    printf("\nValor modificado de a es: %d", a);
    printf("\nValor modificado de b es: %d", aux);
}

//e
void orden(int* a, int* b) {

    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

}