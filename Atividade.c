#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	//DECLARANDO AS VARIAVEIS 
	int opcao, idade, telefone;
	char email[200],nome[200];
	
	setlocale(LC_ALL,"");//CONFIGURA A ESCRITA PARA O IDIOMA LOCAL 
	
	printf("\n\t===> ATIVIDADE SENAI DENDEZEIRO <===\n");
	
	//PEDINDO AS INFORMAÇÕES PARA O USUARIOS DIGITAR
	printf("Digite o seu Nome: ");
	scanf("%s",&nome);
	printf("Digite sua Idade: ");
	scanf("%d",&idade);
	printf("Digite seu E-mail: ");
	scanf("%s",&email);
	printf("Digite seu Telefone: ");
	scanf("%d",&telefone);			
	
	system("cls||clean");//APAGAR AS INFORMAÇÕES ANTERIORES 
	
		//TABELA DAS INFORMAÇÕES QUE O USUÁRIO DESEJA VIZUALIZAR
		printf("Código\t  |\t Descrição \n");
		printf("\t1 |\t Exibir o Nome e Idade \n");
		printf("\t2 |\t Exibir o Nome e E-mail \n");
		printf("\t3 |\t Exibir o Nome e Telefone \n");
		printf("\t4 |\t Exibir Todas as Informações \n");
		printf("\t0 |\t Sair do Programa \n");	
		
			//INICIO DO LAÇO DE REPETIÇÃO DO WHILE
	do{
	
	setlocale(LC_ALL,"");
	//INICIO DA VARIAVEL 'OPÇÃO'
	printf("\nDigite a Opção Desejada: ");
	scanf("%d",&opcao);
		
		//INICIO DO ESTRUTURA DE REPETIÇÃO SWITCH CASE 
		switch (opcao){
			case 0:
				printf("Operação Finalizada\n");
				break;
			
			case 1:
				printf("Nome Informado: %s\n",nome);
				printf("Idade Informada: %d\n",idade);
				break;
			
			case 2:
				printf("Nome Informado: %s\n",nome);
				printf("E-mail Informado: %s\n",email);
				break;
				
			case 3:
				printf("Nome Informado: %s\n",nome);
				printf("Telefone Informado: %d\n",telefone);
				break;
				
			case 4:
				printf("Nome Informado: %s\n",nome);	
				printf("Idade Informada: %d\n",idade);
				printf("E-mail Informado: %s\n",email);
				printf("Telefone Informado: %d\n",telefone);
				break;
			
			default:
				//CASO CONTRARIO VOLTAR PARA A OPÇÃO ATE QUE ESTEJA CORRETA ATRAVÉZ DA ESTRUTURA DE REPETIÇÃO IF
				if(opcao<0&&opcao!=4){
					//RETORNO A OPÇÃO
					printf("Digite a Opção Desejada: ");
					scanf("%d",&opcao);
					break;
				}		
		}
				//FIM DO LAÇO DE REPETIÇÃO
					
		}	while(opcao!=0&&opcao>4);
			
		
		
		
return 0;	
}
