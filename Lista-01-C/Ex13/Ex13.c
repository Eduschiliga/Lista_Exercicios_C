/*13. Identifique os dados de entrada, processamento e sa�da no programa abaixo
� Receba c�digo da pe�a
� Receba valor da pe�a
� Receba Quantidade de pe�as
� Calcule o valor total em estoque (Quantidade * Valor da pe�a)
� Mostre o c�digo da pe�a e seu valor total em estoque.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int cod, qtdp;
	float valor, valortot;
	//entrada de dados
	printf ("Digite o c�digo da pe�a:\n");
	scanf ("%i", &cod);
	fflush (stdin);
	printf ("Digite o valor da pe�a:\n");
	scanf ("%f", &valor);
	fflush (stdin);
	printf ("Digite a quantidade de pe�as:\n");
	scanf ("%i", &qtdp);
	fflush (stdin);
	system ("cls");
	//c�lculo do valor total em estoque
	valortot = qtdp * valor;
	//mostrando na tela o resultado
	printf ("C�digo: %i\nValor da pe�a em estoque: R$%.2f.\n\n", cod, valortot);
	system ("pause");
	return 0;
}
