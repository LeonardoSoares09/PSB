#include<stdio.h>

int func(int *vet, int T){

int count = 0;
int auxiliar[T];

for(int i = 0; i<T; i++){
    auxiliar[i] = 0;
}

for(int i= 0; i<T; i++){
    if(auxiliar[i]==0){
        for(int j=i+1; j<T; j++){
            if(*(vet+i)==*(vet+j)){
                auxiliar[j] = 1;
                count++;
            }
        }
    }
}

return count;
}

int main(){
    int vet[] = {1, 2, 1, 3, 4, 2, 4, 5, 8, 9, 5};
    int T = 11;

    int result = func(vet, T);
    printf("%d números se repetem", result);
    return 0;
}