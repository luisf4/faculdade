#include <stdio.h>
#include <locale.h>

// Main
int main(){
	setlocale(LC_ALL,"Portuguese");

	// Variaveis 
	int x1 = 33;
	int x2 = -48;
	
	float f1 = 34.35;
	float f2 = 11.32;
	
	double d1 = 35.34;
	double d2 = 31.32;
	
	char c1 = "a";
	char c2 = "b";
	
	
	// Mostra o endereço de memoria em que as variáveis int estão
	printf("Int local em memoria \n");
	printf("#=====================> \n");
	printf("variavel 1X - endereço #%p - qtd bytes %d - conteúdo %d\n", &x1,sizeof(x1), x1);
	printf("variavel 2X - endereço #%p - qtd bytes %d  conteúdo %d\n", &x2, sizeof(x2), x2);
	
	// Mostra o endereço de memoria em que as variáveis float estão
	printf("Float local em memoria \n");
	printf("#=====================> \n");
	printf("variavel 1f - endereço #%p - qtd bytes %d - conteúdo %f\n", &f1, sizeof(f1), f1);
	printf("variavel 2f - endereço #%p - qtd bytes %d - conteúdo %f\n", &f2, sizeof(f2), f2);
	
	// Mostra o endereço de memoria em que as variáveis double estão
	printf("Float local em memoria \n");
	printf("#=====================> \n");
	printf("variavel 1d - endereço #%p - qtd bytes %d - conteúdo %f\n", &d1, sizeof(d1), d1);
	printf("variavel 2d - endereço #%p - qtd bytes %d - conteúdo %f\n", &d2, sizeof(d2), d2);
	
	
	// Mostra o endereço de memoria em que as variáveis string estão
	printf("Float local em memoria \n");
	printf("#=====================> \n");
	printf("variavel 1c - endereço #%p - qtd bytes %d - conteúdo %f\n", &c1, sizeof(c1), c1);
	printf("variavel 2c - endereço #%p - qtd bytes %d - conteúdo %f\n", &c2, sizeof(c2), c2);
	
	
	
	return 0;
};




