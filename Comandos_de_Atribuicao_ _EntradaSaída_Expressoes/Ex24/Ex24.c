/*24. Dadas duas frações ordinárias a/b e c/d, determinar a sua soma e o seu produto. Pense e decida como seria a entrada de dados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, den1, den2, prod, soma;
	printf ("Informe o valor do numerador e do denominador da fração 1:\n");
	scanf ("%f%f", &num1, &den1);
	fflush (stdin);
	system ("cls");
	printf ("Informe o valor do numerador e do denominador da fração 2:\n");
	scanf ("%f%f", &num2, &den2);
	system ("cls");
	soma = (num1 * den2) + (num2 * den1) / (den1 * den2);
	prod = (num1 * num2) / (den1 * den2);
	printf ("Produto das frações: %.2f", prod);
	printf ("\nSomatório: %.2f\n\n", soma);

	system ("pause");
	return 0;
}
