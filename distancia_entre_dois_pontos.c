#include <conio.h>
#include <stdio.h>
#include <math.h>

// Desenvolva um programa que realize o calculo de distancia entre dois pontos quaisquer
// em um plano cartesiano, utilizando a formula abaixo
// sqrt((x1-x2)²+(y1-y2)²)

// declaração de variaveis

float x, x2, xf, y, y2, yf, d;

main ()
{   //nomeação do Programa
    printf("Este programa calcula a distância entre dois pontos");
    printf("\n================================");
    printf("\n");

    //Input de dados do usuário
    printf("Insira o primeiro ponto x:\n");
    scanf("%f", &x);
    printf("\n");
    printf("Insira o segundo ponto x:\n");
    scanf("%f", &x2);
    printf("\n");
    printf("Insira o primeiro ponto y:\n");
    scanf("%f", &y);
    printf("\n");
    printf("Insira o segundo ponto y:\n");
    scanf("%f", &y2);
    printf("\n");

    //processamento
    xf = pow((x - x2),2);
    yf = pow((y - y2),2);
    
    d = sqrt(xf + yf);

    //exibição de dados processados
    printf("Distancia D e:%f", d);
    }
