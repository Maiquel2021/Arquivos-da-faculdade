Olá, meu caro desenvolvedor! Nesta Atividade 01, iremos colocar em prática um pouco do conteúdo que você está estudando nesta disciplina.

Primeiro vamos buscar entender o escopo de uma aplicação.

Imagine uma empresa de qualquer setor de sua cidade. Todos os meses, estas empresas precisam efetuar o pagamento de salário aos seus colaboradores, e sempre que há um reajuste, os colaboradores ficam apreensivos para saber o quanto será reajustado, ou seja, quanto ele irá receber ao final do mês. Este processo é tão burocrático, que todos esperam o holerite chegar. Mas esta empresa deseja ofertar ao seu colaborador uma forma dele saber a partir de seu salário líquido qual será o salário reajustado.

O proprietário desta empresa determinou um reajuste salarial de 7,5% a todos os seus funcionários. Além disto, concedeu um abono de R$ 150,00 para aqueles que recebem até e, inclusive R$ 1750,00. Dado o valor do salário líquido de um funcionário, informar o salário atual e para quanto ele será reajustado.

Segundo, o que eu devo fazer na atividade?
1 - Entender o escopo
2 – Escolhe um nome fictício para esta empresa
3 – Criar um cabeçalho na impressão do sistema, de forma que conste o nome da empresa, o seu RA e o seu nome completo.
4 – No seu código deve conter:
- entrada (salario líquido do colaborador);
- processamento (reajuste do salário) e,
- saída (impressão do provável novo salário).



Reposta:

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
    float salario_liquido , reajuste_do_salario1 , reajuste_do_salario2;
    const float abono = 150.00; 
    
    setlocale(LC_ALL,"Portuguese");
    printf("---------------------------------\n");	
    printf("Nome dá Empresa : MgccEnterprise\n");
    printf("RA : XXXXXX-X\n");
    printf("Nome:XXXX XXXX XXXX XXXX\n");
    printf("----------------------------------\n");	
    
       printf("\nInsira seu salario líquido :\n");
       scanf("%f", &salario_liquido);
       
       if(salario_liquido > 1750){
       	    reajuste_do_salario1 = (salario_liquido * 0.075) + salario_liquido ;
       	    printf("salario líquido + aumento de 7,5%% :\n");
       	    printf("Seu novo salário é de R$ %.2f",reajuste_do_salario1);
       }      
        else if(salario_liquido <=1750){
              reajuste_do_salario2 = salario_liquido + (salario_liquido * 0.075) + abono;
              printf("salario líquido + aumento de 7,5%% + abono:\n");
              printf("Seu novo salário é de R$ %.2f",reajuste_do_salario2);
    
       }

   return (0);	       

}

