#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 200

typedef struct dados{
	int codigo;
	char status[20];
	char titulo[30];
	char modelo[20];/*campo de base incluida*/
	char descricao[50];
	char gerente[20];
	char cliente[20];/*campo de base incluida*/
	char mes[20];/*campo de base incluida*/
	int ano;
	
}menu_projetos;

int posicao = 0;

void cadastrarProjeto(menu_projetos cadastro[MAX]);
void relatorioTodos(menu_projetos cadastro[MAX]);
void relatorioAfazer(menu_projetos cadastro[MAX]);
void relatorioFazendo(menu_projetos cadastro[MAX]);
void relatorioConcluido(menu_projetos cadastro[MAX]);
void buscarTitulo(menu_projetos cadastro[MAX]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	menu_projetos cadastro[MAX];
	
	int escolha;
	
	system("cls");	
	do{
		system("cls");
		printf("************Gestão de Projetos************\n");
		printf("\n 1 - Cadastrar um novo projeto");
		printf("\n 2 - Listar todos os projetos");
		printf("\n 3 - Listar todos os projetos - A fazer");
		printf("\n 4 - Listar todos os projetos - Fazendo");
		printf("\n 5 - Listar todos os projetos - Concluído");
		printf("\n 6 - Pesquisar projeto por titulo"); /*inclusão de nova rotina de impressão*/
		printf("\n 7 - Sair\n");
		printf("\n >> Escolha uma opção do menu: ");
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1:
				cadastrarProjeto(cadastro);			
				break;
			case 2:
				relatorioTodos(cadastro);
				break;
			case 3:
				relatorioAfazer(cadastro);
				break;
			case 4:
				relatorioFazendo(cadastro);
				break;
			case 5:
				relatorioConcluido(cadastro);
				break;
			case 6:
				buscarTitulo(cadastro);
				break;
			case 7:
				printf("\nSaindo...\n");
				system("Pause");
				break;
			default:
				printf("\nOpção inexistente!!!\n");
				system("Pause");
		}
	}while(escolha != 7);
	return 0;
}

void cadastrarProjeto(menu_projetos cadastro[MAX]){
	system("cls");
	printf("************Cadastro de Projetos************\n");
	char resp = 's';
	
	while(resp == 's' && posicao <= MAX){
		posicao++;
		printf("\nCódigo: %d ", posicao);
		//scanf("%d", &cadastro[posicao].codigo);
		cadastro[posicao].codigo = posicao;
		
		printf("\nInforme o titulo: ");
		fflush(stdin);
		gets(cadastro[posicao].titulo);		
		
		printf("\nInforme o modelo: ");
		fflush(stdin);
		gets(cadastro[posicao].modelo);
		
		printf("\nInforme a descrição: ");
		fflush(stdin);
		gets(cadastro[posicao].descricao);	
		
		printf("\nInforme o gerente responsável: ");
		fflush(stdin);
		gets(cadastro[posicao].gerente);	
		
		printf("\nInforme o nome do cliente: ");
		fflush(stdin);
		gets(cadastro[posicao].cliente);	
		
		printf("\nInforme o mês de início: ");
		fflush(stdin);
		gets(cadastro[posicao].mes);
		
		printf("\nInforme o ano: ");
		fflush(stdin);
		scanf("%d", &cadastro[posicao].ano);
		
		printf("\nInforme o status: 1 - A fazer 2 - Fazendo 3 - Concluído: ");
		fflush(stdin);
		gets(cadastro[posicao].status);		
		
		if(posicao < MAX){
			printf("\n\nDeseja cadastrar novo Projeto? [s] Sim [n] Não: ");
			fflush(stdin);
			scanf("%c", &resp);
		}else{
			printf("\nBanco de dados cheio!!\n");
			resp = 'n';
		}
	}
}
void relatorioTodos(menu_projetos cadastro[MAX]){
	system("cls");
	printf("************Listar todos os Projetos************\n");
	int linha=1;
	
	if(posicao >= 1){
		while(linha <= posicao){
			printf("\n%d - %s\n", cadastro[linha].codigo, cadastro[linha].titulo);
			printf("\n%s",cadastro[linha].modelo);
		 	printf("\n%s",cadastro[linha].descricao);
			printf("\n%s",cadastro[linha].gerente);
			printf("\n%s",cadastro[linha].cliente);
			printf("\n%s",cadastro[linha].mes);
			printf("\n%d",cadastro[linha].ano);
			printf("\n%s",cadastro[linha].status);
			printf("\n");
			linha++;
		}	
			
	}else{
		printf("\nSem Registros, procure novamente!\n");
	}	
	system("Pause");
	
}
void relatorioAfazer(menu_projetos cadastro[MAX]){
	system("cls");
	printf("************Listar todos os Projetos - A fazer************\n");
	int status =1;
	
	if(posicao = 1){
		while(status == posicao){
			printf("\n%d - %s\n", cadastro[status].codigo, cadastro[status].titulo);
			printf("\n%s",cadastro[status].modelo);
		 	printf("\n%s",cadastro[status].descricao);
			printf("\n%s",cadastro[status].gerente);
			printf("\n%s",cadastro[status].cliente);
			printf("\n%s",cadastro[status].mes);
			printf("\n%d",cadastro[status].ano);
			printf("\n%s",cadastro[status].status);
			printf("\n");
			status++;
		}	
			
	}else{
		printf("\nSem Registros, procure novamente!\n");
	}	
	system("Pause");
	
}

