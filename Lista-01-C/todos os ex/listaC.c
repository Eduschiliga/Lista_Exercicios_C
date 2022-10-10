#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void Ex1(void) {
	//1. Escreva um programa para ler, calcular e escrever a média aritmética entre dois números.
	float n1, n2, media;
    printf ("Digite o primeiro número:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo número:\n");
    scanf ("%f", &n2);
    media =  (n1+n2)/ 2;
    printf ("A sua média foi: %.2f\n", media);

	system("pause");
		
}

void Ex2(void){
	//2. Faça um programa para ler dois valores (x e y), calcular e mostrar x elevado à potência de y.
	float n1, n2, potencia;
	printf ("Escreva o primeiro número:\n");
	scanf ("%f", &n1);
	printf ("Escreva o segundo número:\n");
	scanf ("%f", &n2);
	potencia = pow(n1,n2);
	printf ("O número %.2f elevado a %.2f é: %.2f\n\n", n1, n2, potencia);
	
	system ("pause");
}

void Ex3(void) {
	//3. Faça um programa que leia dois números reais e em seguida mostre: a soma, o produto, a divisão e a subtração entre eles.
	float n1, n2, soma, produto, divisao, subtracao;
	printf ("Digite o primeiro número:\n");
	scanf ("%f", &n1);
	fflush(stdin);
	printf ("Digite o segundo número:\n");
	scanf ("%f", &n2);
	fflush(stdin);
	soma = (n1 + n2);
	system("cls");
    fflush(stdin);
	printf ("Resultado das devidas operações:\n\n ");
	printf ("Soma: %.2f\n", soma);
	subtracao = (n1 - n2);
	printf ("Subtração: %.2f\n", subtracao);
	produto = (n1 * n2);
	printf ("Produto: %.2f\n", produto);
	divisao = (n1 / n2);
	printf ("Divisão: %.2f\n\n", divisao);
	system ("pause");
}

void Ex4(void) {
	//4. Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit e o mesmo converte os valores para Celsius Apresente o resultado. (pesquise a fórmula)
	float fah, cel;
	printf ("Digite a temperatura para efetuar a conversão para Celsius:\n");
	scanf ("%f", &fah);
	fflush (stdin);
	cel = ((fah - 32)/1.8);
	system("cls");
	printf ("CONVERSÃO DE TEMPERATURAS\n\nA temperatura em Celsius é: %.2f°\nA temperatura em Fahrenheit é %.2f°\n\n", cel,fah);
	system ("pause");
}

void Ex5(void) {
	//5. Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA
	float comprimento, largura, altura, volume;
	printf ("Digite as medidas a seguir\n\n-Comprimento\n-Largura\n-Altura\n\n");
	scanf ("%f%f%f", &comprimento, &largura, &altura);
	fflush(stdin);
	volume = ((altura * largura)* comprimento);
	system("cls");
	printf ("O Volume da caixa retangular é: %.2f\n\n", volume);
	system ("pause");
}

void Ex6(void) {
	//6. Elaborar um programa para efetuar o cálculo do valor de uma prestação em atraso, utilizando a fórmula: PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO)
	float prestacao, valor, taxa, tempo;
	printf ("\nCÁLCULO DE PRESTAÇÃO\n\nDigite os seguintes valores para os itens a seguir:\n\n-Valor da prestação\n-Taxa\n-Dias de atraso:\n\n");
	scanf ("%f%f%f", &valor, &taxa, &tempo);
	fflush (stdin);
	prestacao = valor + (valor*(taxa/100)*tempo);
	system("cls");
	fflush(stdin);
	printf ("O valor da prestação é R$%.2f\n\n", prestacao);
	system ("pause");
}

void Ex7(void) {
	//7. Faça um programa para ler um valor (o lado de um quadrado), calcular e mostrar a respectiva área do quadrado.
	float lado, area;
	printf ("CÁLCULO DA ÁREA DO QUADRADO\n\nDigite o valor do lado do quadrado:\n");
	scanf ("%f", &lado);
	fflush (stdin);
	area = pow(lado,2);
	system("cls");
	printf("A área do quadrado é: %.2f\n\n", area);
	system ("pause");
}

void Ex8(void) {
	//8. Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida de sua altura dividida por dois. Escreva um programa que peça os valores da base e da altura e forneça a área do triângulo.
	float base, altura, area;
	printf ("CÁLCULO DA ÁREA DE UM TRIÂNGULO\n\nDigite o valor dos itens a seguir:\n\n-Base\n-Altura\n\n");
	scanf ("%f%f", &base, &altura);
	fflush (stdin);
	area = (base*altura)/2;
	system("cls");
	printf ("A área do triângulo é: %.2f\n\n", area);
	system ("pause");
}

