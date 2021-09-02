#include <stdio.h>
#include <conio.h>



int main(){

    float a, b, sum;
    char option;
    char c;
    //user data input
    //begging of loop structure
    
    
    do{
        //char option[1] = "n";
        fflush(stdin);
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
        //flush to erase keyboard stored values
            fflush(stdin);
            printf("%f",sum);
        // user interaction
            printf("\nDeseja realizar outra operação 's' ou 'n'?\n");
        //read the user option 
            scanf("%c", &option);
            //printf("%c", option);
        }
        else if (c == '-'){
        //data processing
            sum = a - b;
        //processed data output
        //flush to erase keyboard stored values
            fflush(stdin);
            printf("%f",sum);
            printf("\nDeseja realizar outra operação 's' ou 'n'?\n");
            scanf("%c", &option);
            //printf("%c", option);
        }
        else {
        //fail message
        //flush to erase keyboard stored values
            fflush(stdin);
            printf("caractere invalido");
            printf("\nDeseja tentar denovo? 's' ou 'n'?\n");
            scanf("%c", &option);
            //printf("%c", option);
        }
        
    //loop condition 
    } 
    while (option != 'n');
    

}