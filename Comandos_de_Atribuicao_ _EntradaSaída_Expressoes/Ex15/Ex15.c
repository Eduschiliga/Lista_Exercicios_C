/*15. Construa um programa que calcule a seguinte fórmula, e mostre no final o valor de
RESULT:
RESULT = (2 * A mod 3) – A*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int result, A;
	printf ("Digite o valor de A: ");
	scanf ("%f", &A);
	fflush (stdin);
	result = (2 * A % 3)- A;
	system ("cls");
	printf ("O valor de RESULT é: %i\n.", result);
	system ("pause");
	return 0;
}
