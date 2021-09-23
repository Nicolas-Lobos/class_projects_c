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
    int i;
    int acumuladora = 0;
    int impar = 1;
    
    for (i = 1; i<=10; i++) {
        acumuladora = acumuladora + impar;
        printf("%dº ->%d\n",i, impar);
        impar++;
        impar++;
        
    }
    printf("\n");
    // inutilizado, apenas alterei a posição da acumuladora no laço do while
    //acumuladora = acumuladora - impar +1;
    printf("soma = %d ", acumuladora);
    getch();
}