/*2. Fa�a um programa para ler dois valores (x e y), calcular e mostrar x elevado �
pot�ncia de y.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, potencia;
	printf ("Escreva o primeiro n�mero:\n");
	scanf ("%f", &n1);
	printf ("Escreva o segundo n�mero:\n");
	scanf ("%f", &n2);
	potencia = pow(n1,n2);
	printf ("O n�mero %.2f elevado a %.2f �: %.2f\n\n", n1, n2, potencia);
	
	system ("pause");
	return 0;
}
