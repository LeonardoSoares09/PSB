/*2. Escreva uma função que receba dois vetores de inteiros de mesmo tamanho,
 e o tamanho de um deles. A função deverá copiar os elementos do primeiro vetor para o segundo.
*/

#include<stdio.h>

void func(int *v1, int *v2, int t){
    for(int i = 0; i<t; i++){
        *(v2+i) = *(v1+i);
    }
}

int main(){
    int v1[] = {1,2,3,4,5,6,7,8,9};
    int v2[9];
    int t = 9;

    func(v1,v2,t);

    for(int i = 0; i<t; i++){
        printf("%d\n", *(v2+i));
    }

    return 0;
}