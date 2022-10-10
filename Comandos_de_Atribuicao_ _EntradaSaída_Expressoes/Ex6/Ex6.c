/*6. Elaborar um programa para efetuar o cálculo do valor de uma prestação em atraso,
utilizando a fórmula:
PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float prestacao, valor, taxa, tempo;
	printf ("\nCÁLCULO DE PRESTAÇÃO\n\nDigite os seguintes valores para os itens a seguir:\n\n-Valor da prestação\n-Taxa\n-Dias de atraso:\n\n");
	scanf ("%f%f%f", &valor, &taxa, &tempo);
	fflush (stdin);
	prestacao = valor + (valor*(taxa/100)*tempo);
	system("cls");
	fflush(stdin);
	printf ("O valor da prestação é R$%.2f\n\n", prestacao);
	system ("pause");
	return 0;
}
