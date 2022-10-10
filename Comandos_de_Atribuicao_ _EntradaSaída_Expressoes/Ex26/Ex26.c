/*26. Dado um número inteiro não nulo de três dígitos, imprimir este número ao contrário, isto e, se a entrada for 123 (cento e vinte e três), imprimir 321 (trezentos e vinte e um). Usar operações sobre inteiros, por exemplo, divisões sucessivas por 10.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int numero, d1, d2, d3;
	printf ("Digite um número de 3 digitos:\n");
	scanf ("%d", &numero);
	d1 = (numero %100) %10;
	d2 = (numero %100) /10;
	d3 = numero /100;
	system ("cls");
	printf ("Número digitado: %d\nNúmero ao contrário: %d%d%d\n\n", numero, d1,d2,d3);
	system ("pause");
	return 0;
}
