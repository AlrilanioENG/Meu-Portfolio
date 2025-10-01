#include <stdio.h>
#include <stdlib.h> //canivete suíço das bibliotecas C, contendo ferramentas essenciais que a maioria dos programas C precisa para realizar tarefas básicas de manipulação de dados e interação com o sistema operacional.
#include <time.h> //tempo

int main () {

 int opcao;
 int numeroSecreto, palpite;

 printf("Bem vindo ao Menu do jogo!\n");
 printf("Escolha uma das opções abaixo:\n");
 printf("1- Iniciar Jogo\n");
 printf("2- Ver regras do jogo\n");
 printf("3- Sair do jogo\n");
      printf("Digite a opção desejada:\n");    
      scanf("%d", &opcao);  
      //escolha do usuário 
 switch (opcao) {
  case 1:
  srand(time(0)); // Inicializa o gerador de números aleatórios
  numeroSecreto = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
  printf("Número secreto gerado! Tente adivinhar o número entre 1 e 10:\n");
scanf("%d", &palpite);

if (palpite == numeroSecreto) {
 printf("Parabéns! Você acertou o número secreto!\n");
  printf("O número secreto era %d.\n", numeroSecreto);
  
  } else {
   printf("Você errou! O número secreto era %d \n", numeroSecreto);
  }
 break;
 }}
