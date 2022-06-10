#include <stdio.h>

int main() {
	int numero;
	
	printf("\n BOTA :S");
	scanf("%d", &numero);
	
	switch(numero){
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :printf("31 dias"); break;
		case 2 :printf("28 dias"); break;
		case 4 :
		case 6 :
		case 9 :
		case 11 :printf("30dias "); break;
		default: printf("fudeu");
		
	}
}

