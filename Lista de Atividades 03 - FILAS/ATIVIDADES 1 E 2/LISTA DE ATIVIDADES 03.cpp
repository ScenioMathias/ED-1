
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 10







// estrutura da fila a ser utilizada
typedef struct fila
{
int vetor[MAX];   // vetor oara armazenamento dos valores da fila 
int inicio;   // variavel para indicar o inicio da fila 
int qtde;   // variavel para indicar a quantidade de valores na fila
} Fila ;

// prototipos das funcoes
void enfileirar(int aux, Fila* Fila);    // funcao para adicionar valores na fila 
int consultarInicio(Fila Fila);    // funcao para consultar o valor que esta no inicio da fila 
void removerDaFila(Fila* Fila);  // funcao para remover valor que esta no inicio da fila 
void menu ();    // funcao menu da lista de exercicio 3 
void exercicio_1 ();    // funcao do exercicio 1  
void exercicio_2 ();   // funcao do exercicio 2 
void imprimirfila(Fila,Fila); // funcao responsavel por imprimir valores contidos nas filas na tela para o usuario 

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
//struct fila filadopao;
Fila filadopao;  //  declarando fila com nome 'filadopao' 
filadopao.inicio = 0;  // declarando valor da variavel incial da variavel inicio 
filadopao.qtde = 0;  // declarando valor da variavel quantidade

