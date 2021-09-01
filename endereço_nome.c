#include <conio.h>
#include <stdio.h>

//nome(x) rua(x) numero(x) bairro(x) cep(x) cidade(x)

char nome[200];
char rua[200];
char cidade[200];
char bairro[200];
int numero;
int cep;

main()
{
    //descrição do programa
    printf("Este programa cadastra seus dados de endereco!\n");

    //entrada de dados pelo usuário
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

    //exibição de dados do usuário formatado
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

