 #include<stdio.h>

 void func(int *vect1, int *vect2, int tamanho){
    for(int i=0; i<tamanho; i++){
        *(vect2 + i) = *(vect1 + i); 
     }
 }

 int main(){
    int vect1[] = {1, 2, 3, 4, 5};
    int vect2[5];
    int tamanho = 5;

    func(vect1, vect2, tamanho);

    for(int i = 0; i< tamanho; i++){
        printf("%d ", *(vect2 + i));
    }

    printf("\n");

    return 0;
 }