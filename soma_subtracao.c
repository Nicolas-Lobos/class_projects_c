#include <conio.h>
#include <stdio.h>

// declaração de variaveis
float a, b,  sum;
char c;

//program start
int main(){
    //user data input
    printf("Insira um numero:");
    scanf("%f",&a);
    printf("Insira o segundo numero:");
    scanf("%f",&b);
    printf("Deseja (+) Somar ou (-) Subtrair? digite o simbolo correspondente: ");
    scanf(" %c",&c);
    //decision structure
if (c == '+'){
        //data processing
        sum = a + b;
        //processed data output
        printf("%f",sum);
    }
    else if (c == '-'){
        //data processing
        sum = a - b;
        //processed data output
        printf("%f",sum);
    }
    else {
        //fail message
        printf("caractere invalido");
    }
    getch();
    return 0;
}