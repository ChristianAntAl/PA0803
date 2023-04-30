//Ponteiros para funções guardam os endereçõs das areas de seus códigos

//EXEMPLO:
#include <stdio.h>

//Função que retorna o valor da variavel "a" + 1
int funcao(int a) { 
  return a + 1; 
}

int main(void) {

 //Ponteiro que guarda o endereço de função 
 //que recebe um inteiro e retorna um inteiro.
  int (*pf)(int) = funcao;        
  printf("valor = %d\n", pf(1));
}