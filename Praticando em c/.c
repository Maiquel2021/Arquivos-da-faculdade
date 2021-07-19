
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 200
  
typedef struct Projetos
{
    char Titulo_do_Projeto [50], Descricao [20], Status[10],Gerente_de_Projetos [35];
    int Codigo , Ano ;
}pro;
	
int i = 0;	//Variavel Global
int op; //Variavel global .

void cadastrarProjeto(pro cadastro[MAX]);
void imprimindo(pro cadastro[MAX]);
void imprimndo_todos(pro cadastro[MAX]);

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
	     
	        break;
	    
		    case 4:
	            printf("projetos com o Status: Fazendo:\n");
	     
	            break;
	    
	        case 5:
	            printf("projetos com o Status: Concluído:\n");
	     
	        break;
	        
	        case 6:
	            printf("\n* Saindo do Programa Volte Sempre *...\n\n");
	     
	        break;
	    
	        default:
	    	    printf("\nOpção Inválida\n");
		
	    }
	}while(op != 6); //Vai executar o menu ate que escolha seja diferente de 0.
	


 	return (0);
 }
    
int Menu (){
	    
	    printf("\n\n");
	    printf("Escolha 1 Para Cadastrar Projetos :\n");
	    printf("Escolha 2 Para Listar Todos os projetos:\n");
	    printf("Escolha 3 Todos os projetos com o Status: A Fazer:\n");
	    printf("Escolha 4 Todos os projetos com o Status: Fazendo:\n");
	    printf("Escolha 5 Todos os projetos com o Status: Concluído:\n");
	    printf("Escolha 6 Para Encerrar o Programa :\n");
	   	printf("\n Escolha uma opção do menu: ");
		scanf("%d", &op); //opção Variavel global . 	
	 
	return (op); //retornando opcao para main principal.
}     
	     
	 // função para Cadastrar Projetos.
void cadastrarProjeto(pro cadastro[MAX]){
	 		 
	system("cls");     
    printf("\n_____________________________________________________________\n");
    printf("\n ************ Bem Vindo A Cadastrar Projetos. ************  \n ");
    printf("\n_____________________________________________________________\n");
    	
	char resp = 's';
	
	while(resp == 's' && i <= MAX){
		i++;
		printf("\nCódigo: %d ", i);
		//scanf("%d", &cadastro[posicao].codigo);
		cadastro[i].Codigo = i;	
		fflush(stdin);
			
		printf("\nInforme o Titulo do Projeto: ");
		gets(cadastro[i].Titulo_do_Projeto);
		fflush(stdin);
				
		printf("\nInsira a Descrição do Projeto: ");
		gets(cadastro[i].Descricao);
		fflush(stdin);
		
		printf("\nInsira o Ano do Projeto: ");
		scanf("%d",&cadastro[i].Ano); 
		fflush(stdin);
		
		printf("\nInsira o Status do Projeto que (1) A fazer (2)Fazendo e (3) Concluído:\n"  );
	    gets(cadastro[i].Status);
	    fflush(stdin);
		
		printf("\nInsira  o Gerente do projeto responsável:");
		gets(cadastro[i].Gerente_de_Projetos);
		fflush(stdin);
		

		 	if(i < MAX){
			printf("\n\nDeseja cadastrar novo Projeto? [s] Sim [n] Não: ");
			fflush(stdin);
			scanf("%c", &resp);
		}else{
			printf("\nSua base de Dados já chegou ao limite!!!\n");
			resp = 'n';
		}       
		   
	    
	}

}
void imprimindo(pro cadastro[MAX]){

	printf("\n***********************\n");
    printf("\n     Imprimido...\n      ");
    printf("\n***********************\n\n");
     	
}
    
void imprimndo_todos(pro cadastro[MAX]){
	int linha=1;
	
	if(i >= 1){
		while(linha <= i){
			printf("\nO codigo do Projeto:%d",cadastro[linha].Codigo); 
			printf("\nO Titulo do Projeto:%s",cadastro[linha].Titulo_do_Projeto);
			printf("\nA Descrição do Projeto:%s",cadastro[linha].Descricao);
			printf("\nO Ano do Projeto:%d",cadastro[linha].Ano);
			printf("\nO Status do Projeto:%s",cadastro[linha].Status);
			printf("\nO Gerente do projeto responsável:%s\n",cadastro[linha].Gerente_de_Projetos);
			linha++;
		}	
			
	}else{
		printf("\nNão A Registros Cadastrados\n");
	}	
	system("Pause");
}

void Status_a_fazer(pro cadastro[MAX]);
	
	   
	
		              
        
 
    
	
			
	
					 

	
           
  
   
   

	

		