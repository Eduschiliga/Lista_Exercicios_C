#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void Ex1(void) {
	//1. Escreva um programa para ler, calcular e escrever a m�dia aritm�tica entre dois n�meros.
	float n1, n2, media;
    printf ("Digite o primeiro n�mero:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo n�mero:\n");
    scanf ("%f", &n2);
    media =  (n1+n2)/ 2;
    printf ("A sua m�dia foi: %.2f\n", media);

	system("pause");
		
}

void Ex2(void){
	//2. Fa�a um programa para ler dois valores (x e y), calcular e mostrar x elevado � pot�ncia de y.
	float n1, n2, potencia;
	printf ("Escreva o primeiro n�mero:\n");
	scanf ("%f", &n1);
	printf ("Escreva o segundo n�mero:\n");
	scanf ("%f", &n2);
	potencia = pow(n1,n2);
	printf ("O n�mero %.2f elevado a %.2f �: %.2f\n\n", n1, n2, potencia);
	
	system ("pause");
}

void Ex3(void) {
	//3. Fa�a um programa que leia dois n�meros reais e em seguida mostre: a soma, o produto, a divis�o e a subtra��o entre eles.
	float n1, n2, soma, produto, divisao, subtracao;
	printf ("Digite o primeiro n�mero:\n");
	scanf ("%f", &n1);
	fflush(stdin);
	printf ("Digite o segundo n�mero:\n");
	scanf ("%f", &n2);
	fflush(stdin);
	soma = (n1 + n2);
	system("cls");
    fflush(stdin);
	printf ("Resultado das devidas opera��es:\n\n ");
	printf ("Soma: %.2f\n", soma);
	subtracao = (n1 - n2);
	printf ("Subtra��o: %.2f\n", subtracao);
	produto = (n1 * n2);
	printf ("Produto: %.2f\n", produto);
	divisao = (n1 / n2);
	printf ("Divis�o: %.2f\n\n", divisao);
	system ("pause");
}

void Ex4(void) {
	//4. Fa�a um programa no qual o usu�rio fornece os valores de temperatura em Fahrenheit e o mesmo converte os valores para Celsius Apresente o resultado. (pesquise a f�rmula)
	float fah, cel;
	printf ("Digite a temperatura para efetuar a convers�o para Celsius:\n");
	scanf ("%f", &fah);
	fflush (stdin);
	cel = ((fah - 32)/1.8);
	system("cls");
	printf ("CONVERS�O DE TEMPERATURAS\n\nA temperatura em Celsius �: %.2f�\nA temperatura em Fahrenheit � %.2f�\n\n", cel,fah);
	system ("pause");
}

void Ex5(void) {
	//5. Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da f�rmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA
	float comprimento, largura, altura, volume;
	printf ("Digite as medidas a seguir\n\n-Comprimento\n-Largura\n-Altura\n\n");
	scanf ("%f%f%f", &comprimento, &largura, &altura);
	fflush(stdin);
	volume = ((altura * largura)* comprimento);
	system("cls");
	printf ("O Volume da caixa retangular �: %.2f\n\n", volume);
	system ("pause");
}

void Ex6(void) {
	//6. Elaborar um programa para efetuar o c�lculo do valor de uma presta��o em atraso, utilizando a f�rmula: PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO)
	float prestacao, valor, taxa, tempo;
	printf ("\nC�LCULO DE PRESTA��O\n\nDigite os seguintes valores para os itens a seguir:\n\n-Valor da presta��o\n-Taxa\n-Dias de atraso:\n\n");
	scanf ("%f%f%f", &valor, &taxa, &tempo);
	fflush (stdin);
	prestacao = valor + (valor*(taxa/100)*tempo);
	system("cls");
	fflush(stdin);
	printf ("O valor da presta��o � R$%.2f\n\n", prestacao);
	system ("pause");
}

void Ex7(void) {
	//7. Fa�a um programa para ler um valor (o lado de um quadrado), calcular e mostrar a respectiva �rea do quadrado.
	float lado, area;
	printf ("C�LCULO DA �REA DO QUADRADO\n\nDigite o valor do lado do quadrado:\n");
	scanf ("%f", &lado);
	fflush (stdin);
	area = pow(lado,2);
	system("cls");
	printf("A �rea do quadrado �: %.2f\n\n", area);
	system ("pause");
}

