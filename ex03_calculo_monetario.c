#include <stdio.h>

int main()
{
    //pao frances = (R$0,12)
    //broa = (R$1,50)
    //CALCULAR valor total arrecadado
    //10% do total (Poupança)
    float valorpaes = (0.12);
    float valorbroa = (1.50);
    
    int qtpaes;
    printf("Quantos PÃES foram vendidos? :");
    scanf("%d", &qtpaes);
    
    int qtbroas;
    printf("Quantas BROAS foram vendidos? :");
    scanf("%d", &qtbroas);
    
    float total = (qtpaes * valorpaes) + (qtbroas * valorbroa);
    float poupanca = total * (0.10);

    printf("O valor total recebido hoje foi: %.2f E a poupança rendeu: : %.2f", total, poupanca);

    return 0;
}