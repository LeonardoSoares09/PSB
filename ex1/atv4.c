/*Crie outra função similar à função do programa do exercício 3 para determinar
também quantos segundos ainda faltam até o dia terminar.
*/

#include<stdio.h>

int func(int h, int m, int s){
    int ts = (h*3600) + (m*60) + s;
    return (24*3600) - ts;
}

int main(){
   int h, m, s;

   printf("Digite o horario, minutos e segundos");
    scanf("%d %d %d", &h, &m, &s);

    int ts = func(h, m, s);

    printf("Restam %d segundos até o dia terminar", ts);
}