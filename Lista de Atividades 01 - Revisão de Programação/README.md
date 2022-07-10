# Lista de Atividades 01 - Revisão de Programação

<img src="https://github.com/ScenioMathias/APL-2/blob/main/ALP.png?raw=true" alt="smashupy" width="700"/>

## Anunciado das atividades 

* Arquivo pdf com enunciado das 3 atividades.

## Atividades 1,2 e 3

* Arquivo em C++ contendo os 3 exercícios.

## _Exercício 1_

_Solicite ao usuário que digite dois valores inteiros e guarde-os em
variáveis distintas, imprima na tela qual o primeiro e qual o segundo valor
digitado pelo usuário, efetue passagem de parâmetros por valor, dessas
variáveis para uma função chamada verifica, DENTRO DESTA FUNÇÃO
verifique e imprima qual o maior valor e se o mesmo é par ou ímpar._
 
## _Exercício 2_

_Solicite ao usuário que digite quatro valores inteiros e guarde-os em
variáveis distintas A, B, C e D, imprima os valores identificando-os. Crie
uma função chamada calcula, e dentro desta função apenas calcule: A+B,
C-D, A*D, B/C, os resultados das operações deverão ser armazenados nas
variáveis ‘add’, ‘sub’, ‘multi’ e ‘div’, EXTERNAS À FUNÇÃO calcula, E
DEVERÃO SER IMPRESSOS FORA DA FUNÇÃO, para isso utilize
passagem de parâmetros por referência. (Dica1, se quiser pode usar um
vetor! Dica2, pelo menos a variável ‘div’ deve ser declarada como de ponto
flutuante, float, pois receberá o resultado de uma operação de divisão e,
portanto, pode armazenar um valor decimal.)_

## _Exercício 3_

_Solicite ao usuário que digite o valor do raio R de uma esfera, crie uma
função chamada esfera, e dentro desta função calcule a área ( A = 4* * R2 ) e
o volume (V = 4\3 * * R 3 ) da esfera. Os resultados deverão ser armazenados
diretamente em variáveis externas à função esfera, e deverão ser impressos
fora da função, para isso utilize passagem de parâmetros por referência.
(Dica3, na implementação do cálculo do volume use 4.0 / 3.0, e variáveis
do tipo float.)_

