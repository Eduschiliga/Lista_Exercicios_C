/*17. Sabe-se que,para iluminar de maneira correta os c�modos de uma casa, para cada
m2 deve-se usar 18W de pot�ncia. Fa�a um programa que recebe as duas dimens�es de
um c�modo (em metros), calcule e mostre a sua �rea (em m2) e a pot�ncia de
ilumina��o que dever� ser usada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int largura, comprimento, pot, area;
	printf ("Digite os valores respectivos do c�modo.\n\n");
	printf ("Largura: ");
	scanf ("%i", &largura);
	fflush (stdin);
	printf ("\nComprimento: ");
	scanf ("%i", &comprimento);
	fflush (stdin);
	area = largura * comprimento;
	pot = area * 18;
	system ("cls");
	printf ("Para uma �rea de %im� precisa de %iW de pot�ncia.\n\n", area, pot);
	system ("pause");
	return 0;
}
