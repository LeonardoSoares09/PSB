/*Escreva uma função que faz a conversão de temperaturas de Fahrenheit para Celsius, segundo a fórmula conhecida:
C = 5/9 * (F - 32)*/

#include <stdio.h>


float conversor (float f){
    float celsius = (5.0/9.0) * (f-32);
    return celsius;
}

int main(){
    float f, celsius;

    printf("digite o numero da temperatura em F");
    scanf("%f", &f);

    celsius = conversor(f);
    printf("A temperatura em Celsius é: %.2f\n", celsius);
    return 0;
}