/*13. Identifique os dados de entrada, processamento e saída no programa abaixo
• Receba código da peça
• Receba valor da peça
• Receba Quantidade de peças
• Calcule o valor total em estoque (Quantidade * Valor da peça)
• Mostre o código da peça e seu valor total em estoque.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int cod, qtdp;
	float valor, valortot;
	//entrada de dados
	printf ("Digite o código da peça:\n");
	scanf ("%i", &cod);
	fflush (stdin);
	printf ("Digite o valor da peça:\n");
	scanf ("%f", &valor);
	fflush (stdin);
	printf ("Digite a quantidade de peças:\n");
	scanf ("%i", &qtdp);
	fflush (stdin);
	system ("cls");
	//cálculo do valor total em estoque
	valortot = qtdp * valor;
	//mostrando na tela o resultado
	printf ("Código: %i\nValor da peça em estoque: R$%.2f.\n\n", cod, valortot);
	system ("pause");
	return 0;
}
