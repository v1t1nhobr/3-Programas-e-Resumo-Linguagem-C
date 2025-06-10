#include <stdio.h>

//Sistema sequencial que calcula Notas

int main(){
    float n1, n2, n3, mediafinal;
    
    printf("Digite a prmeira nota: \n");
    scanf("%f", &n1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);

    mediafinal = (n1 + n2 + n3) /3;
    printf("Sua media final foi: \n", mediafinal);
    
    return 0;
}