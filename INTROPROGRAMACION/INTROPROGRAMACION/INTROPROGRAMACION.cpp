#include <stdio.h>
int sumadatos (int a, int b) {
    int resultados;
    resultados = a + b;
    return resultados;
}

int main(){
    //Sumar dos numeros, pedirlos por teclado
    int num1, num2, resultado;
    printf("Programa que suma 2 numeros\n");
    //Lectura de los numeros
    printf("Teclea el primer numero: ");
    scanf_s("%i", &num1);
    printf("Teclea el segundo numero: ");
    scanf_s("%i", &num2);
    //Proceso
    resultado = sumadatos(num1,num2);
    //Salida
    printf("El resultado es: %i ", resultado);
        return 0;
}