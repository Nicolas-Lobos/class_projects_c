#include <conio.h> 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void vol_prisma(){
    float vol, b, h ,l;
    setlocale(LC_ALL, "Portuguese");
    printf ("\nINSIRA O VALOR DA BASE DO PRISMA\n");
    scanf("%f",&b);
    printf ("\nINSIRA O VALOR DA LARGURA DO PRISMA\n");
    scanf("%f",&l);
    printf ("\nINSIRA O VALOR DA ALTURA DO PRISMA\n");
    scanf("%f",&h);

    // processamento de dados
    vol = b * h * l;

    printf ("\n\nO VOLUME DO PRISMA É %f", vol);
    getch();
}
