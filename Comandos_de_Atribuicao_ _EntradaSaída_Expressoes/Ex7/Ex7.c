/*7. Fa�a um programa para ler um valor (o lado de um quadrado), calcular e mostrar a
respectiva �rea do quadrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float lado, area;
	printf ("C�LCULO DA �REA DO QUADRADO\n\nDigite o valor do lado do quadrado:\n");
	scanf ("%f", &lado);
	fflush (stdin);
	area = pow(lado,2);
	system("cls");
	printf("A �rea do quadrado �: %.2f\n\n", area);
	system ("pause");
	return 0;
}
