/*Descubra quantos bits são usados no seu compilador preferido para armazenar os
tipos short int, int, long int e long long int. Use o operador sizeof(x) para
isso, onde x pode ser uma variável ou mesmo um tipo de dado.*/

#include <stdio.h>

int func(){
    short int x = 1;
    int y = 1;
    long int z = 1;
    long long w = 1;

    printf("Tamanho de short int: %lu bytes (%lu bits)\n", sizeof(x), sizeof(x) * 8);
    printf("Tamanho de int: %lu bytes (%lu bits)\n", sizeof(y), sizeof(y) * 8);
    printf("Tamanho de long int: %lu bytes (%lu bits)\n", sizeof(z), sizeof(z) * 8);
    printf("Tamanho de long long: %lu bytes (%lu bits)\n", sizeof(w), sizeof(w) * 8);
    return 0;
}

int main(){
    printf("Olá Mundo!");
    func();
    return 0;
}

