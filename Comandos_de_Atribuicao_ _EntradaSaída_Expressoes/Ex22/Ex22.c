/*22. Desenvolva uma aplicação em linguagem C que receba a idade de um indivíduo em anos, meses e dias e mostre-a expressa apenas em dias*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano, mes, dias, dia;
	printf ("Digite a sua idade em anos, meses e dias:\n");
	scanf ("%i%i%i", &ano, &mes, &dia);
	fflush (stdin);
	dias = (ano*365) + (mes *30) +dia;
	system ("cls");
	printf ("A sua idade em dias é: %i\n\n", dias);
	
	system ("pause");
	return 0;
}
