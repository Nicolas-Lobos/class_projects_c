//library inclusions
#include <stdio.h>
#include <conio.h>
#include <locale.h>
//variable declaration
float a, b, sum;
char option;
char c;
//main declaration
int main(){
    setlocale(LC_ALL, "Portuguese");
    //beginnng of loop structure
    do{
        //user data input
        fflush(stdin);
        printf("Insira um numero:");
        scanf("%f",&a);
        printf("Insira o segundo numero:");
        scanf("%f",&b);
        // user choice interaction
        printf("Deseja (+) Somar ou (-) Subtrair? digite o simbolo correspondente: ");
        scanf(" %c",&c);
        //decision structure
        if (c == '+'){
            //data processing
            sum = a + b;
            //processed data output
            //flush to erase keyboard stored values
            fflush(stdin);
            printf("%f",sum);
            // user interaction
            printf("\nDeseja realizar outra operação 's' ou 'n'?\n");
            //read the user option 
            scanf("%c", &option);

        }
        else if (c == '-'){
            //data processing
            sum = a - b;
            //processed data output
            //flush to erase keyboard stored values
            fflush(stdin);
            printf("%f",sum);
            // user interaction
            printf("\nDeseja realizar outra operação 's' ou 'n'?\n");
            //read the user option 
            scanf("%c", &option);

        }
        else {
            //fail message
            //flush to erase keyboard stored values
            fflush(stdin);
            printf("caractere invalido");
            //user interaction
            printf("\nDeseja tentar denovo? 's' ou 'n'?\n");
            //read the user option 
            scanf("%c", &option);
        }
        
    
    }
    //loop condition 
    while (option != 'n');
    
return 0;
}