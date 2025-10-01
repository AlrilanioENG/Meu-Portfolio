#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
   
    int computador;
    int jogador;

    computador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3
    printf("Bem vindo ao Jokenpô!\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1- Pedra\n");
    printf("2- Papel\n");
    printf("3- Tesoura\n");
    printf("Digite sua opção: ");
    scanf("%d", &jogador);
    
    printf("Você escolheu a opção %d\n", jogador);
    printf("O computador escolheu a opção %d\n", computador);

    if (jogador == computador) {
     printf("Empate!\n");
    } else if (jogador == 1 && computador == 3){
     printf("Você ganhou! Pedra ganha de Tesoura.\n");
    } else if (jogador == 2 && computador == 1){
     printf("Você ganhou! Papel ganha de Pedra.\n");
    } else if (jogador == 3 && computador == 2){
     printf("Você ganhou! Tesoura ganha de Papel.\n");
    }  else {
     printf("Você perdeu! Tente novamente.\n");
    }
    return 0;
   }