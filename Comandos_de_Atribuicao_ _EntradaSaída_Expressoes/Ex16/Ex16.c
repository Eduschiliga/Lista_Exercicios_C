/*16. Desenvolva um programa para ler valores para as variaveis y e z. Depois, calcule e
mostre o valor de x, atrav�s express�o:
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float x, y, z;
	printf ("Digite o valor de Y e Z:\n");
	scanf ("%f%f", &y,&z);
	fflush (stdin);
	x = sqrt (y*(pow(y,22)+pow(z,33)));
	printf ("O resultado da express�o �: %.2f\n\n", x);
	system ("pause");
	return 0;
}
