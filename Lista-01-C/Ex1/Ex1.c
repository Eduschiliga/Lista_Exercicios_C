#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

	setlocale(LC_ALL, "Portuguese");
    
	float n1, n2, media;
    printf ("Digite o primeiro n�mero:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo n�mero:\n");
    scanf ("%f", &n2);
    media =  (n1+n2)/ 2;
    printf ("A sua m�dia foi: %.2f\n", media);

	system("pause");
	return 0;	

}
