#include <stdio.h>
int main(void){
  char x[4];
  int y[4];
  float z[4];
  double w[4];
  printf("&x[0] = %X\n",x);
  printf("&y[0] = %X\n",y);
  printf("&z[0] = %X\n",z);
  printf("&w[0] = %X\n\n",w);
  
  for(int i=1;i<4;i++){
printf("(x+ %d) = %X\n", i,(x+i));
  }

  for(int j=1;j<4;j++){
    printf("(y+ %d) = %X\n", j,(y+j));
  }

  for(int k=1;k<4;k++){
    printf("(z+ %d) = %X\n", k,(z+k));
  }
  for(int l=1;l<4;l++){
    printf("(w+ %d) = %X\n", l,(z+l));
  }
  return 0;
}