int op, valor;   // variaveis internas 
do
{
system("cls"); // limpar a tela
printf("*************************************************\n");                   //  Apresentacao do menu do exercicio 1 
printf("        <<< fila de padaria >>>              \n\n");                    // 
printf(" O programa simulara uma fila de padaria.   \n");                      // 
printf(" O primeiro valor digitado � o primeiro a sair. \n\n");               //
printf(" Digite uma a�ao:  \n\n");                                           //
printf(" 1 - Inserir  ->  inserir valores a fila \n");                      //
printf(" 2 - Consulta ->  Consultar o primeiro da fila\n");                //
printf(" 3 - Remover  ->  Remover o primeiro da fila \n");                //
printf(" 4 - Tamanho  ->  Verificar o tamanho da fila\n");               //
printf(" 0 - sair     ->  voltar ao menu do programa\n\n");             //
printf("*************************************************\n");         //
scanf("%d", &op);      // funcao para salvar valor digitado pelo usuario 
system("cls");    // funcao para limpar tela
switch(op)    
{
case 1:
	printf("****************************************\n\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
	printf(" Parabens ! Voce escolheu 'inserir'. \n\n");         //
	printf("***************************************\n\n");      //
	printf("\n\t Insira um valor:  ");                         //
	scanf("%d", &valor);    // funcao para salvar valor digitado pelo usuario 
	system("cls");         // funcao limpar tela
	enfileirar(valor, &filadopao);     // chamada da funcao enfilerar para adicao de valores na fila 'filadopao'
	break;  // quebra de linha 
case 2:
	printf("****************************************\n\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
	printf(" Parabens ! Voce escolheu 'Consultar'. \n\n");       //
	printf("***************************************\n\n");      //
	system("pause");    // funcao para pausar o sistema 
	system("cls");     // funcao para limpar tela 
	printf("***********************************************\n\n");                   //
	printf("\n\t O primeiro da fila � -> %d \n\n", consultarInicio(filadopao) );    // aoresentacao do valor que se apresenta no inicio da fila 
	printf("***********************************************\n\n");                 //
	system("pause");  // funcao para salvar valor digitado pelo usuario 
	system("cls");   // funcao para limpar tela
	break;
case 3:
	if (filadopao.qtde > 0)
	{
		printf("****************************************\n\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
		printf(" Parabens ! Voce escolheu 'remover'. \n\n");         //
		printf("***************************************\n\n");      //
		system("pause");  // funcao para pausar o sistema 
		system("cls");
		printf("*************************************\n\n"); 
		printf(" O valor removido foi -> %d \n\n", consultarInicio(filadopao) );
		printf("*************************************\n"); 
		removerDaFila(&filadopao);  // chamada da funcao 'removerdafila', cujo a funcao tem o objetivo de remover valor do inicio da fila 
		system("pause");  // funcao para pausar o sistema 
		system("cls");   // funcao para limpar tela
	}
	else
	{
	printf("*****************************************************************\n\n");    // apresentacao quando a fila estiver vazia 	
	printf(" Ops ! Sua fila esta vazia, impossivel remover mais valores! \n\n");       //
	printf("*****************************************************************\n");    //
	system("pause"); // funcao para pausar o sistema 
	system("cls");  // funcao para limpar tela
	}
	break;  // quebra de linha
case 4:
	printf("****************************************\n\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
	printf(" Parabens ! Voce escolheu 'tamanho'. \n\n");         //
	printf("***************************************\n\n");      //
	system("pause"); // funcao para pausar o sistema   
	system("cls");  // funcao para limpar tela
	printf("\n\t O tamanho da fila �  -> %d \n\n", filadopao.qtde );    // chamada da funcao 'filadopao' cujo o objetivo � retornar valor da quantidade de elementos da fila 	
	system("pause");   // funcao para pausar o sistema 
	break;   // quebra de linha 
case 0:
	printf("\n\n ... voltando ao menu principal ... \n\n"); // apresentacao da selecao sair 
	break;  // quebra de linha
default:
	printf("*****************************\n\n");    // apresentacao de digito errado 
	printf(" Digite uma op��o v�lida!\n\n");       //
	printf("*****************************\n\n");  //
	system("pause"); // funcao para pausar o sistema 
	system("cls");  // funcao para limpar tela
}
}
while(op != 0);  // la�o de repeticao 'do' 'while'
}



void enfileirar(int aux, Fila* Fila)    // funcao  enfileirar, funcao cujo objetivo � adicionar valor no fim da fila 
{
if(Fila->qtde < MAX)    // sentenca para verificar se a fila esta cheia ou nao 
{
printf("****************************************\n\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
printf(" Parabens ! Valor inserido com exito! \n\n");        //
printf("***************************************\n\n");      //
system("pause");  // funcao para pausar o sistema 
system("cls");   // funcao para limpar tela
// F.A [  (F.in�cio + F.n) mod F.max  ] � v
Fila->vetor[ ((Fila->inicio + Fila->qtde) % MAX ) ] = aux;  // funcao para inserir valor e pular o valor de inicio da fila 

// F.n � F.n + 1
Fila->qtde++;   // somar mais um na variavel quantidade responsavel por informar quantidade de valores na fila 
}
else
{
printf("*****************************************************************\n\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
printf(" Ops ! Sua fila esta cheia, impossivel adicionar mais valores! \n\n");        //
printf("***************************************************************\n\n");       //
system("pause");  // funcao para pausar o sistema 
system("cls");   // funcao para limpar tela
}
}


int consultarInicio(Fila Fila)    // funcao cujo o objetivo � verificar e mostrar qual valor esta no inicio da fila 
{ 
return Fila.vetor[Fila.inicio];  // retorno do valor que se situa no inicio da fila 
}

void removerDaFila(Fila* Fila)      // funcao cujo o objetivo � remover o valor incial da fila 
{
// F.in�cio � (F.in�cio + 1) mod F.max
Fila->inicio = (( Fila->inicio + 1 ) % MAX);  // calculo para remover valor inicial e adicionar mais um na variavel inicio 
// F.n � F.n � 1
Fila->qtde--;   // decrementar valor na quantidade
}



void exercicio_2 (){      // funcao do  exercicio 2 
//struct fila filadobanco;
Fila filadobanco;    // declaracao da fila com nome 'filadobanco'
filadobanco.inicio = 0;     // declarando valor 0 a variavel inicio 
filadobanco.qtde = 0;      // declarando valor 0 a variavel quantidade
Fila filadobancoaux;       // declaracao da fila auxiliar com o nome 'filadobancoaux'
filadobancoaux.inicio = 0;   // declarando valor 0 a variavel inicio 
filadobancoaux.qtde = 0;    // declarando valor 0 a variavel quantidade

int op, val;   // variaveis internas
do
{
system("cls"); // limpar a tela
printf("*****************************************************************\n");           // Apresentacao do menu do exercicio 2 
printf("        <<< fila de banco >>>              \n\n");                              //
printf(" O programa simulara uma fila de banco.   \n");                                //
printf(" Prioridade de atendimento para clientes maiores de 60 anos. \n\n");          //
printf(" Digite uma a�ao:  \n\n");                                                   //
printf(" 1 - Inserir  ->  inserir valores a fila \n");                              //
printf(" 2 - Consulta ->  Consultar o primeiro da fila\n");                        //
printf(" 3 - Remover  ->  Remover o primeiro da fila \n");                        //
printf(" 4 - Tamanho  ->  Verificar o tamanho da fila\n");                       //
printf(" 0 - sair     ->  voltar ao menu do programa\n\n");                     // 
printf("*****************************************************************\n"); //
scanf("%d", &op);   // funcao para salvar valor digitado pelo usuario 
system("cls");  // funcao para limpar tela
switch(op)
{
case 1:
	printf("****************************************\n\n");       //  apresentacao da selecao da a�ao inserir  selecionado pelo usuario 
	printf(" Parabens ! Voce escolheu 'inserir'. \n\n");         //
	printf("***************************************\n\n");      //
	printf("\n\t Insira um valor:  ");                         //
	scanf("%d", &val);    // funcao para salvar valor digitado pelo usuario 
	system("cls");   // funcao para limpar tela
	if(val > 150)
	{
		printf("************************************************\n\n");         //  apresentacao da quando usuario digitar valores acima de 500
		printf("Ops! insira um valor mais justo pra uma idade ;) \n\n");       //
		printf("************************************************\n\n");       //
		system("pause");   // funcao para pausar o sistema  
		system("cls");    // funcao para limpar tela
	}
	else
	{
	if (val <60)   // sentenca para permitir filtro de valores acima de 60  
	   {
	   enfileirar(val, &filadobanco);   // chamada da funcao enfilerar, cujo aqui ela ira adicionar o valor digitado pelo usario e inserir na fila 
	   printf("**************************************************\n\n"); 
	   imprimirfila(filadobanco,filadobancoaux);     // chamada da funcao imprimirfila, cujo o objetivo � imprimir a fila preferencial e a fila normal
	   system("pause");   // funcao para pausar o sistema 
	   }
	else
	   {
	   enfileirar(val, &filadobancoaux);    // chamada da funcao enfilerar, cujo aqui ela ira adicionar o valor digitado pelo usario e inserir na fila
	   printf("**************************************************\n\n");
	   imprimirfila(filadobanco,filadobancoaux);  // chamada da funcao imprimirfila, cujo o objetivo � imprimir a fila preferencial e a fila normal
	   system("pause");  // funcao para pausar o sistema 
	   }
	}
	break; // quebra de linha
case 2:
	printf("****************************************\n\n");                 //  apresentacao da selecao de exercicio selecionado pelo usuario 
	printf(" Parabens ! Voce escolheu 'Consultar'. \n\n");                 //
	printf("***************************************\n\n");                //
	system("pause");  // funcao para pausar o sistema 
	system("cls");   // funcao para limpar tela
	printf("**************************************************\n\n");  //
	if (filadobancoaux.vetor[filadobancoaux.inicio] == 0 && filadobanco.vetor[filadobanco.inicio] == 0  || filadobancoaux.vetor[filadobancoaux.inicio] > 500 && filadobanco.vetor[filadobanco.inicio] > 500)  // sentenca de comparacao com 'if' para permitir que valores de 'lixo de memoria' e '0' nao seja adicionado na apresentacao da funcao 'imprimirfila'
	{
	   printf(" Ops ! Sua fila esta fazia. \n\n");                          // apresentacao quando a fila estiver fazia 
	   printf(" Impossivel consultar valores! \n\n");                      // 
	   printf("**************************************************\n\n");  //
	   system("pause");  // funcao para pausar o sistema 
	   system("cls");   // funcao para limpar tela
	}
	else
	{
	if (filadobancoaux.qtde > 0)  // setenca if 
	{
	printf("\n\t O primeiro da fila � -> %d \n\n", consultarInicio(filadobancoaux) );    // chamada da funcao 'consultarinicio' responsavel por retornar valor que esta no inicio da fila
	imprimirfila(filadobanco,filadobancoaux);  // chamada da funcao imprimirfila, cujo o objetivo � imprimir a fila preferencial e a fila normal
	system("pause");  // funcao para pausar o sistema 
	system("cls");   // funcao para limpar tela
	}
	else
	{
	printf("\n\t O primeiro da fila � -> %d \n\n", consultarInicio(filadobanco) );  // setenca if 
	imprimirfila(filadobanco,filadobancoaux);  // chamada da funcao imprimirfila, cujo o objetivo � imprimir a fila preferencial e a fila normal
	system("pause");  // funcao para pausar o sistema 
	system("cls");   // funcao para limpar tela
	}
}
	break; // quebra de linha
case 3:
		printf("****************************************\n\n");                 //  apresentacao da selecao de exercicio selecionado pelo usuario 
		printf(" Parabens ! Voce escolheu 'remover'. \n\n");                   //
		printf("***************************************\n\n");                //
		system("pause");  // funcao para pausar o sistema 
		system("cls");   // funcao para limpar tela
		printf("**************************************************\n\n");  // 
		if (filadobancoaux.qtde > 0)  // sentenca 'if' para priorizar com que remova valores primeiro da fila aux , no caso a fila preferencial
		  {
		  printf(" O valor removido foi -> %d \n\n", consultarInicio(filadobancoaux) );      // chamada da funcao 'consultarinicio' responsavel por retornar valor que esta no inicio da fila
		  imprimirfila(filadobanco,filadobancoaux);  // chamada da funcao imprimirfila, cujo o objetivo � imprimir a fila preferencial e a fila normal
		  removerDaFila(&filadobancoaux); // funcao remover fila reponsavel por remover o valor inicial da fila 
		  system("pause");  // funcao para pausar o sistema 
		  }
		else
		  {
		  if (filadobanco.qtde > 0)    // sentenca 'if' para caso nao tenha valor na fila aux, no caso a fila preferencial remova valores da fila normal 
		  {
		  printf(" O valor removido foi -> %d \n\n", consultarInicio(filadobanco) );    // chamada da funcao 'consultarinicio' responsavel por retornar valor que esta no inicio da fila
		  imprimirfila(filadobanco,filadobancoaux);  // chamada da funcao imprimirfila, cujo o objetivo � imprimir a fila preferencial e a fila normal
		  removerDaFila(&filadobanco);  // funcao remover fila reponsavel por remover o valor inicial da fila 
		  system("pause");   // funcao para pausar o sistema 
		  }
		  else
		  {	
		  printf(" Ops ! Sua fila esta vazia. \n\n");                           // apresentacao de fila vazia
		  printf(" Impossivel remover mais valores! \n\n");                    //
		  printf("**************************************************\n\n");   //
		  system("pause"); // funcao para pausar o sistema 
		  system("cls");  // funcao para limpar tela
		  }
		break; // quebra de linha
case 4:
	printf("****************************************\n\n");       //  apresentacao da selecao de exercicio selecionado pelo usuario 
	printf(" Parabens ! Voce escolheu 'tamanho'. \n\n");         //
	printf("***************************************\n\n");      //
	system("pause");   // funcao para pausar o sistema 
	system("cls");    // funcao para limpar tela
	if (filadobancoaux.vetor[filadobancoaux.inicio] == 0 && filadobanco.vetor[filadobanco.inicio] == 0  || filadobancoaux.vetor[filadobancoaux.inicio] > 500 && filadobanco.vetor[filadobanco.inicio] > 500)  // sentenca de comparacao com 'if' para permitir que valores de 'lixo de memoria' e '0' nao seja adicionado na apresentacao da funcao 'imprimirfila'
	{
		printf(" Ops ! Sua fila esta fazia. \n\n");                          // apresentacao quando a fila estiver fazia 
		printf(" Impossivel consultar valores! \n\n");                      // 
		printf("**************************************************\n\n");  //
		system("pause");  // funcao para pausar o sistema 
		system("cls");   // funcao para limpar tela
	}
	else
	{
	printf("\n\t O tamanho da fila �  -> %d \n\n", filadobanco.qtde + filadobancoaux.qtde );   // soma das pilhas 'filhadobanco'  e 'filadobancoaux' para conseguir todo a quantidade de elementos digitados
	imprimirfila(filadobanco,filadobancoaux);     // chamada da funcao imprimirfila, cujo o objetivo � imprimir a fila preferencial e a fila normal 
	system("pause");  // funcao para pausar o sistema 
	}
	break; // quebra de linha
case 0:
	printf("\n\n ... voltando ao menu principal ... \n\n");  // apresentacao da selecao sair 
	break; // quebra de linha
default:
	printf("*****************************\n\n");        // Apresenta�ao quando o usuario digitar opcao invalida 
	printf(" Digite uma op��o v�lida!\n\n");           //
	printf("*****************************\n\n");      //
	system("pause");  // funcao para pausar o sistema 
	system("cls");   // funcao para limpar tela
}
}
}while(op != 0);  // laco de repeticao 'do' 'while'
}



void imprimirfila(Fila filadobanco, Fila filadobancoaux)    // funcao imprimir fila, responsavel pela impressao dos elementos da fila 'filadobanco' e 'filadobancoaux'
{
printf(" Fila preferencial                  Fila normal \n\n");    // apresentacao das filas
do
{
if (filadobancoaux.vetor[filadobancoaux.inicio] == 0 || filadobancoaux.vetor[filadobancoaux.inicio] > 500)        // seten�a 'if'  para limitar que caso valores 0 e mais de 500 (lixo de memoria) nao seja emitidos na apresentacao da fila  
{
	{                                                        
	printf("                              %d  ->  |   %d  |   \n",filadobanco.inicio + 1,filadobanco.vetor[filadobanco.inicio]);   // appresentacao da fila 
	// F.in�cio � (F.in�cio + 1) mod F.max
	filadobanco.inicio = (( filadobanco.inicio + 1 ) % MAX); // calculo para a soma da variavel inicio limitando que nao passe de  10 e caso passe de 9 retorne a 0 
	// F.n � F.n � 1
	filadobanco.qtde--;  // decrementacao do valor da quantidade 
	}


}
else
if (filadobanco.vetor[filadobanco.inicio] == 0 || filadobanco.vetor[filadobanco.inicio] > 500)        // seten�a 'if'  para limitar que caso valores 0 e mais de 500 (lixo de memoria) nao seja emitidos na apresentacao da fila  
{	
printf(" %d  ->  |   %d  |               \n",filadobancoaux.inicio +1,filadobancoaux.vetor[filadobancoaux.inicio]);  // appresentacao da fila 
// F.in�cio � (F.in�cio + 1) mod F.max
filadobancoaux.inicio = (( filadobancoaux.inicio + 1 ) % MAX); // calculo para a soma da variavel inicio limitando que nao passe de  10 e caso passe de 9 retorne a 0 
// F.n � F.n � 1
filadobancoaux.qtde--; // decrementacao do valor da quantidade 
}
else                                                        
{                                                          
printf(" %d  ->  |   %d  |            %d  ->  |   %d  |   \n",filadobancoaux.inicio +1,filadobancoaux.vetor[filadobancoaux.inicio],filadobanco.inicio +1,filadobanco.vetor[filadobanco.inicio]);  // appresentacao da fila 
// F.in�cio � (F.in�cio + 1) mod F.max
filadobancoaux.inicio = (( filadobancoaux.inicio + 1 ) % MAX); // calculo para a soma da variavel inicio limitando que nao passe de  10 e caso passe de 9 retorne a 0 
filadobanco.inicio = (( filadobanco.inicio + 1 ) % MAX); // calculo para a soma da variavel inicio limitando que nao passe de  10 e caso passe de 9 retorne a 0 
// F.n � F.n � 1
filadobancoaux.qtde--; // decrementacao do valor da quantidade  
filadobanco.qtde--;   // decrementacao do valor da quantidade 
}
}
while (filadobanco.qtde > 0 || filadobancoaux.qtde > 0 );  // laco de repeticao 'do' 'while' para parada quando valor quantidade seja igual ou menor que 0
printf("**************************************************\n\n");
}





