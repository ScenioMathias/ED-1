# Lista de Atividades 04 - Listas Encadeadas

<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## Anunciado das atividades 

* Arquivo pdf com enunciado das 2 atividades.

## Atividades 1 e 2

* Arquivo em C++ contendo os 2 exercícios.

## _Exercício 1_

_Crie duas LISTAS SIMPLESMENTE ENCADEADAS e as alimente conforme as LISTAS SIMPLESMENTE ENCADEADAS da figura abaixo, observando que em A e B os itens do topo são 1 e 2, respectivamente. Crie uma terceira LISTA SIMPLESMENTE ENCADEADAS onde estarão organizados os números em ordem crescente, de baixo para cima. A passagem dos valores das LISTAS SIMPLESMENTE ENCADEADAS A e B para a terceira LISTAS SIMPLESMENTE ENCADEADAS deve passar por uma estrutura de comparação de dados, para checar qual dado de qual LISTAS SIMPLESMENTE ENCADEADAS deverá entrar na terceira LISTAS SIMPLESMENTE ENCADEADAS em dado momento com vistas a assegurar a ordenação._

<img src="https://github.com/ScenioMathias/ED-1/blob/main/Lista%20de%20Atividades%2002%20-%20PILHAS/Pilha.png?raw=true" alt="smashupy" width="280"/>

## _Exercício 2_

_Implementar a simulação computacional de uma LISTA SIMPLESMENTE ENCADEADAS de banco, considerando as seguintes condições/restrições:_

a) LISTAS SIMPLESMENTE ENCADEADAS com comprimento máximo de 20 clientes. (Em uma situação real, esta seria a condição para abertura de mais um caixa de atendimento, tal situação não será tratada neste exercício)_

_b) Prioridade de atendimento para clientes maiores de 60 anos._

_c) A cada operação de inserção e/ou remoção de cliente na LISTAS SIMPLESMENTE ENCADEADAS, a LISTAS SIMPLESMENTE ENCADEADAS deve ser exibida na tela._

_d) Observar tratamento de erros e RESTRIÇÕES associados a LISTAS SIMPLESMENTE ENCADEADAS._

_e) no vetor de dados da struct LISTAS SIMPLESMENTE ENCADEADAS, guarde as idades dos clientes presentes na LISTAS SIMPLESMENTE ENCADEADAS._


## _Código_

