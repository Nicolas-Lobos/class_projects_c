//library inclusions
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//file inclusion 
#include "eqs_velocidade.c"

//variable declarations
int choice;
// main function
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //program name declaration
    printf ("Este programa executa duas equações físicas\n");
    //user choice interaction
    printf ("(1) Função horária da Posição\n");
    printf ("(2) Função horária da Velocidade\n");
    printf ("(3) Sair do Sistema\n");
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
        case 3:
            //function call
            exit(1);
            break;
        default:
            printf("valor inválido\n\n");
            main ();
    }
    return 0;
}
