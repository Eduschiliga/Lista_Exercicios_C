/*20. Escreva um programa que leia dois n�meros que dever�o ser colocados, respectivamente, nas vari�veis VA e VB. 
O programa deve, ent�o, trocar os valores de VA por VB e vice-versa e mostrar o conte�do destas vari�veis.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float va, vb, aux;
	printf ("Digite o primeiro  e o segundo n�mero:\n");
	scanf ("%f%f", &va, &vb);
	fflush (stdin);
	aux = va;
	va = vb;
	vb = aux;
	system ("cls");
	printf ("O primeiro n�mero  �:%.2f\nO  segundo n�mero  �: %.2f\n\n", va, vb);
	
	system ("pause");
	return 0;
}
