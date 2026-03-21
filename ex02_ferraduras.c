#include <stdio.h>

int main()
{
        //receba numero de cavalos
        //multiplica por 4 
        //resultado = total de ferraduras
        int cavalos;
        printf("Informe o numero de cavalos para saber quantas ferraduras serão necessarias: ");
        scanf("%d", &cavalos);
        
        int ferraduras = cavalos * 4 ;
        
        printf("Total de ferraduras necessarias: %d", ferraduras);

    return 0;
}