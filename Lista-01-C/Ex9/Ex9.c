/*9. Fa�a um programa para ler dois valores (altura e raio de um cilindro), calcular e
mostrar o respectivo volume do cilindro. (pesquise a f�rmula*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float altura, raio, volume;
	printf ("C�LCULO DO VOLUME DE UM CILINDRO\n\nDigite o valor dos itens a seguir:\n\n-Altura\n-Raio\n\n");
	scanf ("%f%f", &altura, &raio);
	fflush (stdin);
	volume = 3.14 * pow(raio,2) * altura;
	system ("cls");
	printf ("O volume do cilindro �: %.2f\n\n", volume);
	system ("pause");
	return 0;
}
