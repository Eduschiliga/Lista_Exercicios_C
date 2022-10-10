/*10. Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada
obtida por um aluno para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o
seguinte: duas notas e os dois respectivos pesos das notas. (pesquise a fórmula).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, p1, p2, mp;
	printf ("MÉDIA PONDERADA\n\n");
	printf ("Digite a NOTA1 e o seu respectivo peso:\n");
	scanf ("%f%f", &nota1, &p1);
	fflush (stdin);
	system ("cls");
	printf("Digite a NOTA2 e o seu respectivo peso:\n");
	scanf ("%f%f", &nota2, &p2);
	fflush(stdin);
	mp = (((p1*nota1)+(p2*nota2))/p1+p2);
	system ("cls");
	printf ("A média ponderada do bimestre é: %.2f", mp);
	system ("pause");
	return 0;
}
