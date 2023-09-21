#include <stdio.h>
#include <math.h>

int main() {
  int opcao;
  double num;

  printf("Escolha uma operação avançada:\n");
  printf("1 - Seno\n");
  printf("2 - Cosseno\n");
  printf("3 - Raiz quadrada\n");
  scanf("%d", &opcao);

  printf("Insira um número: "); 
  scanf("%lf", &num);

  switch (opcao) {
    case 1:
      printf("O seno de %.2lf é %.2lf\n", num, sin(num));
      break;
    case 2:
      printf("O cosseno de %.2lf é %.2lf\n", num, cos(num));
      break;
    case 3:
      printf("A raiz quadrada de %.2lf é %.2lf\n", num, sqrt(num));
      break;
    default:
      printf("Opção inválida\n");
      break;
  }

  return 0;
}