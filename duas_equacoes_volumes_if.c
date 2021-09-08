//library inclusions
#include <stdio.h>
#include <conio.h>
#include <math.h>

///Função para o executar o calculo de volume de uma esfera
///Vol = (4/3)* Pi * R^3
void vol_esfera(){
    //local variable declaration based on the equation above
    float vol1, vol2, vol3, vf, r, value_pi;
    value_pi = 3.1416;
    //user data input
    printf("\n\nInsira o valor do Raio da esfera:\n");
    scanf("%f", &r);
    //data processing
    vol1 = (4 * value_pi);
    vol2 = pow(r,3);
    vol3 = (vol1 * vol2)/3;
    vf = vol1 * vol2;
    printf("\nVolume da esfera = %f", vf);
    getch();
    return;
}

///Função para executar o calculo de volume de um prisma de base retangular
///Vol = L*C*H
void vol_prisma(){
    // local variables declaration based on the equation above
    float vol, l, c, h;
    //user data input
    printf("\n\nInsira o valor da largura:\n");
    scanf("%f", &l);
    printf("\nInsira o valor da comprimento:\n");
    scanf("%f", &c);
    printf("\nInsira o valor da altura:\n");
    scanf("%f", &h);
    //data processing
    vol = l * c * h;
    //processed data output
    printf("\nVolume do Prisma = %f", vol);
    getch();
    return;
}

//variable declaration

//main function
main(){
    int choice;
    //program name declaration
    printf("Este programa executa equacoes de volume\n");
    printf("\nEscolha entre as opcoes abaixo e digite o numero correspondente:");
    //user name decision interaction
    printf("\nVolume de:\n(1)Esfera\n(2)Prisma\n");
    fflush(stdin);
    scanf("%d", &choice);
    //beginning of decision structure
    if (choice == 1){
        //function call
        vol_esfera();
    }
    else if (choice == 2){
        //function call
        vol_prisma();
    }
    else {
        //error message
        printf("Opcao invalida");
        printf("\n%s\n",choice);
        getch();
    }
}