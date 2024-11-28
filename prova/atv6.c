#include<stdio.h>

typedef struct 
{
    float base;
    float altura;
}Retangulo;

float calculo_area(Retangulo *ret){
    return ret->base * ret->altura;
}

int main(){

    Retangulo ret;
    printf("Informe a base:");
    scanf("%f", &ret.base);
    printf("Informe a altura:");
    scanf("%f", &ret.altura);

    float area = calculo_area(&ret);

    printf("%.2f\n", area);

    return 0;

}
