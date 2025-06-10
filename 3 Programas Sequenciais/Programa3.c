#include <stdio.h>

//Calcula a area de um triangulo sequencialmente
int main(){
    float base, altura, area;

    printf("Digite a a base do triangulo: (cm) \n");
    scanf("%f", &base);

    printf("Digite a a altura do triangulo: (cm) \n");
    scanf("%f", &altura);

    area = base * altura;
    printf("A area do triangulo e: %.2f (cm) \n", area);

    return 0;
}