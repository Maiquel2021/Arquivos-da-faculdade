O que iremos armazenar?
1 – Iremos armazenar os campos básicos de um projeto, tais como: Código, Titulo, Descrição, Ano, Status e o Gerente de Projetos responsável.

Regras:
1 - O código do projeto é sequencial (1, 2, 3, ...), ou seja, ao cadastrar um novo projeto o sistema incrementa o código de forma automática.
2 – Não permitir que ultrapasse o número máximo de 200 projetos e que existam projetos com o mesmo código.
3 – Ao cadastrar um projeto, no campo status deve ser armazenado 1, 2 ou 3, sendo que 1 representa “A fazer”, 2 “Fazendo” e 3 “Concluído".
4 – Não iremos armazenar os dados em arquivo, os mesmos ficarão em memória, ou seja, encerrando a execução do programa, os dados serão apagados.

O que deve conter no meu código?

1 – Uma função para Cadastrar Projetos:
1.1 – Armazenar os campos básicos descritos anteriormente e incluir mais 3 campos que julgar necessário.
1.2 – Utilizar as regras estabelecidas anteriormente.

2 – Rotinas de Impressão, sendo:
2.1 – Todos os projetos.
2.2  – Todos os projetos com o Status: A Fazer.
2.2  – Todos os projetos com o Status: Fazendo.
2.2  – Todos os projetos com o Status: Concluído.
2.4 – Gerar uma nova rotina de impressão de projetos diferente das solicitadas anteriormente.

3 – Menu
3.1 – Criar um menu que possibilite ao usuário escolher as opções para cadastro e impressões de todos os itens anteriomente descritos.



Resposta:

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 200

typedef struct Projetos
{

​    char Titulo_do_Projeto [50], Descricao [20],Gerente_de_Projetos [35];
​    int Codigo , Ano ,status ;
}pro;

int contadoraProjetos = 0 ;	//Variavel Global
int i = 0;	//Variavel Global
int op;  //Variavel global .

void cadastrarProjeto(pro cadastro[MAX]);
void imprimindo(pro cadastro[MAX]);
void imprimndo_todos(pro cadastro[MAX]);
void listaAfazer(pro cadastro[MAX]);	   			                     
void listaFazendo(pro cadastro[MAX]);
void listaConcluido(pro cadastro[MAX]);
void projetosAprovado();
void projetosRejeitado();
void Gerentedoprojeto();

int Menu ();   





int main(){ 
    setlocale(LC_ALL, "Portuguese");
	pro cadastro[MAX]; //struct de Projetos.

	system("cls");  // limpar a tela ..
	            
	do{  
	    Menu ();      
	   	    switch(op){
	        case 1:
	        	system("cls");
	            printf("Cadastrar Projetos:\n");
	            cadastrarProjeto(cadastro);
	        break;
	     
	        case 2:
	        	system("cls");
	            printf("Listar Todos os projetos:\n");
	            imprimindo(cadastro);
	           	imprimndo_todos(cadastro);
	        break;
	    
		    case 3:
	            printf("projetos com o Status: A Fazer:\n");
	            listaAfazer(cadastro);
	        break;
	    
		    case 4:
	            printf("projetos com o Status: Fazendo:\n");
	            listaFazendo(cadastro);
	        break;
	    
	        case 5:
	            printf("projetos com o Status: Concluído:\n");
	            listaConcluido(cadastro);
	        break;
	        
	        case 6:
	        	  printf("Cadastrar Projeto Aprovado");
	        	  projetosAprovado();
	        break;
	        
	        case 7:
	        	  printf("Cadastrar Projeto Rejeitado");
	        	  projetosRejeitado();
	        break;
	        
	        case 8:
	        	  printf("Bem Vindo Area Exclusiva do  Gerente do projeto: ");
	        	  Gerentedoprojeto();
	        break;
	        
	        case 9:
	            printf("\n* Saindo do Programa Volte Sempre *...\n\n");
	     
	        break;
	    
	        default:
	    	    printf("\nOpção Inválida\n");
		
	    }
	}while(op != 9); //Vai executar o menu ate que escolha seja diferente de 0.
	
	return (0);
 }
    