void Ex8(void) {
	//8. Sabendo que a �rea de um tri�ngulo � a medida da sua base multiplicada pela medida de sua altura dividida por dois. Escreva um programa que pe�a os valores da base e da altura e forne�a a �rea do tri�ngulo.
	float base, altura, area;
	printf ("C�LCULO DA �REA DE UM TRI�NGULO\n\nDigite o valor dos itens a seguir:\n\n-Base\n-Altura\n\n");
	scanf ("%f%f", &base, &altura);
	fflush (stdin);
	area = (base*altura)/2;
	system("cls");
	printf ("A �rea do tri�ngulo �: %.2f\n\n", area);
	system ("pause");
}

void Ex9(void) {
	//9. Fa�a um programa para ler dois valores (altura e raio de um cilindro), calcular e mostrar o respectivo volume do cilindro. (pesquise a f�rmula)
	float altura, raio, volume;
	printf ("C�LCULO DO VOLUME DE UM CILINDRO\n\nDigite o valor dos itens a seguir:\n\n-Altura\n-Raio\n\n");
	scanf ("%f%f", &altura, &raio);
	fflush (stdin);
	volume = 3.14 * pow(raio,2) * altura;
	system ("cls");
	printf ("O volume do cilindro �: %.2f\n\n", volume);
	system ("pause");
}

void Ex10(void) {
	//10. Escrever um programa para ler 4 valores, calcular e mostrar a m�dia ponderada obtida por um aluno para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o seguinte: duas notas e os dois respectivos pesos das notas. (pesquise a f�rmula).	
	float nota1, nota2, p1, p2, mp;
	printf ("M�DIA PONDERADA\n\n");
	printf ("Digite a NOTA1 e o seu respectivo peso:\n");
	scanf ("%f%f", &nota1, &p1);
	fflush (stdin);
	system ("cls");
	printf("Digite a NOTA2 e o seu respectivo peso:\n");
	scanf ("%f%f", &nota2, &p2);
	fflush(stdin);
	mp = (((p1*nota1)+(p2*nota2))/p1+p2);
	system ("cls");
	printf ("A m�dia ponderada do bimestre �: %.2f", mp);
	system ("pause");

}

void Ex11(void) {
	//11. Escreva um programa que calcule o consumo de combust�vel de um autom�vel em Km/L, e o informe na tela.
	float qinicial, qfinal, ccombustivel, dpercorrida, gcombustivel;
	printf ("Digite a quilometragem inicial e a final:\n");
	scanf ("%f%f", &qinicial, &qfinal);
	fflush (stdin);
	printf ("\nDigite o consumo de combust�vel (N� de litros):\n");
	scanf ("%f", &ccombustivel);
	fflush (stdin);
	dpercorrida = (qfinal - qinicial);
	gcombustivel = (dpercorrida / ccombustivel);
	system ("cls");
	printf ("\nO consumo de combust�vel do autom�vel foi de %.2fKm/L.\n\n", gcombustivel);
	system ("pause");
}

void Ex12(void) {
	/*12. Uma f�brica produz dois tipos de pe�as de autom�veis para venda no varejo.
	Escrever um programa que ajuda um cliente de loja de auto-pe�as a comprar estes tipos
	de pe�as. O programa deve ler:
	� a percentagem do IPI a ser acrescido no valor das pe�as
	� o c�digo da pe�a 1, valor unit�rio da pe�a 1, quantidade de pe�as 1
	� o c�digo da pe�a 2, valor unit�rio da pe�a 2, quantidade de pe�as 2
	O programa deve calcular o valor total a ser pago e apresentar o resultado.
	F�rmula: (valor1 * quant1 + valor2 * quant2) * (IPI/100 + 1)*/
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
}

void Ex13(void) {
	/*13. Identifique os dados de entrada, processamento e sa�da no programa abaixo
	� Receba c�digo da pe�a
	� Receba valor da pe�a
	� Receba Quantidade de pe�as
	� Calcule o valor total em estoque (Quantidade * Valor da pe�a)
	� Mostre o c�digo da pe�a e seu valor total em estoque.*/
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
}

