#include <stdio.h>

int main()
{
    //receber dia e mes 
    //calcular quantos dias se passaram desde o inicio do ano
    //multiplica os meses passados por 30 e soma com os dias do mes atual
    int dia;
    int mes;
    printf("Infome a data do dia de hoje. (Ex: 01, 02, 15, 30): ");
    scanf("%d", &dia);
    
    printf("Informe a data do mes de hoje. (Ex: 01, 02, 09, 12): ");
    scanf("%d", &mes);
    
    int dias = (mes - 1) * 30 + dia;
    
    printf("Dias passados no ano: %d", dias);
    
    return 0;
}