/* Com base no programa anterior, faça com que o programa termine a repetição
quando uma aproximação aceitável seja atingida. Por exemplo, considere que se
desejamos calcular a raiz de 25: se o resultado atingido for 5.001, a repetição pode
terminar. Ou seja, o erro desejado deve ser menor ou igual a, por exemplo, 0.001.*/

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
        if(k)
        printf("%d\t\t%.10f\n", i, k);
    }
    return 0;
}