void Ex14(void) {
	//14. Escrever um programa que l� o n�mero de um vendedor, o seu sal�rio fixo, o total de vendas por ele efetuadas e o percentual que ganha sobre o total de vendas. Calcular o sal�rio total do vendedor. Escrever n�mero do vendedor e o sal�rio total.
	int nvendedor;
	float sfixo, totvendas, pvendas, stot, comissao;
	printf ("Digite o n�mero do vendedor:\n");
	scanf ("%i", &nvendedor);
	fflush (stdin);
	printf ("Digite o sal�rio fixo:\n");
	scanf ("%f", &sfixo);
	fflush (stdin);
	printf ("Digite o total de vendas efetuadas:\n");
	scanf ("%i", &totvendas);
	fflush (stdin);
	printf ("Digite o percentural sobre o total de vendas:\n");
	scanf ("%f", &pvendas);
	comissao = totvendas * (pvendas/100);
	stot = sfixo + comissao;
	system ("cls");
	printf ("C�digo do vendedor: %i\nSal�rio total: R&%.2f.\n", nvendedor, stot);
	system ("pause");
}

void Ex15(void) {
	//15. Construa um programa que calcule a seguinte f�rmula, e mostre no final o valor de  RESULT = (2 * A mod 3) � A
	int result, A;
	printf ("Digite o valor de A: ");
	scanf ("%f", &A);
	fflush (stdin);
	result = (2 * A % 3)- A;
	system ("cls");
	printf ("O valor de RESULT �: %i\n.", result);
	system ("pause");
}

void Ex16(void) {
	//16. Desenvolva um programa para ler valores para as variaveis y e z. Depois, calcule e mostre o valor de x, atrav�s express�o:
	float x, y, z;
	printf ("Digite o valor de Y e Z:\n");
	scanf ("%f%f", &y,&z);
	fflush (stdin);
	x = sqrt (y*(pow(y,22)+pow(z,33)));
	printf ("O resultado da express�o �: %.2f\n\n", x);
	system ("pause");
}

void Ex17(void) {
	//17. Sabe-se que,para iluminar de maneira correta os c�modos de uma casa, para cada m2 deve-se usar 18W de pot�ncia. Fa�a um programa que recebe as duas dimens�es de um c�modo (em metros), calcule e mostre a sua �rea (em m2) e a pot�ncia de ilumina��o que dever� ser usada.
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
}

void Ex18(void) {
	//18. Fa�a um programa que leia o n�mero do funcion�rio, o n�mero de horas trabalhadas mensais, o valor que recebe por hora e o n�mero de filhos com idade menor de 14 anos. Calcular e escrever o sal�rio deste funcion�rio, sendo que cada filho menor de 14 anos acrescenta 10% do sal�rio.
	int nfuncionario, nhoras, nfilhosmenor14;
	float valorhora, salariofunc, salario10, salariof;
	printf ("Digite o n�mero do funcion�rio: ");
	scanf ("%i", &nfuncionario);
	fflush (stdin);
	printf ("\nDigite o n�mero de horas trabalhadas mensais:  ");
	scanf ("%i", &nhoras);
	fflush (stdin);
	printf ("\nDigite o valor que recebe por hora:  ");
	scanf ("%f", &valorhora);
	fflush (stdin);
	printf ("Digite o n�mero de filhos com idade menor que 14:  ");
	scanf ("%i", &nfilhosmenor14);
	fflush(stdin);
	salariofunc = (nhoras * valorhora);
	salario10 = salariofunc /10;
	salariof = (nfilhosmenor14 * salario10) + salariofunc;
	printf ("Sal�rio mensal do funcion�rio:  %.2f\n", salariof);
	system ("pause");
}

void Ex19(void) {
	//19. O valor ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um programa em C que leia o custo de f�brica de um carro e escreva o custo ao consumidor.
	float custof, valordistr, imposto, custocons;
	valordistr = 28;
	imposto = 45;
	printf ("Digite o custo de f�brica:  ");
	scanf ("%f", &custof);
	fflush (stdin);
	valordistr = custof + (custof * valordistr /100);
	imposto = custof + (custof * imposto /100);
	custocons = custof + imposto + valordistr;
	system ("cls");
	printf ("O valor ao consumidor �: R$%.2f\n\n", custocons);
	system ("pause");
}

void Ex20(void) {
	//20. Escreva um programa que leia dois n�meros que dever�o ser colocados, respectivamente, nas vari�veis VA e VB. O programa deve, ent�o, trocar os valores de VA por VB e vice-versa e mostrar o conte�do destas vari�veis.
	float va, vb, aux;
	printf ("Digite o primeiro  e o segundo n�mero:\n");
	scanf ("%f%f", &va, &vb);
	fflush (stdin);
	aux = va;
	va = vb;
	vb = aux;
	system ("cls");
	printf ("O primeiro n�mero  �:%.2f\nO  segundo n�mero  �: %.2f\n\n", va, vb);
	system ("pause");
}

