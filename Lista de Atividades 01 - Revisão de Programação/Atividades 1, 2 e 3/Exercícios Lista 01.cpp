
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
	
