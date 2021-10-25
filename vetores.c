//library inclusions
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//variable definitions
int i;
int k;
//vector definitions
int vector[5];
//main function
int main(){
    setlocale(LC_ALL, "Portuguese");
    k=0;
    fflush(stdin);
    for (i = 1; i<=5; i++){
    printf("Insira o valor do %dº elemento:\n",i);
    scanf("%d",&vector[k]);
    k++;
    }
    printf("\nPressione qualquer tecla para continuar...");
    getch();
    printf("\n\nOs valores digitados são:\n");
    for(k=0;k<5;k++){
        printf("\n\tValor de C[%d] = %d", k, vector[k]);
    }
    printf("\n\nPressione qualquer tecla para continuar...");
    getch();
}