void Ex21(void) {
	//21. Quais as opera��es necess�rias para intercambiar os valores de 3 vari�veis A, B e C de modo que A fique com o valor de B; B fique com o valor de C e C fique com o valor de A?
	float a, b, c, aux;
	printf ("Digite o primeiro, segundo e o terceiro n�mero:\n");
	scanf ("%f%f%f", &a, &b, &c);
	fflush (stdin);
	aux = a;
	a = b;
	b = c;
	c = aux;
	system ("cls");
	printf ("\n\nO primeiro n�mero �: %.2f\nO segundo n�mero �: %.2f\nO terceiro n�mero �: %.2f\n\n", a,b,c);
	system ("pause");
}

void Ex22(void) {
	//22. Desenvolva uma aplica��o em linguagem C que receba a idade de um indiv�duo em anos, meses e dias e mostre-a expressa apenas em dias.
	int ano, mes, dias, dia;
	printf ("Digite a sua idade em anos, meses e dias:\n");
	scanf ("%i%i%i", &ano, &mes, &dia);
	fflush (stdin);
	dias = (ano*365) + (mes *30) +dia;
	system ("cls");
	printf ("A sua idade em dias �: %i\n\n", dias);
	system ("pause");
}

void Ex23(void) {
	//23. Desenvolva uma aplica��o em linguagem C que receba a idade de um indiv�duo em dias e mostre-a expressa em anos, meses e dias.
	int dias;
	printf ("Digite a sua idade em dias: ");
	scanf ("%i", &dias);
	fflush (stdin);
	printf ("\nO n�medo de anos �: %d\n, meses: %d\n, dias: %d\n", dias/365,(dias%365)/30,(dias%365)%30);
	system ("pause");
}

void Ex24(void) {
	//24. Dadas duas fra��es ordin�rias a/b e c/d, determinar a sua soma e o seu produto. Pense e decida como seria a entrada de dados.
	float num1, num2, den1, den2, prod, soma;
	printf ("Informe o valor do numerador e do denominador da fra��o 1:\n");
	scanf ("%f%f", &num1, &den1);
	fflush (stdin);
	system ("cls");
	printf ("Informe o valor do numerador e do denominador da fra��o 2:\n");
	scanf ("%f%f", &num2, &den2);
	system ("cls");
	soma = (num1 * den2) + (num2 * den1) / (den1 * den2);
	prod = (num1 * num2) / (den1 * den2);
	printf ("Produto das fra��es: %.2f", prod);
	printf ("\nSomat�rio: %.2f\n\n", soma);
	system ("pause");
}

void Ex25(void) {
	//25. Dado um numero inteiro que representa uma quantidade de segundos, determinar o seu valor equivalente em horas, minutos e segundos. Se a quantidade de segundos for insuficiente para dar um valor em horas, o valor em horas deve ser 0 (zero). A mesma observa��o vale em rela��o aos minutos e segundos. Por exemplo: 3.600 segundos = 1 hora, 0 minutos, 0 segundos. ; 3.500 segundos = 0 horas, 58 minutos e 20 segundos.
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
}

void Ex26(void) {
	//26. Dado um n�mero inteiro n�o nulo de tr�s d�gitos, imprimir este n�mero ao contrario, isto e, se a entrada for 123 (cento e vinte e tr�s), imprimir 321 (trezentos e vinte e um). Usar opera��es sobre inteiros, por exemplo, divis�es sucessivas por 10.
	int numero, d1, d2, d3;
	printf ("Digite um n�mero de 3 digitos:\n");
	scanf ("%d", &numero);
	d1 = (numero %100) %10;
	d2 = (numero %100) /10;
	d3 = numero /100;
	system ("cls");
	printf ("N�mero digitado: %d\nN�mero ao contr�rio: %d%d%d\n\n", numero, d1,d2,d3);
	system ("pause");
}

