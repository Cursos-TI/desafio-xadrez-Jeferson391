#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() 
{

int MovimentoCompleto = 1;
int EscolhaUmMovimento;

    printf("1.Duas casas para Direita e uma para Cima \n");
        printf("2. Duas casas para Direita e uma para Baixo \n");
    
    printf("3. Duas casas para Cima e uma para Esquerda \n");
        printf("4. Duas casas para Cima e uma para Direita \n"); 

    printf("5. Duas casas para Baixo e uma para Direita \n");
        printf("Duas casas para Baixo e uma para Esquerda \n");

    printf("6. Duas casas para Esquerda e uma para Baixo \n");
        printf("7. Duas casas para Esquerda e uma para Cima \n");

    scanf("%d", &EscolhaUmMovimento);

switch(EscolhaUmMovimento)
{
case 1:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Direita \n");
            }
        printf("Cima \n");

    }
 break;
case 2:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Direita \n");
            }
        printf("Baixo \n");
    }
break;
case 3:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Cima \n");
            }
        printf("Esquerda \n");
    }
break;
case 4:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Cima \n");
            }
        printf("Direita \n");
    }
break;
case 5:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Baixo \n");
            }
        printf("Direita \n");
    }
break;
case 6:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Baixo \n");
            }
        printf("Esquerda \n");
    }
break;
case 7:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Esquerda \n");
            }
        printf("Cima \n");
    }
break;
case 8:
    while (MovimentoCompleto--);
    {
        for (int i = 0; i < 2; i++)
            {
                printf("Esquerda \n");
            }
        printf("Baixo \n");
    }
break;
}

return 0;
}
