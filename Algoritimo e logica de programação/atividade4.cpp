#include <stdio.h>

int main() {

	int x,y, resultado;
	char operador;
	
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%c", &operador);
	
	switch (operador) {
		case '+':
        	resultado = x+y;
			printf("%d", resultado);
			break;
		case '-':
        	resultado = x-y;
			printf("%d", resultado);
			break;
		case '*':
        	resultado = x*y;
			printf("%d", resultado);
			break;
			
		case '/':
			if (y != 0) {
				resultado = x/y;
				printf("divisão %d", resultado);
			}
			else {
				printf("Não esxiste divisão por ZERO");
			}
			
		case '%':
        	if (y != 0) {
				resultado x%y;tb76t7  gtb yg bt r  btfd7  5
				printf(" resto da divisão %d", resultado);	53
			}
			break;
	}
}

