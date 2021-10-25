#include <stdio.h>
#include <conio.h>

main()
{ 
    char A;
    char B[5];
    int V;
    int X[5];
    float Y;    
    float W[5];  
    long double K,Z[5];          
    printf("Tamanho de Bytes de A =  %d \n Tamanho de Bytes do vetor B =  %d  \n", sizeof(A), sizeof(B));
    printf("Tamanho de Bytes de v =  %d \n Tamanho de Bytes do vetor X =  %d  \n", sizeof(V), sizeof(X));
    printf("Tamanho de Bytes de Y =  %d \n Tamanho de Bytes do vetor W =  %d  \n", sizeof(Y), sizeof(W)); 
    printf("Tamanho de Bytes de K =  %d \n Tamanho de Bytes do vetor Z =  %d  \n", sizeof(K), sizeof(Z));          
    getch();
}
