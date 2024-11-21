/*Escreva uma função para um caixa de banco, que recebe um valor inteiro R
 e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia R
. Faça de forma que o número de notas usado seja o menor possível, retornando as quantidades de notas por referência.*/

#include<stdio.h>

void func(int r, int *cem, int *cinq, int *dez, int *cinco, int *um){
    
    int v = r;

    *cem = r/100;
    r = r%100;

    *cinq = r/50;
    r = r%50;

    *dez = r/10;
    r = r%10;

    *cinco = r/5;
    r = r%5;

    *um = r;

    printf("O valor %d tem:\n", v);
    printf("%d notas de cem\n", *cem);
    printf("%d notas de cinquenta\n", *cinq);
    printf("%d notas de dez\n", *dez);
    printf("%d notas de cinco\n", *cinco);
    printf("%d notas de um\n", *um);
}

int main(){

    int r, cem, cinq, dez, cinco, um;
    printf("Informe o valor a ser contado");
    scanf("%d", &r);

    func(r, &cem, &cinq, &dez, &cinco, &um);

    return 0;
}