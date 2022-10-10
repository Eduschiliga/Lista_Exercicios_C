/*25. Dado um número inteiro que representa uma quantidade de segundos, determinar o seu valor equivalente em horas, minutos e segundos.
Se a quantidade de segundos for insuficiente para dar um valor em horas, o valor em horas deve ser 0 (zero). 
A mesma observação vale em relação aos minutos e segundos. Por exemplo: 3.600 segundos = 1 hora, 0 minutos, 0 segundos.; 3.500 segundos = 0 horas, 58 minutos e 20 segundos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int total, h, m, s, resto;
	printf ("Digite a quantidade de segundos:");
	scanf ("%d", &total);
	fflush (stdin);
	system ("cls");
	h = total / 3600;
	resto = total % 3600;
	m = resto /60;
	s = resto %60;
	printf ("%d horas  %d minutos  %d segundos\n"), h, m , s;

	system ("pause");
	return 0;
}
