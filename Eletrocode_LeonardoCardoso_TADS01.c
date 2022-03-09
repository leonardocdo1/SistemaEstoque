#include <stdio.h>
#include <stdlib.h>
// Leonardo Cardoso de Oliveira - Instituto Federal do Esp�rito Santo - Campus Alegre
//Curso - Tecnologia em An�lise e Desenvolvimento de Sistemas - 1� Per�odo - Professor: Carlos Alexandre - Disciplina - Programa��o 01 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int tabela[5][6] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
int opcao;		          
int produto;
int centro;
int qtdeprod;
int sair;
int op;

// declara��o das vari�veis, como n�o foi definido a quantidade de produtos, optei pelo padrao de 100 unidades de cada produto por centro;
do{				          
printf(" ----- Bem vindo ao Sistema Gerenciador de Estoque da EletroCode ----- ");
printf("\n Menu: \n");	
printf("\n 1 - Enviar produtos para o centro");	
printf("\n 2 - Retirar produtos do centro");	
printf("\n 3 - Listar produtos por centro");	
printf("\n 0 - Sair \n");	
printf("\nEscolha um numero correspondente as opcoes acima: ");	
scanf("%d", &opcao);	

// acima est� o menu de apresenta��o do sistema, com as op��es listadas no enunciado do trabalho pr�tico;
// Para as op��es do menu, optei por utilizar o switch, case.	
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
	    
// l�gica para enviar produtos ao centro, a var�avel "centro" refere-se � linha da matriz bidimensional, enquanto a vari�vel "produto" refere-se � coluna,
// os valores referentes as vari�veis mostram o �ndice do elemento � ser adicionado, enquanto � vari�vel "qtdeprod" recebe a quantidade de produtos � serem somados ao �ndice; 	    
		tabela[centro][produto]= tabela[centro][produto]+qtdeprod;
		printf ("A Quantidade atual do produto no centro escolhido e de: %d", tabela[centro][produto]);
// ap�s o envio dos elementos, o programa exibe a quantidade atualizada de produtos dispon�veis no �ndice apontado pelas vari�veis;
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
// a l�gica para retirada de produtos � semelhante a de envio, tendo como diferen�a apenas o sinal da opera��o, trocando-se a adi��o pela subtra��o;	    
	    if (tabela[centro][produto]>qtdeprod){
	    tabela[centro][produto]= tabela[centro][produto]-qtdeprod;
		printf("A quantidade atual do produto no centro escolhido e de: %d", tabela[centro][produto]);
// ap�s a retirada dos elementos, o programa exibe a quantidade atualizada de produtos dispon�veis no �ndice apontado pelas vari�veis;
	    }
// caso a var�avel "qtdeprod" receba um valor superior ao existente no �ndice apontado pelas var�aveis "centro"e"produto", o programa exibir� a mensagem abaixo;    
	    else {
	    printf("Nao foi possivel realizar esta operacao, saldo insuficiente!");
		} 
	    break;
	
// a op��o 3 lista todos os elementos existentes na matriz bidimensional, considerando que o tamanho da matriz foi definido no enunciado do trabalho, 
// optei por exibir os elementos �ndice por �ndice, apenas por uma quest�o de est�tica do c�digo, sabendo da possibilidade da exibi��o atrav�s da utiliza�ao dos dois "for"; 	
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
// quando for digitado o (0) zero, referente a op��o, o programa ser� encerrado.		
	}while (opcao !=0);
	    return 0;
        }




