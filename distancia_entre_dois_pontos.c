//library inclusion
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Desenvolva um programa que realize o calculo de distancia entre dois pontos quaisquer
// em um plano cartesiano, utilizando a formula abaixo
// sqrt((x1-x2)²+(y1-y2)²)

//variable declaration

float x, x2, xf, y, y2, yf, d;
//main function
int main (){
       //program name
    setlocale(LC_ALL, "Portuguese");
    printf("Este programa calcula a distância entre dois pontos");
    printf("\n================================");
    printf("\n");

    //user data input
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

    //data processing
    xf = pow((x - x2),2);
    yf = pow((y - y2),2);
    
    d = sqrt(xf + yf);

    //processed data output
    printf("Distancia D e:%f", d);
    
return 0;
}