```shell

#include <stdlib.h>           // Bibliotecas 
#include <stdio.h>           //
#include <math.h>           //
#include <stdio.h>         //
#include <locale.h>       //
#include <stdlib.h>      //


typedef struct no               // declaracao da variavel tipo struct no
{
	int valor;                // variavel interna valor
	struct no* prox;         // variavel prox
} NO;                       // typedef no , para facilitar chamada do tipo variavel


// prototipos de funçoes do exercicio 1 
void removerIni (NO *pList);                                                           // funcao removerini reponsavel pela remocao dos valores iniciais a lista 
void imprimirLISTA(NO* Lista);                                                        // funcao imprimirlista reponsavel pela impressao dos valores contido na lista
void inserirINICIO(NO **Lista, int val);                                             // funcao inserirFim reponsavel pela insercao dos valores do inicio da lista
void AddvaluevarC__TESTE(NO** kbcListaEx1C, NO** kbcListaEx1A, NO** kbcListaEx1B);  // funcao addvaluevarc__TESTE funcao responsavel por adicionar valores na Lista  c
void menu ();                                                                      // funcao menu reponsavel pelo menu das atividades 
void exercicio_1 ();                                                              // funcao exercicio_1 responsavel pelo conteudo da questao 1  

// prototipos de funçoes do exercicio 2 
void exercicio_2();                                                              // funcao exercicio_2 responsavel pelo conteudo da questao 2    ( NO CASO AINDA NAO ESTA PRONTA, FICOU DE ENVIAR PELO EMAIL O ARQUIVO ATUALIZADO CONTENDO ELA)
void inserirINICIO(NO **Lista, int val);                                        // funçao inserirINICIO responsavel pelo inserçao de valores no inicio 
void imprimirLISTA(NO* Lista);                                                 // funcao imprimirLISTA reponsavel pela impressao da lista 
int contagem(NO* Lista);                                                      // funcao contagem reponsavel pela contagem dos valores da lista 
int removerulti(NO** lista);                                                 // funcao removerulti reponsavel pela remoçao de valores iniciais 
int primeirovalor(NO* lista);                                               // funcao primeirovalor reponsavel por mostrar o primeiro valor da lista 
	  

int main ()  
{
setlocale(LC_ALL,"Portuguese");	  // comando para reconhecimento de caracteres e palavras com acentuaçao 
menu();                          // chamada para funçao menu 

}

void menu ()                 // Funcao menu, para permitir com que o usuario navegue nos exercios 
{
int x,y;   // variavel interna 
do        // laço de repeticao "do" "while" para permitir repeticoes ate com que o usuario deseje parar o codigo 
{
printf("---------------------------------------------------\n");        //  Apresentacao da funcao menu 
printf("Ola!!! Digite qual atividade deseja abrir: \n\n");             // 
printf("1 - Exercício_01 \n");                                        // 
printf("2 - Exercício_02 \n");                                       //
printf("0 - Sair \n\n");                                            //
printf("---------------------------------------------------\n");   //
scanf("%d",&x);                                                   // Comando para armazenar o digito do usario 
system("cls");                                                   // comando para limpar tela 
switch (x)                                                      // Laço de repeticao "switch_case"
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
		  printf("Digite um numero valido! \n\n");    // Apresentaçao caso usuario digite valor incorreto do solicitado 
		  break;                                     // parada do case padrap 
}
}while (x != 0);	        // fim do laço 
}



void exercicio_1 ()                                                           // funcao principal
{
	setlocale(LC_ALL, "Portuguese");                             	// comando para reconhecimento de caracteres e palavras com acentuaçao
	printf(" ------------------------------------ \n\n");          //  apresentacao da selecao de exercicio selecionado pelo usuario
	printf(" Parabens ! Voce escolheu o exercício 1. \n\n");      //
	printf(" ------------------------------------ \n\n");        //

	NO* kbcListaEx1A;                    //  declacacao da variavel kbcListaEx1A tipo struct para armazenar valor do endereço da primeira variavel da lista
	kbcListaEx1A = NULL;                // recebendo valor null, para justificar fim da lista A

	NO* kbcListaEx1B;                 //  declacacao da variavel kbcListaEx1B tipo struct para armazenar valor do endereço da primeira variavel da lista
	kbcListaEx1B = NULL;             // recebendo valor null, para justificar fim da lista B

	NO* kbcListaEx1C;              //  declacacao da variavel kbcListaEx1C tipo struct para armazenar valor do endereço da primeira variavel da lista
	kbcListaEx1C = NULL;          // recebendo valor null, para justificar fim da lista C
	
	NO* AUXA;                    //  declacacao da variavel AUXA tipo struct para armazenar valor do endereço da primeira variavel da lista 
	AUXA = NULL;                // recebendo valor null, para justificar fim da AUXA

	NO* AUXB;                 //  declacacao da variavel AUXB tipo struct para armazenar valor do endereço da primeira variavel da lista
	AUXB = NULL;             // recebendo valor null, para justificar fim da AUXB

    

	system("pause");            // comando para dar pause no codigo
	system("cls");             // comando para limpar tela

	printf(" ------------------------------------ \n\n");           // Apresentacao das informacoes iniciais das duas pilhas A e B
	printf(" Com dados de duas pilhas abaixo: \n\n");              //
	printf(" |   1   |   e  |   2   |   \n");                     //
	printf(" |-------|      |-------|   \n");                    //
	printf(" |   4   |      |   3   |   \n");                   //
	printf(" |-------|      |-------|   \n");                  //
	printf(" |   6   |      |   5   |   \n");                 //
	printf(" |-------|      |-------|   \n");                //
	printf(" |   A   |      |   B   |   \n\n");             //
	printf(" ------------------------------------ \n\n");  //
	system("pause");                                      // comando para dar pause no codigo
	system("cls");                                       // comando para limpar tela

	printf(" ----------------------------------------------------------------------------------------------- \n\n");              //   Informando ao usuario o processo que sera realizado
	printf(" Serao organizados os números em ordem crescente (de baixo para cima) em uma terceira pilha. \n\n");                 //
	printf(" Utilizando Listas Simplesmente Encadeadas. \n\n");                                                                 //
	printf(" ----------------------------------------------------------------------------------------------- \n\n");           //
	system("pause");                                // comando para dar pause no codigo
	system("cls");                                 // comando para limpar tela

	inserirINICIO(&kbcListaEx1A, 6);             // chamada da funçao inserirodernada para a insercao do valor 6 na lista kbcListaEx1A
	inserirINICIO(&kbcListaEx1A, 4);            // chamada da funçao inserirodernada para a insercao do valor 4 na lista kbcListaEx1A
	inserirINICIO(&kbcListaEx1A, 1);           // chamada da funçao inserirodernada para a insercao do valor 1 na lista kbcListaEx1A
	inserirINICIO(&kbcListaEx1B, 5);          // chamada da funçao inserirodernada para a insercao do valor 5 na lista kbcListaEx1B
	inserirINICIO(&kbcListaEx1B, 3);         // chamada da funçao inserirodernada para a insercao do valor 3 na lista kbcListaEx1B
	inserirINICIO(&kbcListaEx1B, 2);        // chamada da funçao inserirodernada para a insercao do valor 2 na lista kbcListaEx1B
     
    AUXA = kbcListaEx1A;    // Salvando valores da Lista A na Lista AUXA para no final fazermos uma apresnetacao de todas as listas
    AUXB = kbcListaEx1B;   // Salvando valores da Lista B na Lista AUXB para no final fazermos uma apresnetacao de todas as listas
    
    
	
   	// processo se repete 3 vezes, porque a cada vez que é chamada esta funcao sao adicionados dois valores na Lista C. Ao chamar 3 vezes, 6 valores sao armazenados no total. Assim ao somar valores contidos na Lista A e Lista B temos 6 elementos.
	AddvaluevarC__TESTE(&kbcListaEx1C, &kbcListaEx1A, &kbcListaEx1B);   // Chamada da funcao addvalueC, no caso ira fazer a adicao dos valores contidos na lista A (kbcListaEx1A) e lista B (kbcListaEx1B) na Lista C (kbcListaEx1C)
	AddvaluevarC__TESTE(&kbcListaEx1C, &kbcListaEx1A, &kbcListaEx1B);  // Chamada da funcao addvalueC, no caso ira fazer a adicao dos valores contidos na lista A (kbcListaEx1A) e lista B (kbcListaEx1B) na Lista C (kbcListaEx1C)
	AddvaluevarC__TESTE(&kbcListaEx1C, &kbcListaEx1A, &kbcListaEx1B); // Chamada da funcao addvalueC, no caso ira fazer a adicao dos valores contidos na lista A (kbcListaEx1A) e lista B (kbcListaEx1B) na Lista C (kbcListaEx1C)
	printf(" ------------------------------ RESULTADO ------------------------------ \n");
	printf(" A adição dos valores contidos na Lista A e Lista B em ordem crescente  \n\n");
	printf(" na Lista C, ficaram da seguinte forma:  \n\n");
	printf(" lista A. \n");                                                                           // PRINT TEST PARA DETECTAR O INICIO DAS INFORMACOES DA LISTA A
	imprimirLISTA(AUXA);                                                                             // chamada da funcao imprimirlista, que ira fazer a impressao da lista A (POIS COPIAMOS NA LISTA AUXA VALORES DA LISTA A )
	printf(" lista B. \n");                                                                         // PRINT TEST PARA DETECTAR O INICIO DAS INFORMACOES DA LISTA B
	imprimirLISTA(AUXB);                                                                           // chamada da funcao imprimirlista, que ira fazer a impressao da lista B (POIS COPIAMOS NA LISTA AUXA VALORES DA LISTA B)
	printf(" lista C. \n");                                                                       // PRINT TEST PARA DETECTAR O INICIO DAS INFORMACOES DA LISTA C
	imprimirLISTA(kbcListaEx1C);                                                                 // chamada da funcao imprimirlista, que ira fazer a impressao da lista C (kbcListaEx1C)/
	printf(" ----------------------------------------------------------------------- \n\n");
	system("pause");                                                                           // comando para dar pause no codigo
	system("cls");                                                                            // comando para limpar tela

}


void imprimirLISTA(NO* Lista)                             // Funcao imrpimir lista, reponsavel pela visualizaçao da Lista 
{

	NO* aux;                                           // variaveis internas auxiliares 
	printf("\n\n");                                   // açao para pular lista 
	for(aux = Lista; aux != NULL ; aux = aux->prox)  // Laço de repeticao for para percorrer valores e ir printando valores na tela 
	{
		printf(" \t  -> |   %d  |  \n ", aux->valor);              // apresentacao do laco de repeticao 
	}
	printf("\n\n");                            // açao para pular lista
}

void inserirINICIO(NO **Lista, int val)          // Funçao responsavel por inserir valores no inicio da lista. Garantindo execuçao igual a uma PILHA
{

	NO* novoNO;                               // variaveis internas auxiliares 
	novoNO = (NO*) malloc(sizeof(NO));

	novoNO->valor = val;          // adicionando valor da variavel entregue a funcao a Lista entregue tambem a esta funcao 
	novoNO->prox = NULL;         // atribuindo um Final a lista 

	novoNO->prox = *Lista;     //
	*Lista = novoNO;          // Salvando a alteracao feita com o auxiliar a Lista principal  

}



void removerIni (NO** Lista)                             // Funcao remover valor inicial, reponsavel por remover valores no incio da Lista. Garantindo execuçao igual a uma PILHA
{
	

	NO *aux = *Lista;                                 // Variaveis internas (auxiliares) e atribuindo valor da variavel interna auxiliar o valor da Lista na qual foi entregue a esta funçao 
	if(aux == NULL)                                  // Sentença if comparando o valor 'null' para evitar com que tenha 'underflow'	
		printf ("\n\n LISTA VAZIA \n");             // apresentacao de caso houver 'underflow'
	else
	{
		*Lista = aux->prox;                      // atribuindo valor aux->prox da mesma variavel para ela mesma por meio do uso da auxiliar 
	}
}




void AddvaluevarC__TESTE(NO** kbcListaEx1C, NO** kbcListaEx1A, NO** kbcListaEx1B) // Funcao para adicionar valor a pilha C
{

	NO *aux, *aux2;                                                        // declaracao das variaveis internas, aux = variavel auxiliar que sera percorrida pelo laco de repeticao ( o mesmo utilizado na funcao imprimirLista ) e ser comparada a variavel aux 2 para assim determinar a ordenacao dos valores em ordem crescente, para ser armazenado na Lista C.

	aux = *kbcListaEx1A;                                                 // Atribuindo valores da Lista A para um auxiliar 1 
	aux2 = *kbcListaEx1B;                                               // Atribuindo valores da Lista B para um auxiliar 2 
	printf("\n\n");                                                    // funcao para pular linha
	if (aux->valor > aux2->valor)                                     // Estrutura de condicao  if para comparacao dos dos valores da Lista A (aux) e Lista B (aux2)
	{
		inserirINICIO(kbcListaEx1C, aux2->valor);       // Chamada da funcao "inserir ordenada", reponsavel por armazenar o menor valor entre eles primeiro
		removerIni(&aux2);                             // Chamada da funcao remover inicio, responsavel por remover valores do topo da lista 
		inserirINICIO(kbcListaEx1C, aux->valor);      // Chamada da funcao "inserir inicio", reponsavel por armazenar o segundo menor valor entre eles apos a insercao do primeiro valor menor entre os dois comparados
		removerIni(&aux);                            // Chamada da funcao remover inicio, responsavel por remover valores do topo da lista 
		*kbcListaEx1A =  aux;                       // Atribuindo alteraçoes realizadas com os auxiliares para a Lista A principal 
		*kbcListaEx1B =  aux2;                     // Atribuindo alteraçoes realizadas com os auxiliares para a Lista B principal 
	}
	else if (aux->valor < aux2->valor)
	{
		inserirINICIO(kbcListaEx1C, aux->valor);                       // Chamada da funcao "inserir ordenada", reponsavel por armazenar o menor valor entre eles primeiro
		removerIni(&aux);                                             // Chamada da funcao remover inicio, responsavel por remover valores do topo da lista 
		inserirINICIO(kbcListaEx1C, aux2->valor);                    // Chamada da funcao "inserir inicio", reponsavel por armazenar o segundo menor valor entre eles apos a insercao do primeiro valor menor entre os dois comparados
		removerIni(&aux2);                                          // Chamada da funcao remover inicio, responsavel por remover valores do topo da lista  
		*kbcListaEx1A =  aux;                                      // Atribuindo alteraçoes realizadas com os auxiliares para a Lista A principal 
		*kbcListaEx1B =  aux2;                                    // Atribuindo alteraçoes realizadas com os auxiliares para a Lista B principal 
	}

}


void exercicio_2()                                // funcao exercicio dois, reponsavel pelo conteudo do exercicio 2 
{ 
  NO* filadobanco;                              //    declaracao da variavel tipo NO* com nome filadobanco 
	  filadobanco = NULL;                      //  iniciando variavel filadobanco com prox = NULL 
		
	  NO* filadobancoaux;                    //  declaracao da variavel auxiliar tipo NO* com nome filadobancoaux 
	  filadobancoaux = NULL;                //  iniciando variavel filadobancoaux com prox = NULL 
		
	
	int op, val;                         // variaveis internas
	do
	{
	    system("cls");                                                                             // limpar a tela
       	printf("-------------------- INICIO --------------------\n\n");                           // Apresentacao do menu do exercicio 2 
	    printf("        <<< fila de banco >>>              \n\n");                               //
	    printf(" O programa simulara uma fila de banco.   \n");                                 //
	    printf(" Prioridade de atendimento para clientes maiores de 60 anos. \n\n");           //
	    printf(" Usando Listas Simplismente Encadeadas. \n\n");                               //
	    printf(" Digite uma açao:  \n\n");                                                   //
	    printf(" 1 - Inserir  ->  inserir valores a fila \n");                              //
	    printf(" 2 - Consulta ->  Consultar o primeiro da fila\n");                        //
	    printf(" 3 - Remover  ->  Remover o primeiro da fila \n");                        //
	    printf(" 4 - Tamanho  ->  Verificar o tamanho da fila\n");                       //
	    printf(" 0 - sair     ->  voltar ao menu do programa\n\n");                     // 
	    printf("------------------------------------------------\n");                  //
	    scanf("%d", &op);                                                             // funcao para salvar valor digitado pelo usuario 
	    system("cls");                                                               // funcao para limpar tela
	    switch(op)
    	{
    	case 1:
            	printf("-------------- INSERIR --------------\n\n");          //  apresentacao da selecao da açao inserir, selecionado pelo usuario 
            	printf(" Parabens ! Voce escolheu 'inserir'. \n\n");         //
            	printf("---------------------------------------\n");        //
            	printf("\n\t Insira um valor:  ");                         //
            	scanf("%d", &val);                                        // funcao para salvar valor digitado pelo usuario 
            	system("cls");                                           // funcao para limpar tela
            	if(val > 150)
            	{
            		printf("------------------------------------------------\n\n");          //  apresentacao da quando usuario digitar valores acima de 500
	            	printf("Ops! insira um valor mais justo pra uma idade ;) \n\n");        //
            		printf("------------------------------------------------\n");          //
	            	system("pause");                                                      // funcao para pausar o sistema  
	            	system("cls");                                                       // funcao para limpar tela
	            }
            	else
            	{
                if (val <60)                                                          // sentenca para permitir filtro de valores acima de 60  
           	    {
	               inserirINICIO(&filadobanco,val);                                 // chamada da funcao inserirINICIO, cujo aqui ela ira adicionar o valor digitado pelo usario e inserir na Lista
	               printf("------------------------------------------------\n\n"); 
            	   imprimirLISTA(filadobanco);                                    // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
            	   imprimirLISTA(filadobancoaux);                                // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
           	    }
            	else
	            {
	               inserirINICIO(&filadobancoaux,val);                                      // chamada da funcao inserirINICIO, cujo aqui ela ira adicionar o valor digitado pelo usario e inserir na Lista
	               printf("------------------------------------------------\n\n");
	               imprimirLISTA(filadobanco);                                            // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista normal
	               imprimirLISTA(filadobancoaux);                                        // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial 
	            }
	            } 
			    break; // quebra de linha
    	case 2:
               	printf("------------- CONSULTAR -------------\n\n");                    //  apresentacao da selecao de consultar, selecionado pelo usuario 
        	    printf(" Parabens ! Voce escolheu 'Consultar'. \n\n");                 //
                printf("-------------------------------------\n");                    //
                system("pause");                                                     // funcao para pausar o sistema 
                system("cls");                                                      // funcao para limpar tela
            	printf("------------------------------------------------\n\n");    //
            	if (contagem(filadobanco) == 0 && contagem(filadobancoaux) == 0)  // sentenca de comparacao com 'if' para  avaliar se as Listas contem valores iguais a 0. Este metodo e feito atraves da chamada da funcao 'Contagem'
            	{
	               printf(" Ops ! Sua fila esta fazia. \n\n");                          // apresentacao quando a Lista estiver fazia 
	               printf(" Impossivel consultar valores! \n\n");                      // 
	               printf("------------------------------------------------\n\n");    //
	               system("pause");                                                  // funcao para pausar o sistema 
	               system("cls");                                                   // funcao para limpar tela
            	}
            	else
	            {
            	if (contagem(filadobancoaux) > 0)                                                      // setenca de comparacao com 'if' para avaliar se a lista filadobancoaux (lista preferencial) tem valores maiores que 0. Este metodo e feito atraves da chamada da funcao 'Contagem' 
            	{
	                printf(" O primeiro da fila é -> %d \n\n", primeirovalor(filadobancoaux));       // chamada da funcao 'primeirovalor' responsavel por retornar valor que esta no inicio da Lista 
                	printf("    ->Fila preferencial <-  \n\n");                                     // apresentacao da lista preferencial 
                	imprimirLISTA(filadobancoaux);                                                 // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
                	printf("    ->Fila Normal <-  \n\n");                                         // apresentaçao da lista normal 
                	imprimirLISTA(filadobanco);                                                  // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
                	printf("------------------------------------------------\n\n");             //
                	system("pause");                                                           // funcao para pausar o sistema 
                	system("cls");                                                            // funcao para limpar tela
            	}
	            else
            	{
                	printf(" O primeiro da fila é -> %d \n\n", primeirovalor(filadobanco));    // chamada da funcao 'primeirovalor' responsavel por retornar valor que esta no inicio da Lista 
	                printf("     ->Fila preferencial <-  \n\n");                              // apresentacao da lista preferencial 
                	imprimirLISTA(filadobancoaux);                                           // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
                	printf("     ->Fila Normal <-  \n\n");                                  // apresentaçao da lista normal
                	imprimirLISTA(filadobanco);                                            // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
                   	printf("------------------------------------------------\n\n");       //
	                system("pause");                                                     // funcao para pausar o sistema 
                	system("cls");                                                      // funcao para limpar tela
            	}
            	}
            	break; // quebra de linha
    	case 3:
	           	printf("--------------- REMOVER ---------------\n\n");                  //  apresentacao da selecao remover, selecionado pelo usuario 
	        	printf(" Parabens ! Voce escolheu 'remover'. \n\n");                   //
	        	printf("---------------------------------------\n\n");                //
	        	system("pause");                                                     // funcao para pausar o sistema 
	        	system("cls");                                                      // funcao para limpar tela      
	        	printf("------------------------------------------------\n\n");    // 
	        	if (contagem(filadobancoaux) > 0)                                 // sentenca 'if' para priorizar com que remova valores primeiro da Lista aux , no caso a Lista preferencial. Este metodo e feito atraves da chamada da funcao 'Contagem'
	        	{
	           	     if (contagem(filadobancoaux) == 1)                         // setenca de comparacao com 'if' para avaliar se a lista filadobancoaux (lista preferencial) tem valores maiores que iguais a 1. Este metodo e feito atraves da chamada da funcao 'Contagem'.
		             {
		                  printf(" O valor removido foi : %d \n\n", filadobancoaux->valor);         // apresentaçao do valor removido 
		                  removerulti(&filadobancoaux);                                            // chamada da funcao removerulti, reponsavel por remover o ultimo valor da lista 
		                  printf("   ------> Agora restam <------  \n\n");                        // aprensentacao da lista restante apos a remoçao dos valores  
		                  printf("    ->Fila preferencial <-  \n\n");                            //
		                  imprimirLISTA(filadobancoaux);                                        // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
	                 	  printf("     ->Fila Normal <-  \n\n");                               //
	                 	  imprimirLISTA(filadobanco);                                         // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
	                 	  printf("------------------------------------------------\n\n");    //
	                 	  system("pause");                                                  // funcao para pausar o sistema
	                 	  system("cls");                                                   // funcao para limpar tela
	        	     }	
		              else
	            	  {
		                   printf(" O valor removido foi : %d \n\n", removerulti(&filadobancoaux) );      // chamada da funcao 'removerulti' responsavel por remover o primeiro valor inserido na Lista
	                       printf("   ------> Agora restam <------  \n\n");                              // aprensentacao da lista restante apos a remoçao dos valores 
	        	           printf("    ->Fila preferencial <-  \n\n");                                  // 
		                   imprimirLISTA(filadobancoaux);                                              // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
		                   printf("     ->Fila Normal <-  \n\n");                                     //
		                   imprimirLISTA(filadobanco);                                               // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
		                   printf("------------------------------------------------\n\n");          //
		                   system("pause");                                                        // funcao para pausar o sistema 
		                   system("cls");                                                         // funcao para limpar tela
		              }
	              }
	        	else
		          {
		              if (contagem(filadobanco) > 0)                                                         // sentenca 'if' para verificar se a Lista filadobanco contem valores maiores que 0. Este metodo e feito atraves da chamada da funcao 'Contagem' 
		              {
		                 if (contagem(filadobanco) == 1)                                                   // setenca de comparacao com 'if' para avaliar se a lista filadobanco (Lista normal) tem valores maiores que iguais a 1. Este metodo e feito atraves da chamada da funcao 'Contagem'
		                 {
		                      printf(" O valor removido foi : %d \n\n", filadobanco->valor);             // apresentaçao do valor removido 
		                      removerulti(&filadobanco);                                                // chamada da funcao removerulti, reponsavel por remover o ultimo valor da lista
		                      printf("  ------> Agora restam <------  \n\n");                          // aprensentacao da lista restante apos a remoçao dos valores 
		                      printf("   ->Fila preferencial <-  \n\n");                              //
	                     	  imprimirLISTA(filadobancoaux);                                         // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
	                     	  printf("     ->Fila Normal <-  \n\n");                                //
	                     	  imprimirLISTA(filadobanco);                                          // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
	                     	  printf("------------------------------------------------\n\n");     //
	                     	  system("pause");                                                   // funcao para pausar o sistema 
	                     	  system("cls");                                                    // funcao para limpar tela
		                 }	
		                 else
		                 {  	
		                      printf(" O valor removido foi : %d \n\n", removerulti(&filadobanco) );     // chamada da funcao 'removerulti' responsavel por remover o primeiro valor inserido na Lista
		                      printf("   ------> Agora restam <------  \n\n");                          // aprensentacao da Fila restante apos a remoçao dos valores 
		                      printf("    ->Fila preferencial <-  \n\n");                              // 
	                          imprimirLISTA(filadobancoaux);                                          // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
	                     	  printf("     ->Fila Normal <-  \n\n");                                 //
	                     	  imprimirLISTA(filadobanco);                                           // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
	                     	  printf("------------------------------------------------\n\n");      //
	                     	  system("pause");                                                    // funcao para pausar o sistema 
	                     	  system("cls");                                                     // funcao para limpar tela
	                	  }
	                  }
	              }
	            if (contagem(filadobanco) == 0 && contagem(filadobancoaux) == 0 )         // sentença de comparaçao 'if' para comaparar se  a quantidade de valores das lista filadobanco e filadobancoaux sao iguais a 0. Este metodo e feito atraves da chamada da funcao 'Contagem'
	             {	  
		          printf(" Ops ! Sua fila esta vazia. \n\n");                           // apresentacao da lista vazia
	        	  printf(" Impossivel remover mais valores! \n\n");                    //
	        	  printf("------------------------------------------------\n\n");     //
	        	  system("pause");                                                   // funcao para pausar o sistema 
	        	  system("cls");                                                    // funcao para limpar tela
	        	  }
	           	break; // quebra de linha
       	case 4:
	              printf("--------------- TAMANHO ---------------\n\n");        //  apresentacao da selecao tamanho, selecionado pelo usuario 
	              printf(" Parabens ! Voce escolheu 'tamanho'. \n\n");         //
	              printf("---------------------------------------\n\n");      //
	              system("pause");                                           // funcao para pausar o sistema 
	              system("cls");                                            // funcao para limpar tela
	              printf("------------------------------------------------\n\n");
	              if (contagem(filadobanco) == 0 && contagem(filadobancoaux) == 0 )                // sentença de comparaçao 'if' para comaparar se  a quantidade de valores das lista filadobanco e filadobancoaux sao iguais a 0. Este metodo e feito atraves da chamada da funcao 'Contagem'
	                 {
		                  printf(" Ops ! Sua fila esta fazia. \n\n");                            // apresentacao quando a lista estiver fazia 
	            	      printf(" Impossivel consultar tamanho! \n\n");                        // 
	            	      printf("------------------------------------------------\n\n");      //
	            	      system("pause");                                                    // funcao para pausar o sistema 
	            	      system("cls");                                                     // funcao para limpar tela
	                 }
	                 else
	                 {
	                      printf(" O tamanho da fila é : %d \n\n", contagem(filadobanco) + contagem(filadobancoaux));   // soma das Listas 'filhadobanco'  e 'filadobancoaux' para conseguir todo a quantidade de elementos digitados. Este metodo e feito atraves da chamada da funcao 'Contagem'
	                      printf("     ->Fila preferencial <-  \n\n");                                                 // apresentaçao da lista atual 
	                      imprimirLISTA(filadobancoaux);                                                              // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista preferencial
	                      printf("     ->Fila Normal <-  \n\n");                                                     //
	                      imprimirLISTA(filadobanco);                                                               // chamada da funcao imprimirLISTA, cujo o objetivo é imprimir a lista  normal
	                      printf("------------------------------------------------\n\n");                          //
	                      system("pause");                                                                        // funcao para pausar o sistema
						  system("cls");                                                                         // funcao para limpar tela 
	                 }
	                break; // quebra de linha
    	case 0:
	               printf("\n\n ... voltando ao menu principal ... \n\n");                                   // apresentacao da selecao sair, selecionado pelo usuario  
	                break; // quebra de linha
    	default:
    		    {
	               printf("-----------------------------\n\n");                                           // Apresentaçao quando o usuario digitar opcao invalida 
	               printf(" Digite uma opção válida!\n\n");                                              //
	               printf("-----------------------------\n\n");                                         //
	               system("pause");                                                                    // funcao para pausar o sistema 
	               system("cls");                                                                     // funcao para limpar tela
              	}
              	
	    }
	}while(op != 0);  // laco de repeticao 'do' 'while'
}



	
	
	
	int contagem(NO* Lista)                                          // Declaraçao da funcao contagem, reponsavel por fazer a contagem dos elementos contidos nas Listas 
	{
	int i;                                                         // variaveis internas 
	i =0;                                                         // declaradndo valor  0 a variavel interna 'i'
	NO* aux;                                                     // declarando variavel tipo NO* aux
	for(aux = Lista; aux != NULL ; aux = aux->prox)             // laço de repeticao 'for' para percorrermos os valores da lista 
	{
		i++;                                                  // atribuindo +1 
	}
	return i;                                               // retornando valor de i apos a finalizaçao do laco de repeticao 
	}
	
	
	int removerulti(NO** lista)                                   // Declaraçao da funcao removerulti, reponsavel por fazer a remoçao do primeiro elemento. Curioso pois o nome menciona 'ultimo'. Acontece que atraves desta metodologia deste algoritimo o ultimo é o primeiro elemento digitado, sendo assim garante o funcionamento igual de uma Fila.
	{
	NO* aux;                                                    // declarando variavel tipo NO* aux 
	aux = *lista;	                                           // igualando valores de Lista para aux, ou seja passando valores da lista que enviaremos a ela e igualando em uma variavel auxiliar
	if(contagem(*lista) == 1)	                              // sentenca de condicao para verificar se a quantidade de elementos da lista que passamos para esta funcao é igual a 1. 
	{                     
	removerIni (lista);	             	                    // chamada da funcao removerini, esta funcao e a funcao cujo remove o valor inicial. Como so contem um valor entao ela ira remover o valor unico contido na funcao. 
	}
	if(contagem(*lista) == 0){                            // sentenca de condicao 'if' para verificar se a quantidade de elementos da lista que passamos para esta funcao é igual a 0. E assim ela retorna NULL.   
	return NULL;                                         // retornando null 
	}
	else
	{
	NO* ultimo = (*lista)->prox,                     // criando variavel tipo NO* com nome  ultimo e igualando o valor prox da lista que passamos para esta funcao 
	*penultimo = (*lista);                          // criando variaveis tipo NO* com nome penultimo e igualando a  lista que passamos para esta funcao 
	
	while(ultimo->prox != NULL){                  // laco de repticao 'do' 'while' para percorrer enquanto valor ultimo->prox tenha valor diferente de null 
	 penultimo = ultimo;                         //  igualando valor de ultimo na variavel penultimo 
	 ultimo = ultimo->prox;                     // igualando valor de ultimo->prox na variavel ultimo 
	}
	
	penultimo->prox = NULL;                  // atribuindo valor null na variavel penultimo-prox
	return ultimo->valor;                   // retornando valor do ultimo valor 
	}
	}
	
	
	
	int primeirovalor(NO* lista)                     // declaracao da funcao primerovalor, reponsavel por devolver o primeiro valor da Lista, garantindo funcionamento igual a de uma Fila 
	{
	NO* aux;	                                   // declarando variavel tipo NO* aux
	aux = lista;                                  // igualando valores de Lista para aux, ou seja passando valores da lista que enviaremos a ela e igualando em uma variavel auxiliar
	while(aux->prox != NULL)                     // laco de repticao 'do' 'while' para percorrer enquanto valor de aux->prox diferente de NULL 
		{   
			aux = aux->prox;                   // igualando valor de aux->prox na variavel aux
		}
	if (aux->prox == NULL)                   // sentenca de condicao 'if' para verificar se aux->prox é igual a NULL 
	{      
	return aux->valor ;                    // retornando valor aux->valor 
	}
	}

```
