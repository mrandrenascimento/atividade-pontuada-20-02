#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	//DECLARANDO AS VARIAVEIS 
	int opcao, idade, telefone;
	char email[200],nome[200];
	
	setlocale(LC_ALL,"");//CONFIGURA A ESCRITA PARA O IDIOMA LOCAL 
	
	printf("\n\t===> ATIVIDADE SENAI DENDEZEIRO <===\n");
	
	//PEDINDO AS INFORMA��ES PARA O USUARIOS DIGITAR
	printf("Digite o seu Nome: ");
	scanf("%s",&nome);
	printf("Digite sua Idade: ");
	scanf("%d",&idade);
	printf("Digite seu E-mail: ");
	scanf("%s",&email);
	printf("Digite seu Telefone: ");
	scanf("%d",&telefone);			
	
	system("cls||clean");//APAGAR AS INFORMA��ES ANTERIORES 
	
		//TABELA DAS INFORMA��ES QUE O USU�RIO DESEJA VIZUALIZAR
		printf("C�digo\t  |\t Descri��o \n");
		printf("\t1 |\t Exibir o Nome e Idade \n");
		printf("\t2 |\t Exibir o Nome e E-mail \n");
		printf("\t3 |\t Exibir o Nome e Telefone \n");
		printf("\t4 |\t Exibir Todas as Informa��es \n");
		printf("\t0 |\t Sair do Programa \n");	
		
			//INICIO DO LA�O DE REPETI��O DO WHILE
	do{
	
	setlocale(LC_ALL,"");
	//INICIO DA VARIAVEL 'OP��O'
	printf("\nDigite a Op��o Desejada: ");
	scanf("%d",&opcao);
		
		//INICIO DO ESTRUTURA DE REPETI��O SWITCH CASE 
		switch (opcao){
			case 0:
				printf("Opera��o Finalizada\n");
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
				//CASO CONTRARIO VOLTAR PARA A OP��O ATE QUE ESTEJA CORRETA ATRAV�Z DA ESTRUTURA DE REPETI��O IF
				if(opcao<0&&opcao!=4){
					//RETORNO A OP��O
					printf("Digite a Op��o Desejada: ");
					scanf("%d",&opcao);
					break;
				}		
		}
				//FIM DO LA�O DE REPETI��O
					
		}	while(opcao!=0&&opcao>4);
			
		
		
		
return 0;	
}