int Menu (){
	    
	    printf("\n\n");
	    printf("Escolha 1 Para Cadastrar Projetos :\n");
	    printf("Escolha 2 Para Listar Todos os projetos:\n");
	    printf("Escolha 3 Todos os projetos com o Status: A Fazer:\n");
	    printf("Escolha 4 Todos os projetos com o Status: Fazendo:\n");
	    printf("Escolha 5 Todos os projetos com o Status: Concluído:\n");
	    printf("Escolha 6 Todos os projetos Aprovado pela empresa:\n");
	    printf("Escolha 7 Todos os projetos Rejeitado pela empresa :\n");
	    printf("Escolha 8 Area Exclusiva do  Gerente do projeto:\n");
	    printf("Escolha 9 Para Encerrar o Programa :\n");
	   	printf("\n Escolha uma opção do menu: ");
		scanf("%d", &op); //opção Variavel global . 	
	 
	return (op); //retornando opcao para main principal.
}     
	     
	 // função para Cadastrar Projetos.
void cadastrarProjeto(pro cadastro[MAX]){


​	    system("cls");     
​        printf("\n_____________________________________________________________\n");
​        printf("\n ************ Bem Vindo A Cadastrar Projetos. ************  \n ");
​        printf("\n_____________________________________________________________\n");
​    	

	char resp = 's'; //variavel local
	
	while(resp == 's' && i <= MAX){
		i++;
		printf("\nCódigo: %d ", i);	
		cadastro[i].Codigo = i;	
		fflush(stdin);
			
		printf("\nInforme o Titulo do Projeto: \0");
		gets(cadastro[i].Titulo_do_Projeto);
		fflush(stdin);
				
		printf("\nInsira a Descrição do Projeto:\0");
		gets(cadastro[i].Descricao);
		fflush(stdin);
		
		printf("\nInsira o Ano do Projeto:\0");
		scanf("%d",&cadastro[i].Ano); 
		fflush(stdin);
		
		printf("\nInsira o Status do Projeto que (1) A fazer (2)Fazendo e (3) Concluído:\n\0");
	        scanf("%d", &cadastro[i].status);
	        fflush(stdin);
		
		printf("\nInsira  o Gerente do projeto responsável:\0");
		gets(cadastro[i].Gerente_de_Projetos);
		fflush(stdin);
		
		printf("\nProjeto Cadastrado com sucesso!!!\n\n\0");
	
		 	if(i < MAX){
			printf("\n\nDeseja cadastrar novo Projeto? [s] Sim [n] Não:\0");
			fflush(stdin);
			scanf("%c", &resp);
		}else{
			printf("\nSua base de Dados já chegou ao limite!!!\n\0");
			resp = 'n';
		}       		   	    
	}
}



void imprimindo(pro cadastro[MAX]){

	printf("\n***********************\n");
	printf("\n    Imprimindo....\n      ");
	printf("\n***********************\n\n");    	
}


void imprimndo_todos(pro cadastro[MAX]){
	int linha=1;//variavel local
	

	if(i >= 1){
		while(linha <= i){
			printf("\nO codigo do Projeto:%d",cadastro[linha].Codigo); 
			printf("\nO Titulo do Projeto:%s\0",cadastro[linha].Titulo_do_Projeto);
			printf("\nA Descrição do Projeto:%s\0",cadastro[linha].Descricao);
			printf("\nO Ano do Projeto:%d",cadastro[linha].Ano);
			printf("\nO Status do Projeto:%d",cadastro[linha].status);
			printf("\nO Gerente do projeto responsável:%s\n\0",cadastro[linha].Gerente_de_Projetos);
			linha++;
		}	
			
	}else{
		printf("\nNão A Registros Cadastrados\n\0");
	}	
	system("Pause");
}



void listaAfazer(pro cadastro[MAX]){
	int y;//variavel local
	for(y = 0; y < MAX  ; y++) {
	   if(cadastro[y].status == 1){
	   	    printf("\n Codigo do projeto: %d", cadastro[y].Codigo);
	   	    printf("\nO Titulo do Projeto:%s\0",cadastro[y].Titulo_do_Projeto);
	   	    printf("\nA Descrição do Projeto:%s\0",cadastro[y].Descricao);
	   	    printf("\nO Ano do Projeto:%d",cadastro[y].Ano);
	   	    printf("\nO Status do Projeto:%d",cadastro[y].status);
	   	    printf("\nO Gerente do projeto responsável:%s\n\0",cadastro[y].Gerente_de_Projetos);
	   }	
    }	
}



