/*19. O valor ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um
programa em C que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
custof + porcentagemd + imposto					*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float custof, valordistr, imposto, custocons;
	valordistr = 28;
	imposto = 45;
	printf ("Digite o custo de fábrica:  ");
	scanf ("%f", &custof);
	fflush (stdin);
	valordistr = custof + (custof * valordistr /100);
	imposto = custof + (custof * imposto /100);
	custocons = custof + imposto + valordistr;
	system ("cls");
	printf ("O valor ao consumidor é: R$%.2f\n\n", custocons);
	
	system ("pause");
	return 0;
}