void Ex9(void) {
	//9. Faça um programa para ler dois valores (altura e raio de um cilindro), calcular e mostrar o respectivo volume do cilindro. (pesquise a fórmula)
	float altura, raio, volume;
	printf ("CÁLCULO DO VOLUME DE UM CILINDRO\n\nDigite o valor dos itens a seguir:\n\n-Altura\n-Raio\n\n");
	scanf ("%f%f", &altura, &raio);
	fflush (stdin);
	volume = 3.14 * pow(raio,2) * altura;
	system ("cls");
	printf ("O volume do cilindro é: %.2f\n\n", volume);
	system ("pause");
}

void Ex10(void) {
	//10. Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada obtida por um aluno para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o seguinte: duas notas e os dois respectivos pesos das notas. (pesquise a fórmula).	
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

}

void Ex11(void) {
	//11. Escreva um programa que calcule o consumo de combustível de um automóvel em Km/L, e o informe na tela.
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
}

void Ex12(void) {
	/*12. Uma fábrica produz dois tipos de peças de automóveis para venda no varejo.
	Escrever um programa que ajuda um cliente de loja de auto-peças a comprar estes tipos
	de peças. O programa deve ler:
	• a percentagem do IPI a ser acrescido no valor das peças
	• o código da peça 1, valor unitário da peça 1, quantidade de peças 1
	• o código da peça 2, valor unitário da peça 2, quantidade de peças 2
	O programa deve calcular o valor total a ser pago e apresentar o resultado.
	Fórmula: (valor1 * quant1 + valor2 * quant2) * (IPI/100 + 1)*/
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
}

void Ex13(void) {
	/*13. Identifique os dados de entrada, processamento e saída no programa abaixo
	• Receba código da peça
	• Receba valor da peça
	• Receba Quantidade de peças
	• Calcule o valor total em estoque (Quantidade * Valor da peça)
	• Mostre o código da peça e seu valor total em estoque.*/
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
}

void Ex14(void) {
	//14. Escrever um programa que lê o número de um vendedor, o seu salário fixo, o total de vendas por ele efetuadas e o percentual que ganha sobre o total de vendas. Calcular o salário total do vendedor. Escrever número do vendedor e o salário total.
	int nvendedor;
	float sfixo, totvendas, pvendas, stot, comissao;
	printf ("Digite o número do vendedor:\n");
	scanf ("%i", &nvendedor);
	fflush (stdin);
	printf ("Digite o salário fixo:\n");
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
	printf ("Código do vendedor: %i\nSalário total: R&%.2f.\n", nvendedor, stot);
	system ("pause");
}

void Ex15(void) {
	//15. Construa um programa que calcule a seguinte fórmula, e mostre no final o valor de  RESULT = (2 * A mod 3) – A
	int result, A;
	printf ("Digite o valor de A: ");
	scanf ("%f", &A);
	fflush (stdin);
	result = (2 * A % 3)- A;
	system ("cls");
	printf ("O valor de RESULT é: %i\n.", result);
	system ("pause");
}

void Ex16(void) {
	//16. Desenvolva um programa para ler valores para as variaveis y e z. Depois, calcule e mostre o valor de x, através expressão:
	float x, y, z;
	printf ("Digite o valor de Y e Z:\n");
	scanf ("%f%f", &y,&z);
	fflush (stdin);
	x = sqrt (y*(pow(y,22)+pow(z,33)));
	printf ("O resultado da expressão é: %.2f\n\n", x);
	system ("pause");
}

void Ex17(void) {
	//17. Sabe-se que,para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 18W de potência. Faça um programa que recebe as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser usada.
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
}

void Ex18(void) {
	//18. Faça um programa que leia o número do funcionário, o número de horas trabalhadas mensais, o valor que recebe por hora e o número de filhos com idade menor de 14 anos. Calcular e escrever o salário deste funcionário, sendo que cada filho menor de 14 anos acrescenta 10% do salário.
	int nfuncionario, nhoras, nfilhosmenor14;
	float valorhora, salariofunc, salario10, salariof;
	printf ("Digite o número do funcionário: ");
	scanf ("%i", &nfuncionario);
	fflush (stdin);
	printf ("\nDigite o número de horas trabalhadas mensais:  ");
	scanf ("%i", &nhoras);
	fflush (stdin);
	printf ("\nDigite o valor que recebe por hora:  ");
	scanf ("%f", &valorhora);
	fflush (stdin);
	printf ("Digite o número de filhos com idade menor que 14:  ");
	scanf ("%i", &nfilhosmenor14);
	fflush(stdin);
	salariofunc = (nhoras * valorhora);
	salario10 = salariofunc /10;
	salariof = (nfilhosmenor14 * salario10) + salariofunc;
	printf ("Salário mensal do funcionário:  %.2f\n", salariof);
	system ("pause");
}

