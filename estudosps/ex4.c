/*Escreva uma função que receba um tempo em total de segundos desde a meia-noite, 
retornando por referência o tempo em horas, minutos e segundos correspondentes.*/

#include<stdio.h>
#include<string.h>

void relogio(int tempo, int *horas, int *minutos, int *segundos){

    *horas = tempo/3600;
    tempo = tempo%3600;

    *minutos = tempo/60;
    tempo = tempo%60;

    *segundos = tempo;
}

int main(){
    int tempo;
    int horas, minutos, segundos;

    printf("Informe o tempo em segundos:");
    scanf("%d", &tempo);

    relogio(tempo, &horas, &minutos, &segundos);
    printf("O tempo total em segundos é %d, convertido ele fica: %d horas %d minutos e %d segunmdos", tempo, horas, minutos, segundos);

    return 0;
}