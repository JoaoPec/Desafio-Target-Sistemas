#include <stdio.h>

int main() {
  int ant1, ant2, atual, num, found;

  atual = 1;
  ant1 = 1;
  ant2 = 0;
  found = 0;

  printf("Digite o número que deseja saber se está na sequência de Fibonacci: ");
  scanf("%d", &num);

  printf("\nSequência de Fibonacci:\n");
  printf("%d\n", ant2);
  printf("%d\n", ant1);

  while (atual <= num) {
    atual = ant1 + ant2;
    if (atual == num) {
      printf("%d - está na sequência de Fibonacci.\n", num);
      found = 1;
      break;
    }
    printf("%d\n", atual);

    ant2 = ant1;
    ant1 = atual;
  }

  if (!found) {
    printf("O número %d não está na sequência de Fibonacci.\n", num);
  }

  return 0;
}

