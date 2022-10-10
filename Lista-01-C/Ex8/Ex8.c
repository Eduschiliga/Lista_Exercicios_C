/*8. Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida
de sua altura dividida por dois. Escreva um programa que peça os valores da base e da
altura e forneça a área do triângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	printf ("CÁLCULO DA ÁREA DE UM TRIÂNGULO\n\nDigite o valor dos itens a seguir:\n\n-Base\n-Altura\n\n");
	scanf ("%f%f", &base, &altura);
	fflush (stdin);
	area = (base*altura)/2;
	system("cls");
	printf ("A área do triângulo é: %.2f\n\n", area);
	system ("pause");
	return 0;
}
