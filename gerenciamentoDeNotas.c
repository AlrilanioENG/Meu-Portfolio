#include <stdio.h>
int main() {
 float nota1, nota2, media;
 char nome [50];
 int opcao;
 printf("Bem-vindo ao sistema de Gerenciamento de Notas!\n");
 printf("Digite o nome do aluno:\n");
 scanf("%s",nome);
 printf("Digite a opção desejada:\n");
 printf("1- Cadastrar Aluno\n");
 printf("2- Calcular Média\n");
 printf("3- Sair\n");
 scanf(" %d", &opcao);


switch (opcao)
{

case 1:
 printf("Cadastrar Aluno\n");
 printf("Digite o nome do aluno:\n");
 scanf("%s", nome);
 printf("Aluno %s cadastrado com sucesso!\n", nome);
 break;

case 2:
 printf("Calcular Média\n");
 printf("Digite a 1ª nota do aluno:\n");
 scanf("%f", &nota1);
 printf("Digite a 2ª nota do aluno:\n");
 scanf("%f", &nota2);

 media = (nota1 + nota2) / 2;

 if (media >= 7) {
  printf("Aluno %s aprovado com média %.2f\n", nome, media);
  } else {
   printf("Aluno %s reprovado com média %.2f\n", nome, media);
   break;
  }
case 3:
 printf("Saindo do sistema. Até logo!\n");
 break;
default:
 printf("Opção inválida! Por favor, selecione uma opção válida.\n");
 break;
}
return 0;
}