/*18. Fa�a um programa que leia o n�mero do funcion�rio, o n�mero de horas trabalhadas
mensais, o valor que recebe por hora e o n�mero de filhos com idade menor de 14 anos.
Calcular e escrever o sal�rio deste funcion�rio, sendo que cada filho menor de 14 anos
acrescenta 10% do sal�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int nfuncionario, nhoras, nfilhosmenor14;
	float valorhora, salariofunc, salario10, salariof;
	printf ("Digite o n�mero do funcion�rio: ");
	scanf ("%i", &nfuncionario);
	fflush (stdin);
	printf ("\nDigite o n�mero de horas trabalhadas mensais:  ");
	scanf ("%i", &nhoras);
	fflush (stdin);
	printf ("\nDigite o valor que recebe por hora:  ");
	scanf ("%f", &valorhora);
	fflush (stdin);
	printf ("Digite o n�mero de filhos com idade menor que 14:  ");
	scanf ("%i", &nfilhosmenor14);
	fflush(stdin);
	salariofunc = (nhoras * valorhora);
	salario10 = salariofunc /10;
	salariof = (nfilhosmenor14 * salario10) + salariofunc;
	
	printf ("Sal�rio mensal do funcion�rio:  %.2f\n", salariof);
	system ("pause");
	return 0;
}
