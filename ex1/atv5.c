/*Um método para cálculo de raízes quadradas de um número N já era conhecido
pelos babilônios em. . . bom, há muito tempo atrás. (Este método também é conhecido como método de Heron, um matemático grego que o descreveu 20 séculos
depois dos babilônios, perto do ano 50 DC.) Começando de um valor inicial k (geralmente valendo um) os babilônios geravam um novo valor de k de acordo com
a regra: K = K+N/K 
            ...2
 À medida que o processo é repetido, os novos valores de k se aproximam cada
vez mais da raiz de N. Escreva um programa que leia o valor de N e imprima
os primeiros doze valores obtidos com esta fórmula, testando-os para ver se eles
realmente se aproximam.
*/

#include<stdio.h>

int main (){
    double n;
    double k = 1.0;

    printf("Digite o valor de n");
    scanf("%lf", &n);

    if(n<=0){
        printf("Por favor, insira um número positivo.\n");
        return 1;
    }

    printf("Iteração\tValor de k\n");
    for(int i=1; i<=12; i++){
        k = (k+n/k) / 2;
        printf("%d\t\t%.10f\n", i, k);
    }
    return 0;
}

