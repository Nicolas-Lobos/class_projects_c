#include <conio.h> 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void vol_cubo(){
    float vol, a;
    setlocale(LC_ALL, "Portuguese");
    printf ("\nINSIRA O VALOR DA ARESTA DO CUBO\n");
    scanf("%f",&a);

    // processamento de dados
    vol = pow(a,3);

    printf ("\n\nO VOLUME DO CUBO É %.2f", vol);
    getch();
}
