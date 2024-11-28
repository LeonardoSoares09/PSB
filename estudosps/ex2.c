#include<stdio.h>
#include<string.h>

/* 
que recebe duas strings como parâmetro e verifica se a segunda é substring da primeira, 
retornando a posição onde ela começa na primeira. Caso não seja encontrada, retorne -1:
*/

int minha_substring(char s1[], char s2[]){

int ts1 = strlen(s1);
int ts2 = strlen(s2);

if(ts2>ts1){
    return -1;
}

for(int i = 0; i<=ts1-ts2; i++){
    int j;
    for(j = 0; j< ts2; j++){
        if(s1[i + j] != s2[j]){
            break;
        }
    }
    
    if(j==ts2){
        return i;
    }
}
return -1;

}

int main(){
    char s1[] = "submundo";
    char s2[] = "mundo";

    int result = minha_substring(s1,s2);

    if (result >= 0) {
        printf("'%s' é uma substring de '%s' começando na posição %d.\n", s2, s1, result);
    } else {
        printf("'%s' não é uma substring de '%s'.\n", s2, s1);
    }
}