void Ex19(void) {
	//19. O valor ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um programa em C que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
	float custof, valordistr, imposto, custocons;
	valordistr = 28;
	imposto = 45;
	printf ("Digite o custo de fábrica:  ");
	scanf ("%f", &custof);
	fflush (stdin);
	valordistr = custof + (custof * valordistr /100);
	imposto = custof + (custof * imposto /100);
	custocons = custof + imposto + valordistr;
	system ("cls");
	printf ("O valor ao consumidor é: R$%.2f\n\n", custocons);
	system ("pause");
}

void Ex20(void) {
	//20. Escreva um programa que leia dois números que deverão ser colocados, respectivamente, nas variáveis VA e VB. O programa deve, então, trocar os valores de VA por VB e vice-versa e mostrar o conteúdo destas variáveis.
	float va, vb, aux;
	printf ("Digite o primeiro  e o segundo número:\n");
	scanf ("%f%f", &va, &vb);
	fflush (stdin);
	aux = va;
	va = vb;
	vb = aux;
	system ("cls");
	printf ("O primeiro número  é:%.2f\nO  segundo número  é: %.2f\n\n", va, vb);
	system ("pause");
}

void Ex21(void) {
	//21. Quais as operações necessárias para intercambiar os valores de 3 variáveis A, B e C de modo que A fique com o valor de B; B fique com o valor de C e C fique com o valor de A?
	float a, b, c, aux;
	printf ("Digite o primeiro, segundo e o terceiro número:\n");
	scanf ("%f%f%f", &a, &b, &c);
	fflush (stdin);
	aux = a;
	a = b;
	b = c;
	c = aux;
	system ("cls");
	printf ("\n\nO primeiro número é: %.2f\nO segundo número é: %.2f\nO terceiro número é: %.2f\n\n", a,b,c);
	system ("pause");
}

void Ex22(void) {
	//22. Desenvolva uma aplicação em linguagem C que receba a idade de um indivíduo em anos, meses e dias e mostre-a expressa apenas em dias.
	int ano, mes, dias, dia;
	printf ("Digite a sua idade em anos, meses e dias:\n");
	scanf ("%i%i%i", &ano, &mes, &dia);
	fflush (stdin);
	dias = (ano*365) + (mes *30) +dia;
	system ("cls");
	printf ("A sua idade em dias é: %i\n\n", dias);
	system ("pause");
}

void Ex23(void) {
	//23. Desenvolva uma aplicação em linguagem C que receba a idade de um indivíduo em dias e mostre-a expressa em anos, meses e dias.
	int dias;
	printf ("Digite a sua idade em dias: ");
	scanf ("%i", &dias);
	fflush (stdin);
	printf ("\nO númedo de anos é: %d\n, meses: %d\n, dias: %d\n", dias/365,(dias%365)/30,(dias%365)%30);
	system ("pause");
}

void Ex24(void) {
	//24. Dadas duas frações ordinárias a/b e c/d, determinar a sua soma e o seu produto. Pense e decida como seria a entrada de dados.
	float num1, num2, den1, den2, prod, soma;
	printf ("Informe o valor do numerador e do denominador da fração 1:\n");
	scanf ("%f%f", &num1, &den1);
	fflush (stdin);
	system ("cls");
	printf ("Informe o valor do numerador e do denominador da fração 2:\n");
	scanf ("%f%f", &num2, &den2);
	system ("cls");
	soma = (num1 * den2) + (num2 * den1) / (den1 * den2);
	prod = (num1 * num2) / (den1 * den2);
	printf ("Produto das frações: %.2f", prod);
	printf ("\nSomatório: %.2f\n\n", soma);
	system ("pause");
}

