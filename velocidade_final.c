#include <conio.h>
#include <stdio.h>
#include <math.h>
// Criar um programa que resolva a equação de torricelli, utilizando sua formula
// Vulgo vovô e vovó + dois anões num triângulo sexual
// V²=V0+2a.▲S
// ▲S = Sf-S0

// declaração de variaveis

float x, sf, so, a, vo, s;
float v;
main ()
{
    //nomeação do programa
    printf("Equacao de Torricelli\n");
    printf("----------------------");
    //input de dados do usuário
    printf("\n Por gentileza, insira a velocidade inicial (V0):");
    scanf("%f", &vo);

    printf("\n Por gentileza, insira a aceleracao (a):");
    scanf("%f", &a);

    printf("\n Por gentileza, insira a distancia inicial (S0):");
    scanf("%f", &so);

    printf("\n Por gentileza, insira a distancia final (S)");
    scanf("%f", &sf);

    //processamento dos dados
    
    //delta de distancia
    s = (sf - so);
    
    x = (2 * a * s);
    v = sqrt(vo + x) ;
    

    printf("\n O resultado para a Velocidade Final e: %f", v);

}
