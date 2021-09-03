//library inclusions
#include <conio.h>
#include <stdio.h>
//file inclusion 
#include "eqs_velocidade.c"

//variable declarations
int choice;
// main function
int main()
{
    //program name declaration
    printf ("Este programa executa duas equacoes fisicas\n");
    //user choice interaction
    printf ("(1) Função horaria da Posição\n");
    printf ("(2) Função horaria da Velocidade\n");
    printf ("Digite o numero desejado\n");
    scanf("%d", &choice);
    //beginning of choice structure 
    switch(choice) {
        case 1:
            //function call
            pos_final();
            break;
        case 2:
            //function call
            vel_final();
            break;
        default:
            printf("valor inválido");
    }
    return 0;
}
