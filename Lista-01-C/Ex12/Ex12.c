/*12. Uma fábrica produz dois tipos de peças de automóveis para venda no varejo.
Escrever um programa que ajuda um cliente de loja de auto-peças a comprar estes tipos
de peças. O programa deve ler: 
• a percentagem do IPI a ser acrescido no valor das peças 
• o código da peça 1, valor unitário da peça 1, quantidade de peças 1 
• o código da peça 2, valor unitário da peça 2, quantidade de peças 2
O programa deve calcular o valor total a ser pago e apresentar o resultado. 
Fórmula: (valor1 * quant1 + valor2 * quant2) * (IPI/100 + 1)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float ipi, valor1, valor2, totalpago;
	int cod1, cod2, qtd1, qtd2;
	//peça1
	printf ("Digite a percentagem do IPI a ser acrescido no valor das peças:\n");
	scanf ("%f", &ipi);
	fflush (stdin);
	system ("cls");
	printf ("Digite o código da peça 1:\n");
	scanf ("%i", &cod1);
	fflush (stdin);
	printf ("Digite o valor unitário da peça 1:\n");
	scanf ("%f", &valor1);
	fflush (stdin);
	printf ("Digite a quantidade de peças 1:\n");
	scanf ("%i", &qtd1);
	fflush (stdin);
	system ("cls");
	//peça2
	printf ("Digite o código da peça 2:\n");
	scanf ("%i", &cod2);
	fflush (stdin);
	printf ("Digite o valor unitário da peça 2:\n");
	scanf ("%f", &valor2);
	fflush (stdin);
	printf ("Digite a quantidade de peças 2:\n");
	scanf ("%i", &qtd2);
	fflush (stdin);
	system ("cls");
	//Calculo do total a ser pago
	totalpago = (valor1 * qtd1 + valor2 * qtd2) * (ipi/100 + 1);
	//Mostrando na tela o resultado
	printf ("O valor total a ser pago é: R$%.2f.\n\n", totalpago);
	system ("pause");
	return 0;
}
