#include <conio.h> 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include "cuboext.c"
#include "prismaext.c"

main (){
    setlocale(LC_ALL, "Portuguese");
    int option;
    printf ("deseja calcular o volume de um:\n");
    printf ("(1) CUBO (2) PRISMA\n");
    scanf ("%d", &option);
    switch(option) 
    {
    case 1: /* constant-expression */
        vol_cubo();
        break;
    
    case 2:
        vol_prisma();
        break;
    
    default:
        printf("opção inválida");
    }
    
}