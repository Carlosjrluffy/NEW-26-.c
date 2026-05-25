#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int escolhajogador, escolhacomputador;
  srand(time(0));

    printf("*JOGO DE JOKENPÔ*\n");
    printf("|Escolha uma opção: \n");
    printf("1. Pedra\n");
    printf("2.Papel\n");
    printf("3.Tesoura\n");
    printf("Escolha: \n");
    scanf("%d", &escolhajogador);

    // Validação da escolha do jogador antes de continuar
    if (escolhajogador < 1 || escolhajogador > 3) {
        printf("Escolha inválida. O programa será encerrado.\n");
        return 0; // Encerra o programa aqui se a entrada for inválida
    }
    escolhacomputador = rand() %3 +1;

    switch (escolhajogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;   
    }

     switch (escolhacomputador)
    {
    case 1:
        printf("computador: Pedra ");
        break;
    case 2:
        printf("computador: Papel ");
        break;
    case 3:
        printf("computador: Tesoura ");
        break;   
    }

    // Verifica o resultado do jogo 
    if(escolhajogador == escolhacomputador)
    {
        printf("### Você empatou! ###\n");

    } else if ((escolhajogador == 1) && (escolhacomputador == 3) || (escolhajogador == 2) && (escolhacomputador == 1) || (escolhajogador == 3) && (escolhacomputador == 2))
    {
        printf("### Você Ganhou! ###\n");
        
    } else {
        printf("### Você perdeu! ###\n");
    }
        
    
    
    return 0;
}
