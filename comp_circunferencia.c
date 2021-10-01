#include <conio.h>
#include <stdio.h>
#include <locale.h>

// Escreva um algoritmo para calcular e exibir o comprimento de uma circunferência
// sendo dada o valor de seu raio. C=2πR. O valor de pi pode ser arredondado para 3,1415.

// Variable declaration
float comprimento, r;
double value_pi;
//main function
main() {
    setlocale(LC_ALL, "Portuguese");
    //pi declaration
    value_pi = (3.1415);
    //program Declaration
    //user data input
    printf("Este programa realiza o calculo da circunferencia");
    printf("\n");
    printf("Insira o valor do raio (R)\n");
    scanf("%f", &r);
    //data processing
    comprimento = 2*r*value_pi;
    //processed data output
    printf("Circunferencia:\n %f", comprimento);

    getch();
}