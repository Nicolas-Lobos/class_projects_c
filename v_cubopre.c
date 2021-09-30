#include <conio.h> 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// fazer um programa para calcular o volume do cubo antes, depois e em arquivo separado

float vol, a;

void vol_cubo(){
    setlocale(LC_ALL, "Portuguese");
    printf ("\n\nINSIRA O VALOR DA ARESTA DO CUBO");
    scanf("%f",&a);

    // processamento de dados
    vol = pow(a,3);

    printf ("\n\nO VOLUME DO CUBO É %f", vol);
    getch();
}

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
