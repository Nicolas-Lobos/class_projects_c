#include <stdio.h>
#include <conio.h>

int p1, p2, p3, p4, media, media2;


main()
{

    printf("Este Algoritmo faz a media dos alunos");
    printf("\n Insira a sua primeira nota:");
    //entrada de dados do usu�rio
    scanf("%d", &p1);
    printf("\n Insira a sua segunda nota:");
    scanf("%d", &p2);
    printf("\n Insira a sua terceira nota:");
    scanf("%d", &p3);
    printf("\n Insira a sua quarta nota:");
    scanf("%d", &p4);

    //equa��o para a m�dia do usuario
    media=(p1 + p2 + p3 + p4)/4;

    //exibi��o da m�dia do usu�rio
    printf("A sua media foi:%d", media);
    getch();
}

//nome rua numero bairro cep cidade