void Ex25(void) {
	//25. Dado um numero inteiro que representa uma quantidade de segundos, determinar o seu valor equivalente em horas, minutos e segundos. Se a quantidade de segundos for insuficiente para dar um valor em horas, o valor em horas deve ser 0 (zero). A mesma observação vale em relação aos minutos e segundos. Por exemplo: 3.600 segundos = 1 hora, 0 minutos, 0 segundos. ; 3.500 segundos = 0 horas, 58 minutos e 20 segundos.
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
	//26. Dado um número inteiro não nulo de três dígitos, imprimir este número ao contrario, isto e, se a entrada for 123 (cento e vinte e três), imprimir 321 (trezentos e vinte e um). Usar operações sobre inteiros, por exemplo, divisões sucessivas por 10.
	int numero, d1, d2, d3;
	printf ("Digite um número de 3 digitos:\n");
	scanf ("%d", &numero);
	d1 = (numero %100) %10;
	d2 = (numero %100) /10;
	d3 = numero /100;
	system ("cls");
	printf ("Número digitado: %d\nNúmero ao contrário: %d%d%d\n\n", numero, d1,d2,d3);
	system ("pause");
}

void Ex27(void) {
	//27. A solução x,y para o sistema de equações lineares abaixo: ax + by = u cx + dy = v é dada por: - calcular a solução x,y de cada sistema; - mostrar os parâmetros lidos e os valores calculados.	
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
		printf ("|=============================================|\n	   Lista de exercícios 01\n    Digite o número do exercício 1 ao 27\n|=============================================|\n\n");
		scanf ("%d", &op);
		fflush (stdin);
		switch (op) {
			case 1 :
				system ("cls");
				printf ("Exercício 1:\n\n");
				Ex1();
				break;
					
			case 2:
				system ("cls");
				printf ("Exercício 2:\n\n");
				Ex2();
				break;
			
			case 3:
				system ("cls");
				printf ("Exercício 3:\n\n");
				Ex3();
				break;
			
			case 4:
				system ("cls");
				printf ("Exercício 4:\n\n");
				Ex4();
				break;
			
			case 5:
				system ("cls");
				printf ("Exercício 5:\n\n");
				Ex5();
				break;
			
			case 6:
				system ("cls");
				printf ("Exercício 6:\n\n");
				Ex6();
				break;
			
			case 7:
				system ("cls");
				printf ("Exercício 7:\n\n");
				Ex7();
				break;
					
			case 8:
				system ("cls");
				printf ("Exercício 8:\n\n");
				Ex8();
				break;
					
			case 9:
				system ("cls");
				printf ("Exercício 9:\n\n");
				Ex9();
				break;
					
			case 10:
				system ("cls");
				printf ("Exercício 10:\n\n");
				Ex10();
				break;
					
			case 11:
				system ("cls");
				printf ("Exercício 11:\n\n");
				Ex12();
				break;
					
			case 12:
				system ("cls");
				printf ("Exercício 12:\n\n");
				Ex13();
				break;
					
			case 13:
				system ("cls");
				printf ("Exercício 13:\n\n");
				Ex14();
				break;
					
			case 14:
				system ("cls");
				printf ("Exercício 14:\n\n");
				Ex15();
				break;
					
			case 15:
				system ("cls");
				printf ("Exercício 15:\n\n");
				Ex15();
				break;
					
			case 16:
				system ("cls");
				printf ("Exercício 16:\n\n");
				Ex16();
				break;
					
			case 17:
				system ("cls");
				printf ("Exercício 17:\n\n");
				Ex17();
				break;
					
			case 18:
				system ("cls");
				printf ("Exercício 18:\n\n");
				Ex18();
				break;
					
			case 19:
				system ("cls");
				printf ("Exercício 19:\n\n");
				Ex19();
				break;
					
			case 20:
				system ("cls");
				printf ("Exercício 20:\n\n");
				Ex20();
				break;
					
			case 21:
				system ("cls");
				printf ("Exercício 21:\n\n");
				Ex21();
				break;
					
			case 22:
				system ("cls");
				printf ("Exercício 22:\n\n");
				Ex22();
				break;
					
			case 23:
				system ("cls");
				printf ("Exercício 23:\n\n");
				Ex23();
				break;
					
			case 24:
				system ("cls");
				printf ("Exercício 24:\n\n");
				Ex24();
				break;
					
			case 25:
				system ("cls");
				printf ("Exercício 25:\n\n");
				Ex25();
				break;
					
			case 26:
				system ("cls");
				printf ("Exercício 26:\n\n");
				Ex26();
				break;
					
			case 27:
				system ("cls");
				printf ("Exercício 27:\n\n");
				Ex27();
				break;
						
		}
	}while (op != 27);
	
	
	system ("pause");
	return 0;
}
