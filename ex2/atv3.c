/*Escreva uma função que receba um vetor de inteiros, mais a quantidade de valores presentes nele, e retorne um número inteiro correspondente
 à quantidade de valores que aparecem mais de uma vez. 
 Exemplo: se o vetor for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 (2 números se repetem, 2 e 3).*/
 
#include<stdio.h>

int func(int *vect, int tamanho) {
    int count = 0;

    // Vetor de controle para verificar quais elementos já foram contados
    int ja_contado[tamanho];
    for (int i = 0; i < tamanho; i++) {
        ja_contado[i] = 0; // Inicializa como não contado
    }

    for (int i = 0; i < tamanho; i++) {
        if (ja_contado[i]) continue; // Pula se já foi processado

        int repetido = 0; // Indica se o número atual se repete

        for (int j = i + 1; j < tamanho; j++) {
            if (vect[i] == vect[j]) {
                repetido = 1;
                ja_contado[j] = 1; // Marca o índice como contado
            }
        }

        if (repetido) {
            count++; // Incrementa apenas uma vez para cada número repetido
        }
    }

    return count;
}

int main() {
    int vect[] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8, 4};
    int tamanho = sizeof(vect) / sizeof(vect[0]);

    int result = func(vect, tamanho);
    printf("A quantidade de valores que aparecem mais de uma vez é: %d\n", result);

    return 0;
}
