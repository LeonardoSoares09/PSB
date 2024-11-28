/* 1. Escreva uma função que receba um vetor de inteiros, 
o tamanho do vetor e um valor a ser procurado. A função deve procurar o valor no vetor,
 caso encontre deve retornar a posição (índice) no vetor. Caso não encontre, deve retornar -1.
*/
#include<stdio.h>

int func(int *v1, int t, int n){

    for(int i =0; i<n; i++){
        if(*(v1+i) == n){
            return i;
        }
    }

    return -1;
}

int main(){
    int v1[] = {1,2,3,4,5};
    int t = 5;
    int n;
    printf("Informe o valor a ser procurado no vetor");
    scanf("%d", &n);

    int result = func(v1,t,n);
    if(result==-1){
        printf("Valor não encontrado no vetor.\n");
    }else{
        printf("Valor encontrado na posição %d do vetor.\n", result);
    }

    return 0;
}