/*4. Fa�a um programa no qual o usu�rio fornece os valores de temperatura em Fahrenheit
e o mesmo converte os valores para Celsius Apresente o resultado. (pesquise a f�rmula)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float fah, cel;
	printf ("Digite a temperatura para efetuar a convers�o para Celsius:\n");
	scanf ("%f", &fah);
	fflush (stdin);
	cel = ((fah - 32)/1.8);
	system("cls");
	fflush(stdin);
	printf ("CONVERS�O DE TEMPERATURAS\n\nA temperatura em Celsius �: %.2f�\nA temperatura em Fahrenheit � %.2f�\n\n", cel,fah);
	
	system ("pause");
	return 0;
}
