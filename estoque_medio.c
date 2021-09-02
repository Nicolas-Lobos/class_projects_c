//library inclusions
#include <conio.h>;
#include <stdio.h>;

//variable declaration
float EstMin, EstMax, EstMed;
//main function
main()
{
    //program name
    printf("Este programa calcula estoque médio");
    printf("\n===================================");
    printf("\n");

    //user data input
    printf("Insira o valor minimo de estoque do item:\n");
    scanf("%f", &EstMin);
    printf("Insira o valor minimo de estoque do item:\n");
    scanf("%f", &EstMax);

    //data processing
    EstMed=(EstMin+EstMax)/2;

    //processed data output
    printf("O seu estoque médio é: %f", EstMed);
}
