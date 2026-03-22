#include <stdio.h>

int main()
{
    //preço do kg da comida (R$12,00)
    //pegar o peso do prato do cliente e descobrir o valor a pagar (peso total - tara do prato (2.0 kg))
    //calculo seria (kg da comida * peso total do cliente)
    //imprimir o preço do prato

    float preco_comida = 12.00;
    float peso_total;
    
    printf("Digite o peso que deu na balança: ");
    scanf("%f", &peso_total);
    
    float peso_da_comida = peso_total - 2.0;
    float valor_do_prato = preco_comida * peso_da_comida;
    
    printf("R$%.2f esse foi o valor do prato.", valor_do_prato);
    
    return 0;
}