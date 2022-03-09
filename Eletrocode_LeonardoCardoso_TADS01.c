#include <stdio.h>
#include <stdlib.h>
// Leonardo Cardoso de Oliveira - Instituto Federal do Espírito Santo - Campus Alegre
//Curso - Tecnologia em Análise e Desenvolvimento de Sistemas - 1º Período - Professor: Carlos Alexandre - Disciplina - Programação 01 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int tabela[5][6] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
int opcao;		          
int produto;
int centro;
int qtdeprod;
int sair;
int op;

// declaração das variáveis, como não foi definido a quantidade de produtos, optei pelo padrao de 100 unidades de cada produto por centro;
do{				          
printf(" ----- Bem vindo ao Sistema Gerenciador de Estoque da EletroCode ----- ");
printf("\n Menu: \n");	
printf("\n 1 - Enviar produtos para o centro");	
printf("\n 2 - Retirar produtos do centro");	
printf("\n 3 - Listar produtos por centro");	
printf("\n 0 - Sair \n");	
printf("\nEscolha um numero correspondente as opcoes acima: ");	
scanf("%d", &opcao);	

// acima está o menu de apresentação do sistema, com as opções listadas no enunciado do trabalho prático;
// Para as opções do menu, optei por utilizar o switch, case.	
	switch (opcao){
	
	case 1:
		printf ("***Voce selecionou a opcao 1*** \n \n");
		
		printf ("Escolha o produto que deseja enviar: \n 0 - P1 \n 1 - P2 \n 2 - P3 \n 3 - P4 \n 4 - P5 \n 5 - P6\n");
		printf ("Digite o numero correspondente ao produto:");
		scanf (" %d", &produto);
		
				
		printf ("Para qual centro deseja enviar este produto: \n 0 - C1 \n 1 - C2 \n 2 - C3 \n 3 - C4 \n 4 - C5 \n");
	    printf("Digite o numero correspondente ao produto:");
		scanf (" %d", &centro);
	    
	      	    
	    printf ("Digite a quantidade de produtos a serem enviados para o centro:");
	    scanf (" %d", &qtdeprod);
	    
// lógica para enviar produtos ao centro, a varíavel "centro" refere-se à linha da matriz bidimensional, enquanto a variável "produto" refere-se à coluna,
// os valores referentes as variáveis mostram o índice do elemento à ser adicionado, enquanto à variável "qtdeprod" recebe a quantidade de produtos à serem somados ao índice; 	    
		tabela[centro][produto]= tabela[centro][produto]+qtdeprod;
		printf ("A Quantidade atual do produto no centro escolhido e de: %d", tabela[centro][produto]);
// após o envio dos elementos, o programa exibe a quantidade atualizada de produtos disponíveis no índice apontado pelas variáveis;
		break;
	
	case 2:
		printf ("***Voce selecionou a opcao 2*** \n \n");
		
		printf ("Escolha o produto que deseja retirar: \n 0 - P1 \n 1 - P2 \n 2 - P3 \n 3 - P4 \n 4 - P5 \n 5 - P6\n");
		printf("Digite o numero correspondente ao produto:");
		scanf (" %d", &produto);
		
		
		printf ("Escolha o centro para retirada do produto: \n 0 - C1 \n 1 - C2 \n 2 - C3 \n 3 - C4 \n 4 - C5 \n");
	    printf("Digite o numero correspondente ao produto:");
		scanf (" %d", &centro);
	    	    
	    	    	    
	    printf ("Digite a quantidade de produtos a serem retirados para o centro: ");
	    scanf (" %d", &qtdeprod);
// a lógica para retirada de produtos é semelhante a de envio, tendo como diferença apenas o sinal da operação, trocando-se a adição pela subtração;	    
	    if (tabela[centro][produto]>qtdeprod){
	    tabela[centro][produto]= tabela[centro][produto]-qtdeprod;
		printf("A quantidade atual do produto no centro escolhido e de: %d", tabela[centro][produto]);
// após a retirada dos elementos, o programa exibe a quantidade atualizada de produtos disponíveis no índice apontado pelas variáveis;
	    }
// caso a varíavel "qtdeprod" receba um valor superior ao existente no índice apontado pelas varíaveis "centro"e"produto", o programa exibirá a mensagem abaixo;    
	    else {
	    printf("Nao foi possivel realizar esta operacao, saldo insuficiente!");
		} 
	    break;
	
// a opção 3 lista todos os elementos existentes na matriz bidimensional, considerando que o tamanho da matriz foi definido no enunciado do trabalho, 
// optei por exibir os elementos índice por índice, apenas por uma questão de estética do código, sabendo da possibilidade da exibição através da utilizaçao dos dois "for"; 	
	case 3:
		printf ("***Voce selecionou a opcao 3*** \n \n");
		printf ("Segue abaixo os produtos disponiveis por Centro: \n");
	        printf ("Centros - Produto 1 - Produto 2 - Produto 3 - Produto 4 - Produto 5 - Produto 6 \n");
	        printf ("Centro 1=   %d         %d          %d        %d         %d         %d \n", tabela[0][0], tabela[0][1], tabela[0][2], tabela[0][3], tabela[0][4], tabela[0][5]);
            printf ("Centro 2=   %d         %d          %d        %d         %d         %d \n", tabela[1][0], tabela[1][1], tabela[1][2], tabela[1][3], tabela[1][4], tabela[1][5]);	
	        printf ("Centro 3=   %d         %d          %d        %d         %d         %d \n", tabela[2][0], tabela[2][1], tabela[2][2], tabela[2][3], tabela[2][4], tabela[2][5]);
	        printf ("Centro 4=   %d         %d          %d        %d         %d         %d \n", tabela[3][0], tabela[3][1], tabela[3][2], tabela[3][3], tabela[3][4], tabela[3][5]);
	        printf ("Centro 5=   %d         %d          %d        %d         %d         %d \n", tabela[4][0], tabela[4][1], tabela[4][2], tabela[4][3], tabela[4][4], tabela[4][5]);
	    break;
		}
	printf("\n\n");
// quando for digitado o (0) zero, referente a opção, o programa será encerrado.		
	}while (opcao !=0);
	    return 0;
        }




