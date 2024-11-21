#include<stdio.h>

void func(int *vect, int tamanho){
    for(int i = 0; i< tamanho-1; i++){
        for(int j = i+1; j<tamanho; j++){
            if(*(vect+i)>*(vect+j)){
                int temp = *(vect+i);
                *(vect+i) = *(vect+j);
                *(vect+j) = temp;
        }
    }
}
}

int main(){
    int vect[] = {5, 2, 3, 1, 4};
    int tamanho = 5;

    func(vect, tamanho);

    for(int i = 0; i<tamanho; i++){
        printf("%d ", *(vect + i));
    }

    printf("\n");

    return 0;
}