/*Escreva uma função que receba dois vetores de inteiros de mesmo tamanho, e o tamanho de um deles. 
A função deverá copiar os elementos do primeiro vetor para o segundo.
*/

#include<stdio.h>

void func(int *v1, int *v2, int tm){
    for(int i = 0; i< tm; i++){
        *(v2 + i) = * (v1 + i);
    }
}

int main(){
    int v1[] = {3, 1, 8, 4, 9, 0};
    int v2[6];
    func(v1, v2, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", v2[i]);
    printf("\n");

    return 0;
}



