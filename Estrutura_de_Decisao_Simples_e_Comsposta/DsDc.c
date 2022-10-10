#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//variaveis globais
int op;
//---------------------------------------------------------------------------------
//módulo do menu dos exercicios
void menu (void) {
	
	printf ("\n|==============================================================|\n\t\tLista de exercícios 2\n\tEstrutura de decisão Simples e Composta\n\tDigite o número do exercício 1 ao 18\n|==============================================================|\n\n");
	scanf ("%d", &op);
}
//---------------------------------------------------------------------------------
void ex1 (void) {
	float n1, n2, n3;
	printf ("Digite 3 números:\n");
	scanf ("%f%f%f", &n1, &n2, &n3);
	printf ("----------------------------------------");
	if (n1 > 0) 
		printf ("\n%.2f\n", sqrt(n1));
	else
		printf ("\n%.2f\n", pow(n1,2));
	if (n2 > 10 && n2 < 100)
		printf ("\nEstá entre 10 e 100 intervalo permitido.\n");
	if (n3 < n2)
		printf ("\n%.2f\n", (n2 - n3));
	else
		printf ("\n%.2f\n", (n3 + 1));
	printf ("----------------------------------------\n\n");
	system ("pause");
}
//---------------------------------------------------------------------------------
void ex2 (void) {
	char sexo;
	float altura, peso;
	fflush(stdin);
	printf ("Informe o sexo (M/F):\n");
	scanf ("%c", &sexo);
	printf ("Informe a sua altura:\n");
	scanf ("%f", &altura);
	if ((sexo == 'F') || (sexo == 'f'))
	{
		peso = (62.1*altura) - 44.7;
	}
	else
	{
		peso = (72.7 * altura) - 58;
	}
	printf ("O sexo é: %c\nA altura é: %.2f\nO peso ideal é: %.2f\n", sexo, altura, peso);
	system ("pause");
}
//---------------------------------------------------------------------------------
void ex3 (void) {
	int idade;
	printf ("Insira a sua idade:\n");
	scanf ("%d", &idade);
	if ((idade >= 1) && (idade <= 13))
	{
		printf ("Criança.\n\n");
	}
	else if ((idade > 13) && (idade <=20))
	{
		printf ("Adolescente.\n\n");
	}
	else if ((idade > 20)&& (idade <= 50))
	{
		printf ("Adulto.\n\n");
	}
	else
	{
		printf ("Idoso.\n\n");
	}
	system ("pause");
}
//---------------------------------------------------------------------------------
void ex4 (void) {
	float salariob, proventos, salariolq, desconto;
	printf ("Insira o salário bruto:\n");
	scanf ("%f", &salariob);
	printf ("Digite o provento:\n");
	scanf ("%f", &proventos);
	if (salariob <= 50)
	{
		salariolq = ((salariob + proventos)- salariob * 0.05);
		printf ("Saláliro líquido: R$%.2f\n", salariolq);
	}
	else if (salariob > 50)
	{
		salariolq = ((salariob + proventos)- salariob * 0.10);
		printf ("Saláliro líquido: R$%.2f\n", salariolq);
	}
}
//---------------------------------------------------------------------------------
void ex5 (void) {
	int cod;
	float n1, n2, n3, mp;
	printf ("Insira o código do aluno:\n");
	scanf ("%d", &cod);
	printf ("Insira as três notas:\n");
	scanf ("%f%f%f", &n1, &n2, &n3);
	if ((n1 > n2) && (n1 > n3))
		mp = ((n1 * 4) + (n2 * 3) + (n3 * 3) / (4+3+3));
	else if ((n2 > n1) && (n2 > n3))
		mp = ((n1 * 3) + (n2 * 4) + (n3 * 3) / (4+3+3));
	else
		mp = ((n1 * 3) + (n2 * 3) + (n3 * 4) / (4+3+3));
	if (mp >= 50)
		printf ("\nCódigo do aluno: %d\nMédia do aluno: %.2f\nAprovado!\n\n", cod, mp);
	else
		printf ("\nCódigo do aluno: %d\nMédia do aluno: %.2f\nReprovado!\n\n", cod, mp);
}
//---------------------------------------------------------------------------------
void ex6 (void) {
	int n1;
	printf ("Digite um número:\n");
	scanf ("%d", &n1);
	if ((n1 % 2)==0)
		printf ("\nO número %d é par.\n", n1);
	else
		printf ("\nO número %d é impar.\n", n1);
	if (n1 < 0)
		printf ("O número %d é negativo.\n", n1);
	else 
		printf ("O número %d é positivo.\n", n1);
}
//---------------------------------------------------------------------------------
void ex7 (void) {
	int x, y, z;
	printf ("Digite três números:\n");
	scanf ("%d%d%d", &x, &y, &z);
	if (( x < y) && (x < z))
		printf ("%d é o menor número.\n\n", x);
	else if ((y < x) && (y < z))
		printf ("%d é o menor número.\n\n", y);
	else
		printf ("%d é o menor número.\n\n", z);
}
//---------------------------------------------------------------------------------
void ex8 (void) {
	float reais, dolar, cotacao, opc;
	printf ("\t1- Real\n\t2- Dolar\n");
	scanf ("%f", &opc);
	if (opc == 1) 
	{
		printf ("Insira a quantidade a ser convertida para dolar e a sua cotação:\n");
		scanf ("%f%f", &reais, &cotacao);
		dolar = reais * cotacao;
		printf ("R$%.2f convertido para dolar: US$%.2f\n", reais, dolar);
	}
	else 
	{
		printf ("Insira a quantidade a ser convertida para reais e a sua cotação:\n");
		scanf ("%f%f", &dolar, &cotacao);
		reais = dolar * cotacao;
		printf ("US$%.2f convertido para real: R$%.2f\n", dolar, reais);	
	}	
}
//---------------------------------------------------------------------------------
void ex9 (void) {
	float salarioatual, salarioc;
	int nf;
	printf ("Insira o número do funcionário e o salário respectivo:\n");
	scanf ("%d%f", &nf, &salarioatual);
	if ((salarioatual > 0) && (salarioatual <= 400)) 
	{
		salarioc = salarioatual * 1.15;
		printf ("\nNúmero do funcionário: %d\nSalário atual: R&%.2f\nPercentual de aumento foi de 15%\nSalário corrigido: R$%.2f\n", nf, salarioatual, salarioc);	
	}
	else if ((salarioatual > 400.01) && (salarioatual <= 700))
	{
		salarioc = salarioatual * 1.12;
		printf ("\nNúmero do funcionário: %d\nSalário atual: R&%.2f\nPercentual de aumento foi de 12%\nSalário corrigido: R$%.2f\n", nf, salarioatual, salarioc);		
	}
	else if ((salarioatual > 700.01) && (salarioatual <= 1000)) 
	{
		salarioc = salarioatual * 1.1;
		printf ("\nNúmero do funcionário: %d\nSalário atual: R&%.2f\nPercentual de aumento foi de 10%\nSalário corrigido: R$%.2f\n", nf, salarioatual, salarioc);		
	}
	else if ((salarioatual > 1000.01) && (salarioatual <= 1800)) 
	{
		salarioc = salarioatual * 1.07;
		printf ("\nNúmero do funcionário: %d\nSalário atual: R&%.2f\nPercentual de aumento foi de 7%\nSalário corrigido: R$%.2f\n", nf, salarioatual, salarioc);		
	}
	else if ((salarioatual > 1800.01) && (salarioatual <= 2500)) 
	{
		salarioc = salarioatual * 1.04;
		printf ("\nNúmero do funcionário: %d\nSalário atual: R&%.2f\nPercentual de aumento foi de 4%\nSalário corrigido: R$%.2f\n", nf, salarioatual, salarioc);		
	}
	else
	{
		printf ("\nNúmero do funcionário: %d\nSalário atual: R&%.2f\nNão houve aumento.\n", nf, salarioatual);	
	}
}
//---------------------------------------------------------------------------------
void ex10 (void) {
	float n1, n2, n3, me, ma;
	int cod;
	printf ("Digite o número de identificação:\nInsira a média dos Exercícios:\nInsira a Nota 1, Nota 2 e a Nota 3:\n");
	scanf ("%d%f%f%f%f", &cod, &me, &n1, &n2, &n3);
	ma = ((n1+(n2 * 2) + (n3 * 3) + me) / 7);
	if (ma == 9.0 )
		printf ("\nConceito A.\nMédia de aproveitamento: %.2f\n", ma);
	else if ((ma >= 7.5) && (ma < 9.0))
		printf ("\nConceito B.\nMédia de aproveitamento: %.2f\n", ma);
	else if ((ma >= 6.0) && (ma < 7.5))
		printf ("\nConceito C.\nMédia de aproveitamento: %.2f\n", ma);
	else if ((ma >= 4.0) && (ma < 6.0))
		printf ("\nConceito D.\nMédia de aproveitamento: %.2f\n", ma);
	else
		printf ("\nConceito E.\nMédia de aproveitamento: %.2f\n", ma);
}
//---------------------------------------------------------------------------------
void ex11 (void) {
	float lados, m1, m2, m3 , m4, m5;
	printf ("Escreva o número de lados:\n");
	scanf ("%f", &lados);
	if (lados == 3)
	{
		printf ("Triângulo\n\nDigite a medida dos lados:\n");
		scanf ("%f%f%f", &m1, &m2, &m3);
		printf ("\nO perímetro é: %.2f\n\n", (m1+m2+m3));
	}
	else if (lados == 4)
	{
		printf ("Quadrado\n\nDigite a medida do lado:\n");
		scanf ("%f", &m1);
		printf ("A área é: %.2f\n\n", (pow(m1,2)));
	}
	else if (lados == 5)
		printf ("Pentagono\n\n");
	else if (lados > 5) 
		printf ("Poligono não identificado.\n\n");
}
//---------------------------------------------------------------------------------
void ex12 (void) {
	int i;
	float a, b, c, c1, c2, c3;
	printf ("\t1- Ordem crescente\n\t2- Ordem decrescente\n\t3- Maior fica no meio dos dois\n\n");
	scanf ("%d", &i);
	printf ("\nInsira os valores de A, B e C:\n");
	scanf ("%f%f%f", &a, &b, &c);
	if (i == 1)
	{
		if ((a < b) && (a < c))
		{
			if (b < c)
					printf ("%.2f|%.2f|%.2f\n\n", a, b, c);
			else
					printf ("%.2f|%.2f|%.2f\n\n", a, c, b);
		}
		else if ((b < a) && (b < c))
		{
			if (a < c)
				printf ("%.2f|%.2f|%.2f\n\n", b, a, c);
			else
				printf ("%.2f|%.2f|%.2f\n\n", b, c, a);
		}
		else
		{
			if ((c < a) && (c < b))
			{
				if (a < b)
					printf ("%.2f|%.2f|%.2f\n\n", c, a, b);
				else
					printf ("%.2f|%.2f|%.2f\n\n", c, b, a);
			}
		}
	}
	if (i == 2)
	{
		if ((a > b) && (a > c))
		{
			if (b > c)
				printf ("\n%.2f|%.2f|%.2f\n\n", a, b, c); 
			else
				printf ("\n%.2f|%.2f|%.2f\n\n", a, c, b);
		}
		else if ((b > a) && (b > c))
		{
			if (a > c)
				printf ("\n%.2f|%.2f|%.2f\n\n", b, a, c); 
			else
				printf ("\n%.2f|%.2f|%.2f\n\n", b, c, a);
		}
		else if ((c > b) && (c > a))
		{
			if (a > b)
				printf ("\n%.2f|%.2f|%.2f\n\n", c, a, b); 
			else
				printf ("\n%.2f|%.2f|%.2f\n\n", c, b, a);
		}
		
	}
	if (i == 3)
	{
		if ((a > b) && (a > c))
			printf ("\n%.2f|%.2f|%.2f\n\n", b, a, c); 
		else if ((b > a) && (b > c))
			printf ("\n%.2f|%.2f|%.2f\n\n", a, b, c);
		else 
			printf ("\n%.2f|%.2f|%.2f\n\n", a, c, b);	
	}
}
//---------------------------------------------------------------------------------
void ex13 (void) {
	float n1, n2, am, as, mf, fr;
	printf ("Digite a Nota 1 e a nota 2:\nDigite a quantidade de aulas ministradas e a quantidade de aulas assistidas:\n");
	scanf ("%f%f%f%f", &n1, &n2, &am, &as);
	mf = (n1 + n2) / 2;
	fr = (as / am) * 100;
	if ((mf >= 6.0) && (fr >= 75.0))
		printf ("\nAprovado!\nMédia final: %.2f\nFrequência: %.2f%\n\n", mf, fr);
	else
		printf ("\nReprovado!\nMédia final: %.2f\nFrequência: %.2f%\n\n", mf, fr);
}
//---------------------------------------------------------------------------------
void ex14 (void) {
	float ipm;
	printf ("Insira o índice de poluição medido:\n");
	scanf ("%f", &ipm);
	if ((ipm > 0.26) && (ipm <= 0.30))
		printf ("Indústrias do 1° grupo intimadas a suspenderem as atividades.\n");
	else if ((ipm >= 0.31) && (ipm < 0.40))
		printf ("Indústrias do 1° e 2° grupo intimadas a suspenderem as atividades.\n");
	else if (ipm > 0.41)
		printf ("Indústrias do 1°, 2° e 3° grupo intimadas a suspenderem as atividades.\n");
	if ((ipm <= 0.25))
		printf ("\nÍndice aceitável.\n");
	else 
		printf ("\nÍndice não aceitável.\n");
}
//---------------------------------------------------------------------------------
 
