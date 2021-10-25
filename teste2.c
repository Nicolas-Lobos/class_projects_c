#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char str1[1024];
char str2[1024];

int main(){
    printf("insira a str1\n");
    gets(str1);

    printf("insira a str2\n");
    gets(str2);

    strcat(str1,str2);

    printf("\n%s",str1);
    system("pause");
}