#include <stdio.h>
#include <stdlib.h>

int comparar(const void* a, const void* b) { //Função de comparação que vai retornar um valor para a função qsort.
  if(*(float*)a > *(float*)b){ //transforma os valores de "a" e "b" em inteiros e retorna 1 se "a" é maior que "b"
    return 1;
  }
  else if (*(float*)a == *(float*)b){  //transforma os valores de "a" e "b" em inteiros e retorna 0 se "a" é igual a "b"
    return 0;
  }
  else{ //Se nenhuma das situações anteriores acontecer a função retorna -1
    return -1;
  }
}

int main() {
    int n = 5; //variável para a quantidade de elementos que vão ser ordenados
    float *valores; //Ponteiro para float que vai guardar os valores

  // Alocação de memória para guardar os valores
    valores = (float*) malloc(n * sizeof(float));

    // Solicita os valores ao usuário
    printf("Digite os valores a serem ordenados: ");
    for (int i = 0; i < n; i++) {
      scanf("%f", &valores[i]);
    }

   qsort(valores, n, sizeof(float), comparar); //Função que ordena os valores.

    //Apresentação dos valores ordenados em ordem crescente
    printf("Valores em ordem crescente: ");
    for (int i = 0; i < n; i++) {
      printf("%.2f ", valores[i]);
    }
    // Liberação da memória alocada.
    free(valores);

    return 0;
}