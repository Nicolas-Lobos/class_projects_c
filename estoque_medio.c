#include <conio.h>;
#include <stdio.h>;

// declaração de variaveis

float EstMin, EstMax, EstMed;

main()
{
    //Declaração do programa
    printf("Este programa calcula estoque médio");
    printf("\n===================================");
    printf("\n");

    //input de dados do usuário
    printf("Insira o valor minimo de estoque do item:\n");
    scanf("%f", &EstMin);
    printf("Insira o valor minimo de estoque do item:\n");
    scanf("%f", &EstMax);

    //processamento de dados do usuário
    EstMed=(EstMin+EstMax)/2;

    //exibição de dados processados

    printf("O seu estoque médio é: %f", EstMed);
}
