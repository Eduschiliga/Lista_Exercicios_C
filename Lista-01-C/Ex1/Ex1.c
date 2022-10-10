#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

	setlocale(LC_ALL, "Portuguese");
    
	float n1, n2, media;
    printf ("Digite o primeiro número:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo número:\n");
    scanf ("%f", &n2);
    media =  (n1+n2)/ 2;
    printf ("A sua média foi: %.2f\n", media);

	system("pause");
	return 0;	

}
