#include <conio.h>;
#include <stdio.h>;

/*desenvolver um sistema para que o calculo do salario dos funcionarios seja aumentado 
com base na profissão deles

Utilize Gerente, Técnico, Auxiliar e Outros

Tecnicos e Auxiliares terão aumento de 150%
Gerentes terão aumento de 130%
Outros terão aumento de 110%
*/


//Variables Declaration
int profession;
float salary, salary_aj;

//main function
main(){
    //Program name declaration
    printf("Este Programa calcula salario ajustado\n");
    printf("======================================\n");
    
    //user data input
    printf("Escolha a sua profissao abaixo\n utilizando o numero correspondente:");
    printf("\n\n");
    printf("(1) - Técnico ou Auxiliar\n");
    printf("(2) - Gerente\n");
    printf("(3) - Outros\n");
    scanf("%d", &profession);
    printf("Insira seu salario atual:");
    scanf("%f", &salary);

    //choice structure
    switch (profession)
    {
        //data processing
        case 1:
        salary_aj = salary*1.5;

        //processed data output 
        printf("Salario Ajustado: %f", salary_aj);
        break;
        
        //data processing
        case 2:
        salary_aj = salary*1.3; 
        
        //processed data output
        printf("Salario Ajustado: %f", salary_aj);
        break;
        
        //data processing
        case 3:
        salary_aj = salary*1.1;
        
        //processed data output
        printf("Salario Ajustado: %f", salary_aj); 
        break;
        
        //error message if wrong number selected
        default:
        printf("Digito invalido");
    }
    getch();
    return 0;
}