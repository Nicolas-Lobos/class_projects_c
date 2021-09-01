#include <conio.h>;
#include <stdio.h>;

// declaração de variaveis
float A, B;

main()
{
    //Declaração do programa
    printf("Este programa faz a comparacao entre 2 numeros e exibe o maior\n");
    printf("=================================================================");
    printf("\n\nInsira o primeiro valor:\n");
    scanf("%f", &A);
    printf("Insira o segundo valor:\n");
    scanf("%f", &B);
    if (A>B){
        printf("\n%f é maior que %f", A, B);
    }
    if(A<B){
        printf("\n%f é maior que %f", B, A);
    }
    if (A==B){
        printf("\n%f é = a %f", A, B);
    }
    getch();
    }