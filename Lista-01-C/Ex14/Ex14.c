/*14. Escrever um programa que l� o n�mero de um vendedor, o seu sal�rio fixo, o total
de vendas por ele efetuadas e o percentual que ganha sobre o total de vendas. Calcular o
sal�rio total do vendedor. Escrever n�mero do vendedor e o sal�rio total.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int nvendedor;
	float sfixo, totvendas, pvendas, stot, comissao;
	printf ("Digite o n�mero do vendedor:\n");
	scanf ("%i", &nvendedor);
	fflush (stdin);
	printf ("Digite o sal�rio fixo:\n");
	scanf ("%f", &sfixo);
	fflush (stdin);
	printf ("Digite o total de vendas efetuadas:\n");
	scanf ("%i", &totvendas);
	fflush (stdin);
	printf ("Digite o percentural sobre o total de vendas:\n");
	scanf ("%f", &pvendas);
	comissao = totvendas * (pvendas/100);
	stot = sfixo + comissao;
	system ("cls");
	printf ("C�digo do vendedor: %i\nSal�rio total: R&%.2f.\n", nvendedor, stot);
	system ("pause");
	return 0;
}
