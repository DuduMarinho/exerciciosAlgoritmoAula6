#include <stdio.h>

int main() {
    float matematica, ciencias, historia, media;

    printf("Digite sua média na disciplina de Matemática: ");
    scanf("%f", &matematica);

    printf("Digite sua média na disciplina de Ciências: ");
    scanf("%f", &ciencias);

    printf("Digite sua média na disciplina de História: ");    
    scanf("%f", &historia);

    media = (matematica + ciencias + historia)/3;

    if (media >= 6 && ciencias > 4 && historia > 4 && matematica >4){
        printf("Você está aprovado, sua média é %f.", media);
    } else {
        printf("Você foi reprovado. Não se mate, melhore!");
    }

}