void relatorioFazendo(menu_projetos cadastro[MAX]){
	system("cls");
	printf("************Listar todos os Projetos - Fazendo************\n");
	int status =2;
	
	if(posicao = 2){
		while(status == posicao){
			printf("\n%d - %s\n", cadastro[status].codigo, cadastro[status].titulo);
			printf("\n%s",cadastro[status].modelo);
		 	printf("\n%s",cadastro[status].descricao);
			printf("\n%s",cadastro[status].gerente);
			printf("\n%s",cadastro[status].cliente);
			printf("\n%s",cadastro[status].mes);
			printf("\n%d",cadastro[status].ano);
			printf("\n%s",cadastro[status].status);
			printf("\n");
			status++;
		}	
			
	}else{
		printf("\nSem Registros, procure novamente!\n");
	}	
	system("Pause");

}
void relatorioConcluido(menu_projetos cadastro[MAX]){
	system("cls");
	printf("************Listar todos os Projetos - Concluído************\n");
	int status =3;
	
	if(posicao = 3){
		while(status == posicao){
			printf("\n%d - %s\n", cadastro[status].codigo, cadastro[status].titulo);
			printf("\n%s",cadastro[status].modelo);
		 	printf("\n%s",cadastro[status].descricao);
			printf("\n%s",cadastro[status].gerente);
			printf("\n%s",cadastro[status].cliente);
			printf("\n%s",cadastro[status].mes);
			printf("\n%d",cadastro[status].ano);
			printf("\n%s",cadastro[status].status);
			printf("\n");
			status++;
		}	
			
	}else{
		printf("\nSem Registros, procure novamente!\n");
	}	
	system("Pause");

}
void buscarTitulo(menu_projetos cadastro[MAX]){
	system("cls");
	char titulo[30];
	int achou, j;
 	printf("************Pesquisar projeto por titulo************\n");
	printf("\nDigite o titulo idêntico ao cadastrado: ");
	fflush(stdin);
	gets(titulo);
	achou = 0;
	j = 0;
	while((achou == 0) && (j < MAX)){
		if(strcmp(cadastro[j].titulo,titulo)==0){
			printf("\n%d - %s\n", cadastro[j].codigo, cadastro[j].titulo);
			printf("\n%s",cadastro[j].modelo);
		 	printf("\n%s",cadastro[j].descricao);
			printf("\n%s",cadastro[j].gerente);
			printf("\n%s",cadastro[j].cliente);
			printf("\n%s",cadastro[j].mes);
			printf("\n%d",cadastro[j].ano);
			printf("\n%s",cadastro[j].status);
			printf("\n");
			achou = 1;
			system("Pause");
		}
		j++;
	}
	if(achou == 0 ){
		printf("\nRegistro não encontrado %s \n", titulo);
		system("Pause");
	}
}
