//library inclusions
#include <conio.h>;
#include <stdio.h>;

// develop a program that will show if a student
// needs to take a new test, or has passed or failed the year
//base on <5 = failed, beetween 5 and 7 = new test and >7 = passed

//Variables used
float Nota1, Nota2, Media;
// main function
main()
{
    //Program name declaration
    printf("Este programa faz a media e diz se passa, nao passa ou faz prova");
    printf("\n================================================================");
    printf("\n");

    //user data inputs
    printf("Insira sua primeira nota:\n");
    scanf("%f", &Nota1);
    printf("Insira sua segunda nota:\n");
    scanf("%f", &Nota2);

    //user data processing
    Media = (Nota1 + Nota2)/2;
    //decision structure
    if(Media<5){
        //data output
        printf("Sua média é: %f e vc foi reprovado", Media);
    }
    else if(Media>7){
        //data output
        printf("Sua média é: %f e vc foi aprovado", Media);
    }
    else if(Media>=5 && Media<7){
        //data output
        printf("Sua média é: %f e vc vai fazer prova dnv", Media);
    }
    else{
        //error message
        printf("Erro");
    }
    }