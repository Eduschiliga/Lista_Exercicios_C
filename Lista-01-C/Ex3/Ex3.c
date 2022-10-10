/*3. Faça um programa que leia dois números reais e em seguida mostre: a soma, o
produto, a divisão e a subtração entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, produto, divisao, subtracao;
	printf ("Digite o primeiro número:\n");
	scanf ("%f", &n1);
	fflush(stdin);
	printf ("Digite o segundo número:\n");
	scanf ("%f", &n2);
	fflush(stdin);
	soma = (n1 + n2);
	system("cls");
    fflush(stdin);
	printf ("Resultado das devidas operações:\n\n ");
	printf ("Soma: %.2f\n", soma);
	subtracao = (n1 - n2);
	printf ("Subtração: %.2f\n", subtracao);
	produto = (n1 * n2);
	printf ("Produto: %.2f\n", produto);
	divisao = (n1 / n2);
	printf ("Divisão: %.2f\n\n", divisao);
	
	
	system ("pause");
	return 0;
}
