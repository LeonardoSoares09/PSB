/*Escreva uma função para um caixa de banco, que recebe um valor inteiro R
e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia R
.Faça de forma que o número de notas usado seja o menor possível, 
retornando as quantidades de notas por referência.*/

#include<stdio.h>
#include<string.h>

void caixa(int *cem, int *cinquenta, int *dez, int *cinco, int *um, int R){

    *cem = R/100;
    R = R%100;

    *cinquenta = R/50;
    R = R%50;

    *dez = R/10;
    R = R%10;

    *cinco = R/5;
    R = R%5;

    *um = R/1;
}

int main(){

    int R;
    int cem, cinquenta, dez, cinco, um;

    printf("Informe o Valor:");
    scanf("%d", &R);
    
    caixa(&cem, &cinquenta, &dez, &cinco, &um, R);

    printf("O valor %d, tem %d notas de cem, %d notas de cinquenta, %d notas de dez, %d notas de cinco e %d moedas de um real", R, cem, cinquenta, dez, cinco, um);

    return 0;
}