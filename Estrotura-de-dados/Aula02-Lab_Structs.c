// -------------------------------------------------
// Disc.: ESTRUTURAS DE DADOS - IED-001
// Lab. : STRUCTS, ARQUIVOS-TEXTO, ARQUIVOS BIN�RIOS
// Ano/S: 2023/1S
// -------------------------------------------------

// arquivos de cabe�alhos ('header') - AMBIENTE
#include <stdio.h>
#include <locale.h>

// arquivos de cabe�alhos ('header') - PR�PRIOS
#include "Lab_Structs_TYPES_DEFINES.h"

// fun��es e procedimentos
// -----------------------

// Uso geral - exibi��o de dados do autor do trabalho
// --------------------------------------------------
void exibe_dados_autor() {
	
	// identifica��o do autor do trabalho
	printf("\n");
	printf("---------------------------------\n");
	printf("ESTRUTURAS DE DADOS - 2023/1S\n");
	printf("Lab.: STRUCTS e ARQUIVOS\n");
	printf("---------------------------------\n");
	printf("Nome: LUIS FERNANDO MARCELINO\n");
	printf("R.A.: 121 048 221 2 008\n");
	printf("---------------------------------\n");
	
	// finaliza��o (desnecess�rio neste caso, pois � procedimento 'void')
	return;	
}

// Atividade 1 - mem�ria para tipos primitivos e 'structs'
// -------------------------------------------------------
void mapeia_memoria() {
	
	// declara��o de tipo primitivo - INTEIRO
	int x1;
	int x2;
	
	// atribui��o de valor
	x1 = 3;
	x2 = 8;
 
    // impress�es: conte�do, qtd bytes na mem�ria, endere�o
    printf("\nTipo INTEIRO");
    printf("\n------------\n");
    printf("int x1 - endere�o #%p - qtd. bytes %d - conte�do %d\n",&x1,sizeof(x1),x1);
    printf("int x2 - endere�o #%p - qtd. bytes %d - conte�do %d\n",&x2,sizeof(x2),x2);
    printf("\n");
	
	// declara��o de tipo primitivo - FLOAT (real de precis�o simples)
	float f1;
	float f2;
	
	// atribui��o de valor
	f1 = 3.45;
	f2 = 8.794;
 
    // impress�es: conte�do, qtd bytes na mem�ria, endere�o
    printf("\nTipo FLOAT");
    printf("\n----------\n");
    printf("float f1 - endere�o #%p - qtd. bytes %d - conte�do %f\n",&f1,sizeof(f1),f1);
    printf("float f2 - endere�o #%p - qtd. bytes %d - conte�do %f\n",&f2,sizeof(f2),f2);
    printf("\n");

	// declara��o de tipo primitivo - DOUBLE (real de precis�o dupla)
	double d1;
	double d2;
	
	// atribui��o de valor
	d1 = 9.754;
	d2 = 1.238;
 
    // impress�es: conte�do, qtd bytes na mem�ria, endere�o
    printf("\nTipo DOUBLE");
    printf("\n-----------\n");
    printf("double d1 - endere�o #%p - qtd. bytes %d - conte�do %lf\n",&d1,sizeof(d1),d1);
    printf("double d2 - endere�o #%p - qtd. bytes %d - conte�do %lf\n",&d2,sizeof(d2),d2);
    printf("\n");

	// declara��o de tipo primitivo - CHAR (caracter isolado)
	char c1;
	char c2;
	
	// atribui��o de valor
	c1 = 'A';
	c2 = 'B';
 
    // impress�es: conte�do, qtd bytes na mem�ria, endere�o
    printf("\nTipo CHAR");
    printf("\n---------\n");
    printf("char c1 - endere�o #%p - qtd. bytes %d - conte�do %c\n",&c1,sizeof(c1),c1);
    printf("char c2 - endere�o #%p - qtd. bytes %d - conte�do %c\n",&c2,sizeof(c2),c2);
    printf("\n");

	// defini��o (especifica��o ou explica��o para o compilador) de 'struct'
	// N�O PRECISA MAIS, PORQUE FOI FEITO NO ARQUIVO INCLU�DO -> TYPES_DEFINES.h
	/*
	typedef struct {
		int    codigo;
		char   status;
		double ticket;
	} CLIENTE;
	*/
	
	// declara��o de vari�vel do tipo CLIENTE
	CLIENTE cli1;
	CLIENTE cli2;
	
	// atribui��o de valores
	cli1.codigo = 1;
	cli1.status = 'F';
	cli1.ticket  = 1000.0;
	cli2.codigo = 2;
	cli2.status = 'G';
	cli2.ticket  = 2000.0;
	
	// impress�es: conte�do, qtd bytes na mem�ria, endere�o
    printf("\nTipo CLIENTE (struct)");
    printf("\n---------------------\n");
    printf("CLIENTE cli1 - endere�o #%p - qtd. bytes %d\n",&cli1,sizeof(cli1));
    printf("CLIENTE cli2 - endere�o #%p - qtd. bytes %d\n",&cli2,sizeof(cli2));
    printf("\n");
    
    // impress�o campo a campo - CLIENTE cli1
    printf("campo cli1.codigo - endere�o #%p - qtd. bytes %d - conte�do %d\n",
	       &(cli1.codigo), sizeof(cli1.codigo), cli1.codigo);
    printf("campo cli1.status - endere�o #%p - qtd. bytes %d - conte�do %c\n",
	       &(cli1.status), sizeof(cli1.status), cli1.status);
    printf("campo cli1.ticket  - endere�o #%p - qtd. bytes %d - conte�do %lf\n",
	       &(cli1.ticket) , sizeof(cli1.ticket) , cli1.ticket);
    printf("\n");

    // impress�o campo a campo - CLIENTE cli2
    printf("campo cli2.codigo - endere�o #%p - qtd. bytes %d - conte�do %d\n",
	       &(cli2.codigo), sizeof(cli2.codigo), cli2.codigo);
    printf("campo cli2.status - endere�o #%p - qtd. bytes %d - conte�do %c\n",
	       &(cli2.status), sizeof(cli2.status), cli2.status);
    printf("campo cli2.ticket  - endere�o #%p - qtd. bytes %d - conte�do %lf\n",
	       &(cli2.ticket) , sizeof(cli2.ticket) , cli2.ticket);
    printf("\n");	

	// finaliza��o (desnecess�rio neste caso, pois � procedimento 'void')
	return;
}

