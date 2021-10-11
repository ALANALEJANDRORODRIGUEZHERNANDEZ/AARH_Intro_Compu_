#include <stdio.h>
int main(){

    //Sumar dos numeros, pedirlos por teclado
    int num1, num2, resultado;
    printf("Programa que suma 2 numeros\n");
    //Lectura de los numeros
    printf("Ingresa el primer numero: ");
    scanf_s("%i", &num1);
    printf("Ingresa el primer numero: ");
    scanf_s("%i", &num2);
    //Proceso
    resultado = num1 + num2;
    //Salida
    printf("El resultado es: %i ", resultado);
        return 0;
}