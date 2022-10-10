/*11. Escreva um programa que calcule o consumo de combustível de um automóvel em
Km/L, e o informe na tela.
Dados:
KI = Quilometragem inicial
KF = Quilometragem final
CC = Consumo de combustível (nº de litros)
DP = Distância percorrida 						DP = KF - KI
GC = Gasto de combustível						 GC = DP / CC*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float qinicial, qfinal, ccombustivel, dpercorrida, gcombustivel;
	printf ("Digite a quilometragem inicial e a final:\n");
	scanf ("%f%f", &qinicial, &qfinal);
	fflush (stdin);
	printf ("\nDigite o consumo de combustível (N° de litros):\n");
	scanf ("%f", &ccombustivel);
	fflush (stdin);
	dpercorrida = (qfinal - qinicial);
	gcombustivel = (dpercorrida / ccombustivel);
	system ("cls");
	printf ("\nO consumo de combustível do automóvel foi de %.2fKm/L.\n\n", gcombustivel);
	system ("pause");
	return 0;
}
