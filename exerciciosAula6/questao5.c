#include <stdio.h>
#include <math.h>

int main() {
  float c1, c2, hip;

  printf("Digite o valor do primeiro cateto: ");
  scanf("%f", &c1);
  printf("Digite o valor do segundo cateto: ");
  scanf("%f", &c2);

  hip = sqrt(c1 * c1 + c2 * c2);

  printf("A hipotenusa do triângulo é: %.2f\n", hip);

  return 0;
}