// Atividade 3 - grava��o de arquivo-texto
// ---------------------------------------
int grava_arquivo_texto ( ) {
	
	// declara��es de vari�veis
	int   x1;
	float f1;
	char  c1;
	FILE * arquivo;  // d� acesso ao arquivo f�sico
	
	// atribui��es de valores
	x1 = 1750;
	f1 = 209.47;
	c1 = 'A';
	
	// abertura do arquivo no modo GRAVA��O
	// aten��o
	// 1. se o arquivo n�o existe, este comando CRIA o arquivo
	// 2. se o arquivo j� existe, este comando LIMPA o arquivo
	arquivo = fopen( "Ativ_3.txt", "w" );
	
	// se o comanddo de abertura falhou, retornar -1
	if ( arquivo == NULL ) {
		return -1;
	}
	
	// grava��o dos valores das vari�veis
	fprintf( arquivo, "%d %f %c", x1, f1, c1);
	
	// fechamento do arquivo
	fclose( arquivo );

	// finaliza��o
	return 0;
}

// Atividade 4 - leitura de arquivo-texto
// --------------------------------------
int le_arquivo_texto ( ) {

	// finaliza��o
	return 0;
}

// Atividade 5 - grava��o de arquivo bin�rio
// -----------------------------------------
int grava_arquivo_binario ( ) {

	// finaliza��o
	return 0;
}

// Atividade 6 - leitura de arquivo bin�rio
// ----------------------------------------
int le_arquivo_binario ( ) {

	// finaliza��o
	return 0;
}

// programa principal
// ------------------
int main()
{

	// para falar Portugu�s ...
	setlocale(LC_ALL,"Portuguese");
	
	// declara��o de vari�veis
	int escolha;
	int retorno;
	
	// menu de escolha da Atividade a ser executada
	do {
		// apresenta��o do menu 
		printf("\nMenu de op��es:\n");
		printf(  "---------------\n");
		printf("1 - Atividade 1: Mem�ria para tipos primitivos e structs\n");
		printf("3 - Atividade 3: Grava��o de arquivo-texto\n");
		printf("4 - Atividade 4: Leitura  de arquivo-texto\n");
		printf("5 - Atividade 5: Grava��o de arquivo bin�rio\n");
		printf("6 - Atividade 6: Leitura  de arquivo bin�rio\n");
		printf("9 - Sair ...\n");
		
		// coleta da op��o desejada pelo usu�rio
		printf("\nInforme o que deseja fazer: ");
		scanf("%d",&escolha);
		
		// execu��o da a��o desejada
		switch ( escolha ) {
			case 1:
				printf("\nAtividade 1 ...\n");
				// c�digo da Atividade 1
				mapeia_memoria();
				// identifica��o do autor do trabalho
				exibe_dados_autor();
				break;
			
			/* op��o inv�lida neste Lab
			case 2:
				printf("\nAtividade 2 ...\n");
				// c�digo da Atividade 2
				break;
			*/
			
			case 3:
				printf("\nAtividade 3 ...\n");
				// c�digo da Atividade 3
				retorno = grava_arquivo_texto ( );
				if ( retorno == -1 ) {
					printf("\nERRO na abertura do arquivo-texto para GRAVA��O !!!\n");
				}
				else {
					printf("\nArquivo-texto gravado com sucesso !!!\n");
				}
				break;
			
			case 4:
				printf("\nAtividade 4 ... AINDA N�O IMPLEMENTADA !\n");
				// c�digo da Atividade 4
				break;
			
			case 5:
				printf("\nAtividade 5 ... AINDA N�O IMPLEMENTADA !\n");
				// c�digo da Atividade 5
				break;
			
			case 6:
				printf("\nAtividade 6 ... AINDA N�O IMPLEMENTADA !\n");
				// c�digo da Atividade 6
				break;
			
			case 9:
				printf("\nSair !\n");
				break;
			
			default:
				printf("\nOp��o inv�lida !\n");
				break;   // desnecess�rio neste caso
				
		}
		
	} while ( escolha != 9 );
		
	// finaliza��o
	return 0;
	
}

