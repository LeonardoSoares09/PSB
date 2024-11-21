 #include<stdio.h>

 void func(int *vect, int tamanho){
for(int i=0;i<tamanho/2;i++){
    int temp = *(vect + i);
    *(vect + i) = *(vect + tamanho - 1 - i);    
    *(vect + tamanho - 1 - i) = temp;
}
 }

 int main(){
   int vect[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int tamanho =9;

   func(vect, tamanho);

    for(int i = 0; i<tamanho; i++){
        printf("%d.\n", *(vect + i));
    }

    printf("\n");

    return 0;
 }