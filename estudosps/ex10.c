/*3. Escreva uma função que receba um vetor de inteiros e o tamanho do vetor.
 A função deverá inverter a ordem dos elementos do vetor.
*/

#include<stdio.h>

void func(int *v1, int tamanho){
    for(int i =0; i<tamanho/2; i++){
        int aux = *(v1+i);
        *(v1+i) = *(v1+tamanho - 1 - i);
        *(v1+tamanho-1 - i) = aux;
    }
}

int main(){

    int v1[] = {1,2,3,4,5};
    int tamanho = 5;
    printf("Vetor original: ");
    for(int i=0; i<tamanho; i++){
        printf("%d ", v1[i]);
    }

    func(v1,tamanho);
    printf("Vetor Invertido: ");
    for(int i=0; i<tamanho; i++){
        printf("%d ", v1[i]);
    }
}