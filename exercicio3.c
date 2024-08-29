#include "stdio.h"

//Escreva uma função que receba um vetor de inteiros, 
//mais a quantidade de valores presentes nele, e retorne 
//um número inteiro correspondente à quantidade de valores 
//que aparecem mais de uma vez. Exemplo: se o vetor for 
//[1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 (2 números se repetem, 2 e 3).


int contarRepetidos(int v[], int n){

    int repetidos = 0;

    for(int i = 0; i<n; i++){

        for(int j = i+1;j<n;j++){
            if(v[i]==v[j]){
                repetidos++;
            break;
            }
        }
    }
    return repetidos;
}

int main(){
    int v[] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8, 2};
    printf("%d",contarRepetidos(v,11));
    return 0;

}