#include <stdio.h>

int main()
{
        float base;
        float altura;
        
        printf("Informe a base do retangulo: ");
        scanf("%f", &base);
        
        printf("Digite a altura do retangulo: ");
        scanf("%f", &altura);
        
        float area = base * altura ;
         
        printf("A area do retangulo é de: %.2f", area);

    return 0;
}