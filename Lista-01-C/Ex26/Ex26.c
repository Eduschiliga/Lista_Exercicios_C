/*26. Dado um n�mero inteiro n�o nulo de tr�s d�gitos, imprimir este n�mero ao contr�rio, isto e, se a entrada for 123 (cento e vinte e tr�s), imprimir 321 (trezentos e vinte e um). Usar opera��es sobre inteiros, por exemplo, divis�es sucessivas por 10.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int numero, d1, d2, d3;
	printf ("Digite um n�mero de 3 digitos:\n");
	scanf ("%d", &numero);
	d1 = (numero %100) %10;
	d2 = (numero %100) /10;
	d3 = numero /100;
	system ("cls");
	printf ("N�mero digitado: %d\nN�mero ao contr�rio: %d%d%d\n\n", numero, d1,d2,d3);
	system ("pause");
	return 0;
}
