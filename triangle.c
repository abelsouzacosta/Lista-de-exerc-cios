#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int side1, side2, side3, operation1, operation2, operation3, operation4, operation5, operation6;

  setlocale(LC_ALL, "Portuguese");

  printf("Digite o primeiro lado do triângulo: ");
  scanf("%d", &side1);

  printf("Digite o segundo lado do triângulo: ");
  scanf("%d", &side2);

  printf("Digite o terceiro lado: ");
  scanf("%d", &side3);

  // verifica se os valores fornecidos no prompt realmente formam um triângulo
  operation1 = side2 - side3;
  operation2 = side1 - side2;
  operation3 = side1 - side3;
  operation4 = side2 + side3;
  operation5 = side1 + side2;
  operation6 = side1 + side3;

  system("clear");

  char name = system("whoami");

  if (side1 > abs(operation1) && side1 < operation4 && side2 > abs(operation3) && side2 < operation6 && side3 > abs(operation2) && side3 < operation5) {
    if (side1 == side2 && side2 == side3) {
      printf("Equilátero");
    } else {
      if (side1 != side2 && side2 != side3) {
        printf("Escaleno");
      } else {
        printf("Isósceles");
      }
    }
  } else {
    printf("Não é triângulo");
  }

  return 0;
}
