/*
*Faça um proograma para exibir os 10 primeiros numeros
*depois modifique pra mostrar a posição dos impares
*altere para a estrutura anterior para realizar a soma
*dos numeros impares
*/

//library inclusions
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
//variable declarations are done inside the functions below


//main com exibição e soma dos impares até a decima posição
main(){
    //language correction
    setlocale(LC_ALL, "Portuguese");
    //program statement
    printf("este programa faz usa do while para exibir 10 numeros\n");
    int i = 1;
    int pos = 1;
    int soma = 1;
    do{
        
        printf("%dº \t-> %d\n", pos, i);
        printf("\n");
        printf("\n");
        printf("soma= %d\n\n", soma);
        pos++;
        i = i+2;
        soma = soma + i;
        
    }
    while (pos<=10);
    soma = soma - i;
    printf ("\n\na soma é = %d", soma);
    getch();
}

//main com exibição de 10 numeros
/*
main(){
    //language correction
    setlocale(LC_ALL, "Portuguese");
    //program statement
    printf("este programa faz usa do while para exibir 10 numeros\n");
    int i = 0;
    do{
        printf("%d\n", i);
        i++;
    }
    while (i<=10);
    getch();
    
}
*/