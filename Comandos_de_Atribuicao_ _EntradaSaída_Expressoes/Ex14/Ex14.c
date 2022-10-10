/*14. Escrever um programa que lê o número de um vendedor, o seu salário fixo, o total
de vendas por ele efetuadas e o percentual que ganha sobre o total de vendas. Calcular o
salário total do vendedor. Escrever número do vendedor e o salário total.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int nvendedor;
	float sfixo, totvendas, pvendas, stot, comissao;
	printf ("Digite o número do vendedor:\n");
	scanf ("%i", &nvendedor);
	fflush (stdin);
	printf ("Digite o salário fixo:\n");
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
	printf ("Código do vendedor: %i\nSalário total: R&%.2f.\n", nvendedor, stot);
	system ("pause");
	return 0;
}
