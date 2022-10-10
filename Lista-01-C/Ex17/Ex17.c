/*17. Sabe-se que,para iluminar de maneira correta os cômodos de uma casa, para cada
m2 deve-se usar 18W de potência. Faça um programa que recebe as duas dimensões de
um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de
iluminação que deverá ser usada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int largura, comprimento, pot, area;
	printf ("Digite os valores respectivos do cômodo.\n\n");
	printf ("Largura: ");
	scanf ("%i", &largura);
	fflush (stdin);
	printf ("\nComprimento: ");
	scanf ("%i", &comprimento);
	fflush (stdin);
	area = largura * comprimento;
	pot = area * 18;
	system ("cls");
	printf ("Para uma área de %im² precisa de %iW de potência.\n\n", area, pot);
	system ("pause");
	return 0;
}
