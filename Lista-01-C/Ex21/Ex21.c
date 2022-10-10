/*21. Quais as operações necessárias para intercambiar os valores de 3 variáveis A, B e C de modo que A fique com o valor de B; B fique com o valor de C e C fique com o valor de A?
A fique com o de B / 	B com o de C /	 C com o de A*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, aux;
	printf ("Digite o primeiro, segundo e o terceiro número:\n");
	scanf ("%f%f%f", &a, &b, &c);
	fflush (stdin);
	aux = a;
	a = b;
	b = c;
	c = aux;
	system ("cls");
	printf ("\n\nO primeiro número é: %.2f\nO segundo número é: %.2f\nO terceiro número é: %.2f\n\n", a,b,c);

	
	system ("pause");
	return 0;
}
