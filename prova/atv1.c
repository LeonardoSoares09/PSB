/*
A função deve procurar o valor no vetor, 
 caso encontre deve retornar a posição (índice) no vetor. 
 Caso não encontre, deve retornar -1.
*/

#include<stdio.h>

int func(int *vect, int tamanho, int val){
for(int i=0;i<tamanho;i++){
    if(*(vect + i)==val){
    return i;
        }   
    }
    return -1;
}

int main(){
    int vect[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int val;
    printf("Informe o valor a ser procurado no vetor");
    scanf("%d", &val);
    int result = func(vect,tamanho,val);

    if(result!=-1){
        printf("O valor %d foi encontrado na posição %d.\n", val, result);
    }else{
        printf("O valor %d não foi encontrado no vetor.\n", val);
    }

    return 0;

}