#include <stdio.h>

int main()
{
    //leitura de nome e idade
    //calcular dias de vida (idade * 365)
    //imprimir os dias vividos pela pessoa
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    int dias = idade * 365;
    
    printf("%s ja viveu %d dias!!", nome, dias);
    
    return 0;
}