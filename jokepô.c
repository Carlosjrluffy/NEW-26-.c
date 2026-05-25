#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;
    int numerosecreto, palpite;

    printf("*Menu Principal*\n");
    printf("1. Iniciar o game\n");
    printf("2.Ver Regras\n");
    printf("3.Sair\n");
    printf("Escolhar uma opção: ");
    scanf("%d", &opcao);


    switch (opcao)
    {
     case 1: 
        srand(time(0));
        numerosecreto = rand() %10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        if (numerosecreto == palpite)
        {
            printf("Você acertou.\n");
            printf("Numero secreto %d", numerosecreto);
        }
        else{
            printf("você errou.\n");
            printf("Numero secreto %d", numerosecreto);
        }       
        break;
        case 2:
            printf("A explicação das regras.\n");
        break;
        case 3:
            printf("Saindo do game.\n");
        break;
    
        default:
        printf("Opção invalida!\n");
        break;
    }
   



}
