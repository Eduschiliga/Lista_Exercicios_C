/*8. Sabendo que a �rea de um tri�ngulo � a medida da sua base multiplicada pela medida
de sua altura dividida por dois. Escreva um programa que pe�a os valores da base e da
altura e forne�a a �rea do tri�ngulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	printf ("C�LCULO DA �REA DE UM TRI�NGULO\n\nDigite o valor dos itens a seguir:\n\n-Base\n-Altura\n\n");
	scanf ("%f%f", &base, &altura);
	fflush (stdin);
	area = (base*altura)/2;
	system("cls");
	printf ("A �rea do tri�ngulo �: %.2f\n\n", area);
	system ("pause");
	return 0;
}
