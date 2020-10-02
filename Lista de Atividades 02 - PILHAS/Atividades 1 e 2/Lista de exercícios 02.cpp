
	#include <math.h>
	#include <stdio.h>
	#include <locale.h>
	#include <stdlib.h>
	#define MAX 10
	
	
	// estrutura da pilha a ser utilizada
	struct pilha {	
		int vetor[MAX];  // vetor de inteiros para armazenar valores na pilha
		int topo;   // variavel responsavel por guardar o indice do topo 
	};
	
	// prototipos das funcoes
	int consultartopo(struct pilha);
    void empilhar(int, struct pilha *);
    void AddvaluevarC(struct pilha *,struct pilha *,struct pilha*);
    void verificarvetorc(struct pilha);
	void exercicio_1();
	void exercicio_2 ();
	void menu ();
	void adicionar(int, struct pilha *);
	int consultartopo(struct pilha Ex2Acopia);
	void addvalvarimparpar(struct pilha*, struct pilha *);
	int impressao(struct pilha);
	int passagemdevalores(struct pilha *, struct pilha*);
	
	
	int main ()
	{
	  setlocale(LC_ALL,"Portuguese");	// comando para reconhecimento de caracteres e palavras com acentua�ao 
	  menu();                          // chamada para fun�ao menu 
	    
	}
	
	void menu ()                 // Funcao menu, para permitir com que o usuario navegue nos exercios 
	{
		int x,y;   // variavel interna 
		do        // la�o de repeticao "do" "while" para permitir repeticoes ate com que o usuario deseje parar o codigo 
		{
		printf("**************************************************\n");          //  Apresentacao da funcao menu 
		printf("Ola!!! Digite qual atividade deseja abrir: \n\n");              // 
		printf("1 - Exerc�cio_01 \n");                                         // 
		printf("2 - Exerc�cio_02 \n");                                          //
		printf("0 - Sair \n\n");                                            //
		printf("**************************************************\n");    //
		scanf("%d",&x);                                                   // Comando para armazenar o digito do usario 
		system("cls");                                                   // comando para limpar tela 
		switch (x)                                                      // La�o de repeticao "switch_case"
		{
			case 0:                                                   // case 0 , comando para sair do codigo 
				  break;                                             // parada do case 0
			case 1:         
			      exercicio_1();                                 // Chamada da funcao atividade 1                        
			      system("pause");                              // comando para dar pause no codigo 
			      system("cls");                               // comando para limpar tela
			      break;                                      // parada do case 1
			         
			case 2:  
			      exercicio_2();                           // Chamada da funcao atividade 2
			      system("pause");                        // comando para dar pause no codigo 
			      system("cls");                         // comando para limpar tela
			      break;                                // parada do case 2
			      
			default:                                            // padrao 
			      printf("Digite um numero valido! \n\n");    // Apresenta�ao caso usuario digite valor incorreto do solicitado 
				  break;                                     // parada do case padrap 
	    }
		}while (x != 0);	        // fim do la�o 
	}
				          
	
	
	
	void exercicio_1 (){
		printf("****************************************\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
		printf(" Parabens ! Voce escolheu o exerc�cio 1. \n\n");   //
		printf("***************************************\n\n");    //
		struct pilha Ex2A; // Declaracao de uma variavel do tipo struct pilha
		Ex2A.topo = -1; // inicializamos a variavel topo com o valor -1, indicando que esta vazia
		struct pilha Ex2B; // Declaracao de uma variavel do tipo struct pilha
		Ex2B.topo = -1; // inicializamos a variavel topo com o valor -1, indicando que esta vazia
		struct pilha Ex2C; // Declaracao de uma variavel do tipo struct pilha
		Ex2C.topo = -1; // inicializamos a variavel topo com o valor -1, indicando que esta vazia
		system("pause");  // comando para dar pause no codigo 
		system("cls"); // comando para limpar tela 
		printf("****************************************\n");   
		printf(" Com dados de duas pilhas abaixo: \n\n");
		printf(" |   1   |   e  |   2   |   \n");
		printf(" |-------|      |-------|   \n");
		printf(" |   4   |      |   3   |   \n");
		printf(" |-------|      |-------|   \n");
		printf(" |   6   |      |   5   |   \n");
		printf(" |-------|      |-------|   \n");
		printf(" |   A   |      |   B   |   \n\n");
		printf("***************************************\n\n");
		system("pause");
		system("cls");
		printf("****************************************************************************************************\n");
		printf(" Serao organizados os n�meros em ordem crescente (de baixo para cima) em uma terceira pilha. \n\n");
		printf("***************************************************************************************************\n\n");
		system("pause");                            // comando para dar pause no codigo 
		system("cls");                             // comando para limpar tela
		empilhar(6,&Ex2A);                        // Chamada de funao para adicionar valores na pilha A
		empilhar(4,&Ex2A);                       // Chamada de funao para adicionar valores na pilha A
		empilhar(1,&Ex2A);                      // Chamada de funao para adicionar valores na pilha A
		empilhar(5,&Ex2B);                     // Chamada de funao para adicionar valores na pilha B
		empilhar(3,&Ex2B);                    // Chamada de funao para adicionar valores na pilha B 
		empilhar(2,&Ex2B);                   // Chamada de funao para adicionar valores na pilha B
		AddvaluevarC(&Ex2C,&Ex2A,&Ex2B);    // Chamada da funcao adicionar funcao a variavel c, responsavel por adicionar valores da pilha A e B para a pilha C
		AddvaluevarC(&Ex2C,&Ex2A,&Ex2B);   // Chamada da funcao adicionar funcao a variavel c, responsavel por adicionar valores da pilha A e B para a pilha C
		AddvaluevarC(&Ex2C,&Ex2A,&Ex2B);  // Chamada da funcao adicionar funcao a variavel c, responsavel por adicionar valores da pilha A e B para a pilha C
		verificarvetorc(Ex2C);      // Chamada da funcao verifica veror C, reponsavel por apresentar alteracao dos valores 
}
	
	
	
	void exercicio_2 (){                                                 //    Exercicio ainda nao realizado 
		int n,i;
		struct pilha principal; // Declaracao de uma variavel do tipo struct pilha
		principal.topo = -1; // inicializamos a variavel topo com o valor -1, indicando que esta vazia
		struct pilha par; // Declaracao de uma variavel do tipo struct pilha
		par.topo = -1; // inicializamos a variavel topo com o valor -1, indicando que esta vazia
		struct pilha impar; // Declaracao de uma variavel do tipo struct pilha
		impar.topo = -1; // inicializamos a variavel topo com o valor -1, indicando que esta vazia
		do
		{
		printf("*********************************************\n");           // 
		printf(" Parabens ! Voce escolheu o exerc�cio 2. \n\n");       //
		printf(" D� 10 valores para a pilha e veja que o \n"); 
		printf(" programa ira separar a parte de BAIXO da   \n"); 
		printf(" pilha os PARES e a parte de CIMA os IMPARES.  \n\n"); 
		printf("*********************************************\n");
		printf("Insira os 10 valores: ");        //
		scanf("%d",&n);
		adicionar(n,&principal);
		system("cls");
		}
		while(principal.topo < MAX-1);
		printf("************************************************************\n\n");
		printf(" Os valores selecionado da pilha foram: \n\n");
		impressao(principal);
		system("pause");
		system("cls");
		do
		{
		{
		     if (principal.vetor[principal.topo]% 2 == 0)
		{
		  	addvalvarimparpar(&principal,&par);
		}
		else
		{
		  	addvalvarimparpar(&principal,&impar);
		}
	    }
	    }
		while (principal.topo > -1); 
		printf("************************************************************\n\n");
		printf(" Os valores pares separados sao: \n\n");
	    impressao(par);
		system("pause");
		system("cls");
		printf("************************************************************\n\n");
		printf(" Os valores impares separados sao: \n\n");
		impressao(impar);
		system("pause");
		system("cls");
		passagemdevalores(&par,&impar);
		printf("************************************************************\n\n");
		printf(" A separa�ao dos impares e pares ficaram da seguinte forma : \n\n");
		impressao(par);
		system("pause");
		system("cls");		
	 	
    }
	
	
	
		void empilhar(int valor, struct pilha *PILHA ){                   // funcao para adicionar os valores das pilhas a e b 
		PILHA->topo++;                                                   // Comando para somar 1 no indice do valor da pilha
		PILHA->vetor[PILHA->topo] = valor;                              //  Salvando o valor na  Pilha A e B
 	}
	
	
    void AddvaluevarC(struct pilha *Ex2C,struct pilha *Ex2A,struct pilha *Ex2B){               // Funcao para adicionar valor a pilha C
		 if (Ex2B->vetor[Ex2B->topo] < Ex2A->vetor[Ex2A->topo])                               //  Senten�a para verificar valor maior e menor 
		 {	                                                                                 
		     Ex2C->topo++;                                                                  // Comando para somar 1 no indice do valor da pilha
		     Ex2C->vetor[Ex2C->topo] = Ex2B->vetor[Ex2B->topo];                            // Armazenando valor da pilha B na pilha  C
		     
		     Ex2C->topo++;                                                               // Comando para somar 1 no indice do valor da pilha
		     Ex2C->vetor[Ex2C->topo] = Ex2A->vetor[Ex2A->topo];                        // Armazenando valor da pilha A na pilha  C
		     Ex2B->topo--;                                                            // Reduzindo valores da pilha B
		     Ex2A->topo--;                                                           // Reduzindo valores da pilha A
		     
		 }
		 else
		 {
		
		     Ex2C->topo++;                                         // Comando para somar 1 no indice do valor da pilha
		     Ex2C->vetor[Ex2C->topo] = Ex2A->vetor[Ex2A->topo];   // Armazenando valor da pilha A na pilha  C
		     Ex2C->topo++;                                       // Comando para somar 1 no indice do valor da pilha
		     Ex2C->vetor[Ex2C->topo] = Ex2B->vetor[Ex2B->topo]; // Armazenando valor da pilha B na pilha  C
		     Ex2A->topo--;                                     // Reduzindo valores da pilha A
		     Ex2B->topo--;                                    // Reduzindo valores da pilha B
	     }
	}
	
	void verificarvetorc(struct pilha Ex2C)  // funcao para printa o resultado da transferencia dos valores da pilha A e B para a pilha C
	{ 
	    int i;    // Variavel interna 
	         printf("****************************************\n");    //    Apresentacao da fun�ao 
	         printf(" O resultado fica assim: \n\n");                //
		     for(i = 5; i >= 0; i--){                               // la�o de repeticao "for" para gerar a sequencia de valores a ser apresentado 
		         printf(" %d  ->  |   %d  |   \n",Ex2C.topo,Ex2C.vetor[Ex2C.topo]);  // Apresenta�ao dos valores de cada indice da pilha C
		         Ex2C.topo--;
		         printf("        |------|   \n");                   // 
	    }
	    printf("***************************************\n\n");  // 
	}	




    	
		void adicionar(int valor, struct pilha *PILHA )
	{
		PILHA->topo++;
		PILHA->vetor[PILHA->topo] = valor;
	}
	
	    void addvalvarimparpar(struct pilha *principal, struct pilha *imparpar)
	{
		imparpar->topo++;
	    imparpar->vetor[imparpar->topo] = principal->vetor[principal->topo];
	    principal->topo--;
	}
	

	    int consultartopo(struct pilha Ex2Acopia)
	{
		printf("%d", Ex2Acopia.topo);
	}
	
	    int impressao(struct pilha PILHA)
	{ 
	    int i;
	    do
		{
		 printf(" %d  ->  |   %d  |   \n",PILHA.topo,PILHA.vetor[PILHA.topo]);
		 printf("        |------|   \n"); 
	     PILHA.topo--;
	    }while (PILHA.topo > -1); 
	    printf("************************************************************\n\n");
	}
	
	int passagemdevalores(struct pilha *par, struct pilha *impar)
	{
		int i;
		for(i = impar->topo; i >= 0; i--)
		{
		par->topo++;
		par->vetor[par->topo] = impar->vetor[impar->topo];
		impar->topo--;
	    }
	}
	


