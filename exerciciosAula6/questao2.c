#include <stdio.h>

int main() {
    int n1, n2, n3, maior, menor;

    printf("Digite três numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

//Par ou Impar

    if (n1 % 2 == 0){
        printf("O numero %d é par", n1);
    } else {
        printf("O numero %d é impar", n1);
    }
    if (n2 % 2 == 0){
        printf("O numero %d é par", n2);
    } else {
        printf("O numero %d é impar", n2);
    }
    if (n3 % 2 == 0){
        printf("O numero %d é par", n3);
    } else {
        printf("O numero %d é impar", n3);
    }

//Positivo ou negativo 

    if (n1 > 0){
        printf("O numero %d é positivo", n1);
    } else {
        printf("O numero %d é negativo", n1);
    }
     if (n2 > 0){
        printf("O numero %d é positivo", n2);
    } else {
        printf("O numero %d é negativo", n2);
    }
     if (n3 > 0){
        printf("O numero %d é positivo", n3);
    } else {
        printf("O numero %d é negativo", n3);
    }

//Maior menor ou Igual 

    maior = n1;
    menor = n1;

    if (n2 > maior) {
        maior = n2;
    }
    if (n2 < menor) {
        menor = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    if (n3 < menor) {
        menor = n3;
    }
    printf("O maior número é %d.\n", maior);
    printf("O menor número é %d.\n", menor);

    return 0;
}