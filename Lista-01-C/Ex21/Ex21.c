/*21. Quais as opera��es necess�rias para intercambiar os valores de 3 vari�veis A, B e C de modo que A fique com o valor de B; B fique com o valor de C e C fique com o valor de A?
A fique com o de B / 	B com o de C /	 C com o de A*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, aux;
	printf ("Digite o primeiro, segundo e o terceiro n�mero:\n");
	scanf ("%f%f%f", &a, &b, &c);
	fflush (stdin);
	aux = a;
	a = b;
	b = c;
	c = aux;
	system ("cls");
	printf ("\n\nO primeiro n�mero �: %.2f\nO segundo n�mero �: %.2f\nO terceiro n�mero �: %.2f\n\n", a,b,c);

	
	system ("pause");
	return 0;
}
