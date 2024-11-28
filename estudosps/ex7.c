#include <stdio.h>

// Função que verifica se duas strings são iguais sem usar a string.h
int saoIguais(char s1[], char s2[]) {
    int i = 0;
    
    // Comparar os caracteres de cada string
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;  // As strings são diferentes
        }
        i++;
    }

    // Se o loop terminou e uma string terminou antes da outra
    if (s1[i] != '\0' || s2[i] != '\0') {
        return 0;  // As strings têm tamanhos diferentes
    }

    return 1;  // As strings são iguais
}

int main() {
    char s1[50] = "Mundo";
    char s2[50] = "Mundo";

    if (saoIguais(s1, s2)) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
