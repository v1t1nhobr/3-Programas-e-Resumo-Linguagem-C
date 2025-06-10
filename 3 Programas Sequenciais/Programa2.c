#include <stdio.h>

//Programa que pede os dados de nome, idade e altura.
int main(){
    char nome[50];
    int idade;
    float altura;

    printf("digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("\n..........Dados coletados..........\n");
    
    return 0;
}