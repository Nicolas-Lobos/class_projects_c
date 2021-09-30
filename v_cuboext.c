#include <conio.h> 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include "cuboext.c"
// fazer um programa para calcular o volume do cubo antes, depois e em arquivo separado


main (){
    setlocale(LC_ALL, "Portuguese");
    int option;
    printf ("deseja calcular o volume de um cubo?\n");
    printf ("(1)SIM (2) NAO\n");
    scanf ("%d", &option);
    if (option == 1){
        vol_cubo();
    }
    else{
        exit(1);
    }
}
