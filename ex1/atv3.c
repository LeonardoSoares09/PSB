/*Escreva uma função que recebe um horário (horas, minutos, segundos) e determina quantos segundos já se passaram desde que o dia começou.*/

#include<stdio.h>

int func(int h, int m, int s){
    return (h*3600) + (m*60) + s;
}

int main(){
    int h,m,s;

    printf("Digite o horario, minutos e segundos");
    scanf("%d %d %d", &h, &m, &s);

   int ts = func(h,m,s);

   printf("ja se passaram %d segundos desde que o dia comecou", ts);
   return 0;
}



