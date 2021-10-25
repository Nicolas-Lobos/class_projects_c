#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
    FILE *fp;
    char string[100];
    int rg;
    int i;

    fp=fopen("test.txt", "a");
    if (!fp){
        printf("Error");
        exit(0);
    }
    else{
        printf("Insira um nome:");
        gets(string);
        for(i=0; string[i]; i++)
        {
            putc(string[i], fp);
        }
    fprintf(fp, "\n");
    printf("\nInsira o RG:");
    scanf("%d", &rg);
    fprintf(fp, "%d\n", rg);
    fclose(fp);
    }
    return(0);
}

//[21:32, 19/10/2021] N Lobos: while ((c = getc(fp))!=EOF)
//[21:33, 19/10/2021] N Lobos: printf("%c", c)