/*
*Fa�a um proograma para exibir os 10 primeiros numeros
*depois modifique pra mostrar a posi��o dos impares
*altere para a estrutura anterior para realizar a soma
*dos numeros impares
*/

//library inclusions
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
//variable declarations are done inside the functions below


//main com exibi��o e soma dos impares at� a decima posi��o
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
        printf("%d� ->%d\n",i, impar);
        impar++;
        impar++;
        
    }
    printf("\n");
    // inutilizado, apenas alterei a posi��o da acumuladora no la�o do while
    //acumuladora = acumuladora - impar +1;
    printf("soma = %d ", acumuladora);
    getch();
}