//Escreva uma função que receba um tempo em total de segundos desde a meia-noite, retornando por referência o tempo em horas, minutos e segundos correspondentes.

#include<stdio.h>

void conversor(int total, int *horas, int *minutos, int *segundos){
    *horas = total/3600;
    total %= 3600;

    *minutos = total /60;
    *segundos = total % 60;
}

int main(){

    int total, horas, minutos, segundos;

    printf("Informe o total de segundos desde a meia noite");
    scanf("%d", &total);

    if(total<0){
        printf("Valor não pode ser negativo \n");
        return 1;
    }

    conversor(total, &horas, &minutos, &segundos);
    printf("O tempo correspondente é: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