void listaFazendo(pro cadastro[MAX]){
	int y; //variavel local
	for(y = 0; y < MAX  ; y++) {
	   if(cadastro[y].status == 2){
	   	    printf("\n Codigo do projeto: %d", cadastro[y].Codigo);
	   	    printf("\nO Titulo do Projeto:%s\0",cadastro[y].Titulo_do_Projeto);
	   	    printf("\nA Descrição do Projeto:%s\0",cadastro[y].Descricao);
	   	    printf("\nO Ano do Projeto:%d",cadastro[y].Ano);
	   	    printf("\nO Status do Projeto:%d",cadastro[y].status);
	   	    printf("\nO Gerente do projeto responsável:%s\n\0",cadastro[y].Gerente_de_Projetos);
	   }	
    }	
}			
	

void listaConcluido(pro cadastro[MAX]){
	int y;//variavel local
	for(y = 0; y < MAX  ; y++) {
	   if(cadastro[y].status == 3){
	   	    printf("\n Codigo do projeto: %d", cadastro[y].Codigo);
	   	    printf("\nO Titulo do Projeto:%s\0",cadastro[y].Titulo_do_Projeto);
	   	    printf("\nA Descrição do Projeto:%s\0",cadastro[y].Descricao);
	   	    printf("\nO Ano do Projeto:%d",cadastro[y].Ano);
	   	    printf("\nO Status do Projeto:%d",cadastro[y].status);
	   	    printf("\nO Gerente do projeto responsável:%s\n\0",cadastro[y].Gerente_de_Projetos);
	   }	
    }	
}				

​				 
​     
void projetosAprovado(){
​	   int cod , An ; //variavel local
​	   char Tit , Descri ,Gerent ; //variavel local 
​       printf("\n O Codigo do projeto Aprovado: \0");
​        scanf("%d",&cod); 
​        fflush(stdin);
​        

        printf("\n Qual Titulo  do projeto Aprovado: \0");
        scanf("%s",Tit);
        fflush(stdin);
       	
    	printf("\n Qual Descrição do Projeto Aprovado:\0");
    	scanf("%s",Descri);
    	fflush(stdin);
    	
    	printf("\n Qual Ano do Projeto que foi Aprovado :\0");
    	scanf("%d",&An); 
    	fflush(stdin);
    	
    	printf("\nQual o Gerente que Aprovou o Projeto:\0");
        scanf("%s",Gerent);
    	fflush(stdin);		
}

void projetosRejeitado(){
	    int co , An ; //variavel local
	    char Ti , Desc ,Geren ,por; //variavel local 
	    
        printf("\n O Codigo do projeto Rejeitado:\0 ");
        scanf("%d",&co); 
        fflush(stdin);
        
        printf("\n Qual Titulo  do projeto Rejeitado: \0");
        scanf("%s",Ti);
        fflush(stdin);
       	
    	printf("\n Qual Descrição do Projeto Rejeitado:\0");
    	scanf("%s",Desc);
    	fflush(stdin);
    	
    	printf("\n Qual Ano do Projeto que foi Rejeitado:\0");
    	scanf("%d",&An); 
    	fflush(stdin);
    	
    	printf("\nQual o Gerente  que rejeitou o Projeto:\0");
        scanf("%s",Geren);
    	fflush(stdin);	
    	
    	printf("\nQual o motivo  que Projeto foi Rejeitado :\0");
        scanf("%s",por);
    	fflush(stdin);	

}
        
void Gerentedoprojeto(){
	 float valor , lu ;//variavel local
	    int a ; //variavel local
	    
	    printf("\n Qual o valor do Projeto: \0");
	    scanf("%f",&valor); 
	    fflush(stdin);
	    
	    printf("\n Quantos anos o  Projeto vai ser executado:\0 ");
	    scanf("%d",&a); 
	    fflush(stdin);
	    
	    printf("\n Qual o lucro  do Projeto: \0");
	    scanf("%f",&lu); 
	    fflush(stdin);	

}
	   

​		