## _Código_

 ```shell
 #include <math.h>
	#include <stdio.h>
	#include <locale.h>
	#include <stdlib.h>
	#define PI 3.1415
	
	void exercicio_1();
	void exercicio_2 ();
	void exercicio_3 ();
	void verifica(int, int);
	void calcula(int , int , int , int , int * , int *, int *, float*);
	void menu ();
	void esfera(float*,float*,float*);
	
	int main ()
	{
	  setlocale(LC_ALL,"Portuguese");	
	  menu();
	    
	}
	
	void menu ()
	{
		int x,y;
		do
		{
		printf("**************************************************\n");
		printf("Ola!!! Digite qual atividade deseja abrir: \n\n");
		printf("1 - Exercício_01 \n");
		printf("2 - Exercício_02 \n");
		printf("3 - Exercício_03 \n");
		printf("0 - Sair \n\n");
		printf("**************************************************\n");
		scanf("%d",&x);
		system("cls");
		switch (x)
		{
			case 0:
				  break;
			case 1: 
			      exercicio_1();
			      system("pause"); 
			      system("cls");
			      break;
			         
			case 2: 
			      exercicio_2();
			      break;
			case 3: 
			      exercicio_3();
			      break;
			default: 
			      printf("Digite um numero valido! \n\n");  
				  break;
	    }
		}while (x != 0);	
	}
				          
	
	
	
	void exercicio_1 ()
	{
		int x,y;
		printf("****************************************\n");
		printf("Parabens ! Voce escolheu o exercício 1. \n\n");
		printf("Digite o primeiro valor inteiro: \n\n");
		printf("****************************************\n");
		scanf("%d",&x);
		system("cls");
		printf("***************************************\n");
		printf("Agora, digite o segundo valor inteiro: \n\n");
		printf("***************************************\n");
		scanf("%d",&y);
		system("cls");
		printf("*************************************************\n");
		printf(" O primeiro número digitado por você foi: %d \n\n",x);
		printf(" E o segundo número digitado por você foi:  %d \n\n",y);
		verifica(x, y);
	}
	
	
	void verifica (int valor1, int valor2)
	{
		 int valor3; 
		 if (valor1 > valor2)
		 {
		     printf(" O número %d", valor1);
			 printf(" é o maior valor!");
			 valor3 = valor1;
		     if ((valor3 % 2) == 0)
			{
				printf(" e ele é par!\n\n");
				 printf("*************************************************\n");
			}
			 else 
			{
			     printf(" e ele é impar!\n\n");	
			     printf("*************************************************\n");
			}
		}
		else
		     if (valor2 > valor1)  
			 	{	
			     printf(" O número %d", valor2 );
			     printf(" é o maior valor!");
			     valor3 = valor2;
				     if ((valor3 % 2) == 0)
			        {
			        	printf(" e ele é par!\n\n");	
			            printf("*************************************************\n");
				    }
				 else
				    {
				    	printf(" e ele é impar!\n\n");	
			            printf("*************************************************\n");
				    }
				 }
		        
	}
	
	void exercicio_2 (){
		int A, B, C, D, add, sub, multi;

        float div;
		
		printf("****************************************\n");
		printf(" Parabens ! Voce escolheu o exercício 2. \n\n");
		printf(" Digite o primeiro valor inteiro: \n\n");
		printf("***************************************\n");
		scanf("%d",&A);
		system("cls");
		printf("***************************************\n");
		printf(" Digite o segundo valor inteiro: \n\n");
		printf("***************************************\n");
		scanf("%d",&B);
		system("cls");
		printf("***************************************\n");
		printf(" Digite o terceiro valor inteiro: \n\n");
		printf("***************************************\n");
		scanf("%d",&C);
		system("cls");
		printf("***************************************\n");
		printf(" Agora, digite o quarto valor inteiro: \n\n");
		printf("***************************************\n");
		scanf("%d",&D);
		system("cls");
		printf("****************************************\n");
		printf(" Os valores atribuidos sao: \n\n");
		printf(" A - %d\n\n",A);
		printf(" B - %d\n\n",B);
		printf(" C - %d\n\n",C);
		printf(" D - %d\n\n",D);
		printf("****************************************\n");
		system("pause");
		system("cls");
		calcula(A, B, C, D, &add, &sub, &multi, &div);
		
		printf("***************************************\n\n");
		printf(" %d + %d = %d\n\n",A,B,add);

        printf(" %d - %d = %d\n\n",C,D,sub);

        printf(" %d * %d = %d\n\n",A,D,multi);

        printf(" %d / %d = %2.2f\n\n",B,C,div);
        printf("***************************************\n");
        system("pause");
		system("cls");
		
		
}
		
	void calcula (int A, int B, int C, int D, int *add, int *sub, int *multi, float *div){
		
		*add = A + B;

        *sub = C - D;

        *multi = A * D;

        *div = (B + 0.0) / C;
	} 	
	
			
		
	
	void exercicio_3 (){
		float raio, area, volume;
		printf("****************************************\n");
		printf(" Parabens! Voce escolheu o exercício 3. \n\n");
		printf(" Digite o valor do raio da esfera: \n\n");
		printf("***************************************\n");
		scanf("%f",&raio);
		system("cls");
		esfera(&raio, &area, &volume);
		
		printf("***************************************\n\n");
		printf(" A área da esfera é : %f \n\n", area);
		printf(" O volume da esfera é : %f\n\n", volume);
		printf("***************************************\n");
		system("pause");
		system("cls");
	}
	
	
	void esfera(float *raio, float *area, float *volume)
	{
		*area = 4 * 3.14 * (*raio * *raio); 
		
		*volume = (4.0/3.0) * 3.14 * (*raio * *raio * *raio);
	}
 
 ```