void Ex27(void) {
	//27. A solu��o x,y para o sistema de equa��es lineares abaixo: ax + by = u cx + dy = v � dada por: - calcular a solu��o x,y de cada sistema; - mostrar os par�metros lidos e os valores calculados.	
	float a, b, c, d, u, v, x, y;
	printf ("Digite o valor de A: ");
	scanf ("%f", &a);
	fflush (stdin);
	printf ("Digite o valor de B: ");
	scanf ("%f", &b);
	fflush (stdin);
	printf ("Digite o valor de C: ");
	scanf ("%f", &c);
	fflush (stdin);
	printf ("Digite o valor de D: ");
	scanf ("%f", &d);
	fflush (stdin);
	printf ("Digite o valor de U: ");
	scanf ("%f", &u);
	fflush (stdin);
	printf ("Digite o valor de V: ");
	scanf ("%f", &v);
	fflush (stdin);
	x = (d/(a*d-b*c))*u - (b/(a*d-b*c))*v;
	y = ((c - c - c)/(a*d-b*c))*u + (a/(a*d-b*c))*v;
	system ("cls");
	printf ("Valor de X: %.2f\nValor de Y: %.2f", x, y);
	
}*/

int main(int argc, char const *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	int op;
	do {
		system ("cls");
		printf ("|=============================================|\n	   Lista de exerc�cios 01\n    Digite o n�mero do exerc�cio 1 ao 27\n|=============================================|\n\n");
		scanf ("%d", &op);
		fflush (stdin);
		switch (op) {
			case 1 :
				system ("cls");
				printf ("Exerc�cio 1:\n\n");
				Ex1();
				break;
					
			case 2:
				system ("cls");
				printf ("Exerc�cio 2:\n\n");
				Ex2();
				break;
			
			case 3:
				system ("cls");
				printf ("Exerc�cio 3:\n\n");
				Ex3();
				break;
			
			case 4:
				system ("cls");
				printf ("Exerc�cio 4:\n\n");
				Ex4();
				break;
			
			case 5:
				system ("cls");
				printf ("Exerc�cio 5:\n\n");
				Ex5();
				break;
			
			case 6:
				system ("cls");
				printf ("Exerc�cio 6:\n\n");
				Ex6();
				break;
			
			case 7:
				system ("cls");
				printf ("Exerc�cio 7:\n\n");
				Ex7();
				break;
					
			case 8:
				system ("cls");
				printf ("Exerc�cio 8:\n\n");
				Ex8();
				break;
					
			case 9:
				system ("cls");
				printf ("Exerc�cio 9:\n\n");
				Ex9();
				break;
					
			case 10:
				system ("cls");
				printf ("Exerc�cio 10:\n\n");
				Ex10();
				break;
					
			case 11:
				system ("cls");
				printf ("Exerc�cio 11:\n\n");
				Ex12();
				break;
					
			case 12:
				system ("cls");
				printf ("Exerc�cio 12:\n\n");
				Ex13();
				break;
					
			case 13:
				system ("cls");
				printf ("Exerc�cio 13:\n\n");
				Ex14();
				break;
					
			case 14:
				system ("cls");
				printf ("Exerc�cio 14:\n\n");
				Ex15();
				break;
					
			case 15:
				system ("cls");
				printf ("Exerc�cio 15:\n\n");
				Ex15();
				break;
					
			case 16:
				system ("cls");
				printf ("Exerc�cio 16:\n\n");
				Ex16();
				break;
					
			case 17:
				system ("cls");
				printf ("Exerc�cio 17:\n\n");
				Ex17();
				break;
					
			case 18:
				system ("cls");
				printf ("Exerc�cio 18:\n\n");
				Ex18();
				break;
					
			case 19:
				system ("cls");
				printf ("Exerc�cio 19:\n\n");
				Ex19();
				break;
					
			case 20:
				system ("cls");
				printf ("Exerc�cio 20:\n\n");
				Ex20();
				break;
					
			case 21:
				system ("cls");
				printf ("Exerc�cio 21:\n\n");
				Ex21();
				break;
					
			case 22:
				system ("cls");
				printf ("Exerc�cio 22:\n\n");
				Ex22();
				break;
					
			case 23:
				system ("cls");
				printf ("Exerc�cio 23:\n\n");
				Ex23();
				break;
					
			case 24:
				system ("cls");
				printf ("Exerc�cio 24:\n\n");
				Ex24();
				break;
					
			case 25:
				system ("cls");
				printf ("Exerc�cio 25:\n\n");
				Ex25();
				break;
					
			case 26:
				system ("cls");
				printf ("Exerc�cio 26:\n\n");
				Ex26();
				break;
					
			case 27:
				system ("cls");
				printf ("Exerc�cio 27:\n\n");
				Ex27();
				break;
						
		}
	}while (op != 27);
	
	
	system ("pause");
	return 0;
}
