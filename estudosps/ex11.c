/*4. Escreva uma função que receba um vetor de inteiros e o tamanho do vetor.
 A função deverá ordenar os elementos (implemente, por exemplo, bubble sort).
*/

#include<stdio.h>

void func(int *v1, int t){

    int aux;

    for(int i = 0; i<t; i++){
        for(int j = i+1; j<t; j++){
            if(*(v1+i)>*(v1+j)){
                aux = *(v1+i);
                *(v1+i) = *(v1+j);
                *(v1+j) = aux;
            }
        }
    }
}

int main(){
    int v1[] = {4,2,1,3};
    int t = 4;

    printf("Vetor desordenado: ");
    for(int i = 0; i<t; i++){
        printf("%d", *(v1+i));
    }

    func(v1, t);
    printf("\n");
    printf("vetor ordenado: ");
    for(int i = 0; i<t; i++){
        printf("%d", *(v1+i));
    }

    return 0;
}