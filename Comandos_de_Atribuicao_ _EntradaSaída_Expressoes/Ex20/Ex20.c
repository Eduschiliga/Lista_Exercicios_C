/*20. Escreva um programa que leia dois números que deverão ser colocados, respectivamente, nas variáveis VA e VB. 
O programa deve, então, trocar os valores de VA por VB e vice-versa e mostrar o conteúdo destas variáveis.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float va, vb, aux;
	printf ("Digite o primeiro  e o segundo número:\n");
	scanf ("%f%f", &va, &vb);
	fflush (stdin);
	aux = va;
	va = vb;
	vb = aux;
	system ("cls");
	printf ("O primeiro número  é:%.2f\nO  segundo número  é: %.2f\n\n", va, vb);
	
	system ("pause");
	return 0;
}
