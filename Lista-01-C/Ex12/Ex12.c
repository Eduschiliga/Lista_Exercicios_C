/*12. Uma f�brica produz dois tipos de pe�as de autom�veis para venda no varejo.
Escrever um programa que ajuda um cliente de loja de auto-pe�as a comprar estes tipos
de pe�as. O programa deve ler: 
� a percentagem do IPI a ser acrescido no valor das pe�as 
� o c�digo da pe�a 1, valor unit�rio da pe�a 1, quantidade de pe�as 1 
� o c�digo da pe�a 2, valor unit�rio da pe�a 2, quantidade de pe�as 2
O programa deve calcular o valor total a ser pago e apresentar o resultado. 
F�rmula: (valor1 * quant1 + valor2 * quant2) * (IPI/100 + 1)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float ipi, valor1, valor2, totalpago;
	int cod1, cod2, qtd1, qtd2;
	//pe�a1
	printf ("Digite a percentagem do IPI a ser acrescido no valor das pe�as:\n");
	scanf ("%f", &ipi);
	fflush (stdin);
	system ("cls");
	printf ("Digite o c�digo da pe�a 1:\n");
	scanf ("%i", &cod1);
	fflush (stdin);
	printf ("Digite o valor unit�rio da pe�a 1:\n");
	scanf ("%f", &valor1);
	fflush (stdin);
	printf ("Digite a quantidade de pe�as 1:\n");
	scanf ("%i", &qtd1);
	fflush (stdin);
	system ("cls");
	//pe�a2
	printf ("Digite o c�digo da pe�a 2:\n");
	scanf ("%i", &cod2);
	fflush (stdin);
	printf ("Digite o valor unit�rio da pe�a 2:\n");
	scanf ("%f", &valor2);
	fflush (stdin);
	printf ("Digite a quantidade de pe�as 2:\n");
	scanf ("%i", &qtd2);
	fflush (stdin);
	system ("cls");
	//Calculo do total a ser pago
	totalpago = (valor1 * qtd1 + valor2 * qtd2) * (ipi/100 + 1);
	//Mostrando na tela o resultado
	printf ("O valor total a ser pago �: R$%.2f.\n\n", totalpago);
	system ("pause");
	return 0;
}
