#include <stdio.h>

int main() {
  int indice = 13;
  int soma = 0;
  int k = 0;

  for (int i = 0; i < indice; i++) {
    k++;
    soma += k;
  }

  printf("%d\n", soma); // 91

  return 0;
}

