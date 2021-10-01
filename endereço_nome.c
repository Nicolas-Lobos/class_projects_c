//library inclusions
#include <conio.h>
#include <stdio.h>
#include <locale.h>

//nome(x) rua(x) numero(x) bairro(x) cep(x) cidade(x)

// variable declaration
char nome[200];
char rua[200];
char cidade[200];
char bairro[200];
int numero;
int cep;

main()
{
    setlocale(LC_ALL, "Portuguese");
    //program name
    printf("Este programa cadastra seus dados de endereco!\n");

    //user data inputs
    printf("Por gentileza, insira seu nome:\n");
    gets(nome);

    printf("Por gentileza, insira sua rua:\n");
    gets(rua);

    printf("Por gentileza, insira o numero da sua casa:\n");
    scanf("%d",&numero);

    printf("Por gentileza, insira o seu cep:\n");
    scanf("%d",&cep);

    /* usado para limpar info armazenada no teclado
    *  porque o se não o codigo pula a parte do bairro,
    *  pois ja existe um enter pressionado.
    */
    fflush(stdin);

    printf("Por gentileza, insira o seu bairro:\n");
    gets(bairro);

    printf("Por gentileza, insira sua cidade:\n");
    gets(cidade);

    //data output
    printf("\n");
    printf("o nome do usuario e: %s", nome);
    printf("\n");
    printf("reside no endereco: %s", rua);
    printf("\n");
    printf("na casa: %d",numero);
    printf("\n");
    printf("no bairro: %s",bairro);
    printf("\n");
    printf("no cep: %d",cep);
    printf("\n");
    printf("na cidade:%s",cidade);
    getch();
}

