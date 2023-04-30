#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    float *valores;

    // Alocação de memória para guardar os valores
    valores = (float*) malloc(n * sizeof(float));

    // Solicita os valores ao usuário
    printf("Digite os valores a serem ordenados: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Ordenando os valores em ordem crescente.
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (valores[j] > valores[j + 1]) {
                float temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }

    // Apresentação dos valores ordenados em ordem crescente
    printf("Valores em ordem crescente: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }

    // Liberação da memória alocada.
    free(valores);

    return 0;
}