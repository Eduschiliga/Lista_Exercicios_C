/*6. Elaborar um programa para efetuar o c�lculo do valor de uma presta��o em atraso,
utilizando a f�rmula:
PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float prestacao, valor, taxa, tempo;
	printf ("\nC�LCULO DE PRESTA��O\n\nDigite os seguintes valores para os itens a seguir:\n\n-Valor da presta��o\n-Taxa\n-Dias de atraso:\n\n");
	scanf ("%f%f%f", &valor, &taxa, &tempo);
	fflush (stdin);
	prestacao = valor + (valor*(taxa/100)*tempo);
	system("cls");
	fflush(stdin);
	printf ("O valor da presta��o � R$%.2f\n\n", prestacao);
	system ("pause");
	return 0;
}
