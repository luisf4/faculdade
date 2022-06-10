#include <stdio.h>

int main() {
	int opcao;
	float x, y, resultado;
	
	scanf("%f", &x );
	scanf("%f", &y );
	scanf("%d", &opcao );
	
	switch (opcao) {
		
		case 1 : resultado = (x+y)/2.0;
			printf("media aritimetica= %f", resultado);
        break;
    
        case 2 : 
		if (x>=y) {
			resultado = x-y;
		}
		else {
			resultado = y-x;
		}
		printf("subtração %f", resultado);
		break;
		
		case 3 : resultado = x*y;
			printf("Multiplicação %f", resultado);
        break;
		
		case 4 : 
		if (y != 0) {
			resultado = x/y;
			printf("divisão %f",resultado);
		}
		else {
			   printf("Não existe divisão por zero");	
		}
		break;
		default: printf("operation invalidade aaaaaaaaaaaaaaaaaaaaaaaaaa");
        	
	}
}

