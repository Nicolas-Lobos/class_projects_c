//library inclusions
#include<conio.h>
#include<stdio.h>
#include<locale.h>
//main function
main() {
    setlocale(LC_ALL, "Portuguese");
    //variable declaration
    int x, y, z;
    //user data input
    printf("Insira um numero:\n");
    scanf("%d", &x);
    printf("Insira um numero:\n");
    scanf("%d", &y);
    //data processing
    z = x + y;
    //processed data output
    printf("O resultado da soma entre eles e:%d",z);
    
}