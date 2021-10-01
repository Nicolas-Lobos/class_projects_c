#include <conio.h>
#include <stdio.h>
#include <locale.h>
//variable declaration
float a, b, x;

//main function
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    printf("Insira um numero: ");
    scanf("%f",&a);
    printf("Insira o segundo numeros: ");
    scanf("%f",&b);
    x = a + b;
    if (x >= 10){
        x = x + 5;
        printf("A soma + 5 e a = %f",x);
    }
    else {
        x = x - 7;
        printf("A soma - 7 e a = %f",x);
    }
    getch();
    return 0;
}
