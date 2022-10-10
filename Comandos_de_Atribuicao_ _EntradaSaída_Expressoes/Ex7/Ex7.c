/*7. Faça um programa para ler um valor (o lado de um quadrado), calcular e mostrar a
respectiva área do quadrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float lado, area;
	printf ("CÁLCULO DA ÁREA DO QUADRADO\n\nDigite o valor do lado do quadrado:\n");
	scanf ("%f", &lado);
	fflush (stdin);
	area = pow(lado,2);
	system("cls");
	printf("A área do quadrado é: %.2f\n\n", area);
	system ("pause");
	return 0;
}
