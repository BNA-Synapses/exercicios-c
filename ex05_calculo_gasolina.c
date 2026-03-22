#include <stdio.h>

int main()
{
    //Coletar o valor desejado
    //sabendo que o valor da gasolina é de (1 Litro = R$6,46)
    //calculo matematico seria (valor desejado / preço da gasolina = Litros possiveis)
    //imprimir a quantidade em litros disponiveis
    float valor_gasolina = 6.46;
    float valor_desejado;
    printf("Insira quantos R$ deseja abastecer e te informo a quantidade em Litros de gasolina: ");
    scanf("%f", &valor_desejado);
    
    float quantidade_litros = valor_desejado / valor_gasolina;
    
    printf("O valor de R$%.2f abasteceu %.2f Litros.", valor_desejado, quantidade_litros);
    
    return 0;
}