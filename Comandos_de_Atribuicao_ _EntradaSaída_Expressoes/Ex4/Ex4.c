/*4. Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit
e o mesmo converte os valores para Celsius Apresente o resultado. (pesquise a fórmula)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float fah, cel;
	printf ("Digite a temperatura para efetuar a conversão para Celsius:\n");
	scanf ("%f", &fah);
	fflush (stdin);
	cel = ((fah - 32)/1.8);
	system("cls");
	fflush(stdin);
	printf ("CONVERSÃO DE TEMPERATURAS\n\nA temperatura em Celsius é: %.2f°\nA temperatura em Fahrenheit é %.2f°\n\n", cel,fah);
	
	system ("pause");
	return 0;
}
