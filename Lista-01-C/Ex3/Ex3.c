/*3. Fa�a um programa que leia dois n�meros reais e em seguida mostre: a soma, o
produto, a divis�o e a subtra��o entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, produto, divisao, subtracao;
	printf ("Digite o primeiro n�mero:\n");
	scanf ("%f", &n1);
	fflush(stdin);
	printf ("Digite o segundo n�mero:\n");
	scanf ("%f", &n2);
	fflush(stdin);
	soma = (n1 + n2);
	system("cls");
    fflush(stdin);
	printf ("Resultado das devidas opera��es:\n\n ");
	printf ("Soma: %.2f\n", soma);
	subtracao = (n1 - n2);
	printf ("Subtra��o: %.2f\n", subtracao);
	produto = (n1 * n2);
	printf ("Produto: %.2f\n", produto);
	divisao = (n1 / n2);
	printf ("Divis�o: %.2f\n\n", divisao);
	
	
	system ("pause");
	return 0;
}
