#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
// Criar um programa que resolva a equação de torricelli, utilizando sua formula
// Vulgo vovô e vovó + dois anões num triângulo sexual
// V²=V0+2a.▲S
// ▲S = Sf-S0
//main function
///função que executa o calculo de torricelli
void Torricelli()
{
    setlocale(LC_ALL, "Portuguese");
    float x, sf, so, a, vo, s;
    float v;
    //nomeação do programa
    printf("Equa��o de Torricelli\n");
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
    getch();
}
///função para executar o calculo da equação de posição final
/// S = S0 + V * T
void pos_final(){
    setlocale(LC_ALL, "Portuguese");
    //S = S0 + v*t
    //variable declarations
    float so, sf, v, t;
    //program namde declaration
    printf("\nFuncao horaria da posicao");
    //user data inputs
    printf("\n\nInsira a posi��o inicial (S0): ");
    scanf("%f", &so);
    printf("\nInsira o valor da velocidade (m/s): ");
    scanf("%f", &v);
    printf("\nInsira o valor do tempo decorrido (s): ");
    scanf("%f", &t);

    //data processing
    sf= so + (v*t);

    //processed data output
    printf("\nPosi��o final = %f", sf);
    getch();
}
///função para executar o calculo da equação de velocidade final
///V = V0 + A * T
void vel_final(){
    setlocale(LC_ALL, "Portuguese");
    //variable declaration
    float v, v0, a, t;
    //program name declaration
    printf("\nFun��o hor�ria da Velocidade");
    //user data inputs
    printf("\n\nInsira a velocidade inicial (S0): ");
    scanf("%f", &v0);
    printf("\nInsira o valor da acelera��o (m/s): ");
    scanf("%f", &a);
    printf("\nInsira o valor do tempo decorrido (s): ");
    scanf("%f", &t);

    //data processing
    v = v0 + (a * t);
    printf("\nVelocidade final = %f", v);
    getch();
}