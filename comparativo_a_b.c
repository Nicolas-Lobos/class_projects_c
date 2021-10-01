#include <conio.h>;
#include <stdio.h>;
#include <locale.h>;
//variable declaration
float A, B;
//main function
main()
{
    setlocale(LC_ALL, "Portuguese");
    //program declaration
    printf("Este programa faz a comparacao entre 2 numeros e exibe o maior\n");
    printf("=================================================================");
    // user data input
    printf("\n\nInsira o primeiro valor:\n");
    scanf("%f", &A);
    printf("Insira o segundo valor:\n");
    scanf("%f", &B);
    //decision structure for data processing
    if (A>B){
        //processed data output
        printf("\n%f é maior que %f", A, B);
    }
    if(A<B){
        //processed data output
        printf("\n%f é maior que %f", B, A);
    }
    if (A==B){
        //processed data output
        printf("\n%f é = a %f", A, B);
    }
    getch();
    }