int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	
	do 
	{
		
		menu();
		switch (op) 
		{
			case 1:
				system ("cls");
				printf ("Exercício 1:\n");
				ex1();
			break;	
			
			case 2:
				system ("cls");	
				printf ("Exercício 2:\n");
				ex2();
			break;
			
			case 3:
				system ("cls");
				printf ("Exercício 3:\n\n");
				ex3();
			break;
			
			case 4:
				system ("cls");
				printf ("Exercício 4:\n\n");
				ex4();
			break;
			
			case 5:
				system ("cls");
				printf ("Exercício 5:\n\n");
				ex5();
			break;
			
			case 6:
				system ("cls");
				printf ("Exercício 6:\n\n");
				ex6();
			break;
			
			case 7:
				system ("cls");
				printf ("Exercício 7:\n\n");
				ex7();
			break;
			
			case 8:
				system ("cls");
				printf ("Exercício 8:\n\n");
				ex8();
			break;
			
			case 9:
				system ("cls");
				printf ("Exercício 9:\n\n");
				ex9();
			break;
			
			case 10:
				system ("cls");
				printf ("Exercício 10:\n\n");
				ex10();
			break;
			
			case 11:
				system ("cls");
				printf ("Exercício 11:\n\n");
				ex11();
			break;
			
			case 12:
				system ("cls");
				printf ("Exercício 12:\n\n");
				ex12();
			break;
			
			case 13:
				system ("cls");
				printf ("Exercício 13:\n\n");
				ex13();
			break;
			
			case 14:
				system ("cls");
				printf ("Exercício 14:\n\n");
				ex14();
			break;
			
		}
	} while (op != 18);
	
	

	system ("pause");
	return 0;
}
