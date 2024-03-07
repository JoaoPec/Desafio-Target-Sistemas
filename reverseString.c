#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int comprimento = strlen(str);
    int inicio = 0;
    int fim = comprimento - 1;

    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char minhaString[100];

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    printf("\nString Original: %s\n", minhaString);

    inverterString(minhaString);

    printf("String Invertida: %s\n", minhaString);

    return 0;
}

