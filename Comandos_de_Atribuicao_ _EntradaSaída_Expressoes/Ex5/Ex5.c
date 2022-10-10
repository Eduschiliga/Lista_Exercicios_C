/*5. Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por
meio da fórmula: 
VOLUME = COMPRIMENTO * LARGURA * ALTURA*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float comprimento, largura, altura, volume;
	printf ("Digite as medidas a seguir\n\n-Comprimento\n-Largura\n-Altura\n\n");
	scanf ("%f%f%f", &comprimento, &largura, &altura);
	fflush(stdin);
	volume = ((altura * largura)* comprimento);
	system("cls");
	printf ("O Volume da caixa retangular é: %.2f\n\n", volume);
	
	system ("pause");
	return 0;
}
