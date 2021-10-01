//library inclusions
#include <stdio.h>
#include <conio.h>
#include <locale.h>

//variable declaration
int p1, p2, p3, p4, media, media2;

//main function
main()
{
    setlocale(LC_ALL, "Portuguese");
    //program name declaration
    printf("Este Algoritmo faz a media dos alunos");
    printf("\n Insira a sua primeira nota:");
    //user data inputs
    scanf("%d", &p1);
    printf("\n Insira a sua segunda nota:");
    scanf("%d", &p2);
    printf("\n Insira a sua terceira nota:");
    scanf("%d", &p3);
    printf("\n Insira a sua quarta nota:");
    scanf("%d", &p4);

    //data processing
    media=(p1 + p2 + p3 + p4)/4;

    //processed data output
    printf("A sua media foi:%d", media);
    getch();
}
