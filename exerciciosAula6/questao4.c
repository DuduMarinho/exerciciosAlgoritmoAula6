#include <stdio.h>
#include <math.h>

int main() {
  int opcao;
  double num, numacres;

  printf("Escolha uma categoria:\n");
  printf("1 - Alimentos\n");
  printf("2 - Eletrônicos\n");
  printf("3 - Vestuário\n");
  printf("4 - Outros\n");
  scanf("%d", &opcao);

  printf("Digite o valor do produto: "); 
  scanf("%lf", &num);

  switch (opcao) {
    case 1:
        numacres = (num * 0.05) + num;
        printf("O valor da sua compra é de %.lf\n", numacres);
        break;
    case 2:
        numacres = (num * 0.1) + num;
        printf("O valor da sua compra é de %.lf\n", numacres);
        break;
    case 3:
        numacres = (num * 0.08) + num;
        printf("O valor da sua compra é de %.lf\n", numacres);
        break;
    case 4:
        numacres = (num * 0.15) + num;
        printf("O valor da sua compra é de %.lf\n", numacres);
        break;
    default:
      printf("Opção inválida\n");
      break;
  }

  return 0;
}