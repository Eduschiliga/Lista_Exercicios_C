#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
//-----------------------------------------------------------------------------------
//Exemploo break
void exbreak () 
{
	int a = 7, num, tentativas = 1;
	printf ("Adivinhe o n�mero de 1 a 10\n\n");
	while ( tentativas <= 3)
	{
		printf ("\n%d tentativa\nDigite o n�mero:\n", tentativas);
		scanf ("%d", &num);
		if (num < a) 
		{
			printf ("\nO n�mero � maior que %d\n", num);
		}
		else if (num > a) 
		{
			printf ("\nO n�mero � menor que %d\n", num);
		}
		if (num == 7)
		{
			printf ("\nParab�ns voc� acertou o n�mero!!!\n\n");
			break;
		}
		tentativas++;
	}
	if (tentativas == 4)
	{
		printf ("Voc� n�o acertou!!!!\n\n");
	}
}
//-----------------------------------------------------------------------------------
//Exemplo continue
void excontinue () 
{
	int num, foranum, cont, cont2 = 1, qtd[9999], i = 0, numfora;
	//leitura do tamanho da sequ�ncia
	printf ("Digite at� que n�mero vai a sequ�ncia:\n");
	scanf ("%d", &num);
	//verifica��o se o n�mero � positivo
	if  (num <= 0)
	{
		system ("cls");
		printf ("Digite at� que n�mero vai a sequ�ncia:\n");
		scanf ("%d", &num);
	}
	//leitura do n�mero que vai ficar fora da sequ�ncia
	printf ("Digite quantos n�meros vai ficar fora da sequencia:\n");
	scanf ("%d", &numfora);
	while (cont2 <= numfora)
	{
		printf ("Digite o n�mero que deseja deixar fora da sequ�ncia:\n");
		scanf ("%d", &qtd[i]);
		i++;
		cont2++;
	}
	printf ("\n");
	i = 0;
	for (cont = 0; cont <= num; cont++ )
	{
		//Quando cont == foranum, interrompe somente o la�o atual
		if( cont == qtd[i])
		{
			printf ("-\n");
			i++;
			continue;
		}
		printf ("%d\n", cont);
	}
}
//-----------------------------------------------------------------------------------
//Exemplo return
float calcpot (float b,int e)
{
	int cont = 1, resultado = 1; 
	while (cont <= e) 
	{  
		resultado = resultado * b; 
		cont++;
	}
	return (resultado); 
}
//-----------------------------------------------------------------
void retorno (void)
{
	int exp;
	float base;
	printf ("Fun��o para calcular pot�ncia\n\n");
	printf ("Digite a base e o expoente:\n");
	scanf ("%f%d", &base, &exp);
	if (exp < 0)
	{
		printf ("Digite a base e o expoente:\n");
		scanf ("%f%d", &base, &exp);
	}
	printf ("\n%.1f elevado a %d �: %.1f\n\n", base, exp, calcpot(base, exp));
}
//-----------------------------------------------------------------------------------
//Exemplo Goto
void exgoto (void) 
{
	int i = 0, j = 1, resposta, erros = 0, acertos = 0, op;
	//-----------------------------------------------------------------
	comeco:
		for ( j = 1; j < 10; j++)
		{
			printf ("Qual a resposta de %d + %d ?\n", i, j);
			scanf ("%d", &resposta);
			if (resposta != (i + j))
			{
				erros++;
				printf ("Resposta errada!\n\n");
			}
			else
			{
				acertos++;
				printf ("Resposta correta!\n\n");
			}
		}
		printf ("Acertos = %d\n", acertos);
		printf ("Erros = %d\n", erros);
	//-----------------------------------------------------------------
	continuar:
		printf ("\n-------------------------------------------------\n|\tContinuar respondendo?  1- Sim, 2- N�o\t|\n-------------------------------------------------\n");
		scanf ("%d", &op);
		printf ("\n");
		switch (op)
		{
			case 1:
				i++;
				goto comeco;
				break;
				
			case 2:
				break;
				
			default :
				printf ("Op��o inv�lida.\n");
				goto continuar;		
		}
	//-----------------------------------------------------------------	
}
//-----------------------------------------------------------------------------------
void comandoexit (void)
{
    int i;
	printf("Executando o programa...\n");
	for (i = 1;i <=5;i++)
	{
		sleep (1);
		printf(".\n");	
	}
    printf("\nEncerrando o programa...");
    sleep(2);
    exit(EXIT_SUCCESS);
}
//-----------------------------------------------------------------------------------
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int op;
	do
	{
		printf ("\n-------------------------------------------------\n|\t\tSelecione:\t\t\t|\n-------------------------------------------------\n|\t1 - Exemplo comando break\t\t|\n|\t2 - Exemplo comando continue\t\t|\n|\t3 - Exemplo comando return\t\t|\n|\t4 - Exemplo comando goto\t\t|\n|\t5 � Exemplo fun��o exit\t\t\t|\n|\t6 � Sair\t\t\t\t|\n-------------------------------------------------\n");
		scanf ("%d", &op);
		system ("cls");
		switch (op)
		{
			case 1:
				exbreak ();
				break;
			
			case 2:
				excontinue ();
				break;
			
			case 3:
				retorno ();
				break;
			
			case 4:
				exgoto ();
				break;
			
			case 5:
				comandoexit ();
				break;
			
			case 6:
				break;
			
			default:
				printf ("Op��o inv�lida!\n\n");
			break;	
		}
	} while (op != 6);
	return 0;
}
