#include <stdio.h>


int main() {
	
	int idade;
	
	printf("coi saboa" );
	scanf("%d", &idade);
	
	switch (idade) {
		case 5: case 6: case 7:
			printf("categoria infantil A");
			break;
		case 8: case 9: case 10:
			printf("categoria intantil B");
			break;
		case 11: case 12: case 13:
			printf("Categoria juvenil A");
			break;
		case 14: case 15: case 16: case 17:
			printf("categoria junevil B");
			break;
		
		default: 
			if (idade=>10) {
				printf("categoria adulto");
			}
			else {
				printf(" fofucho voce não pode competir");
			}
	}
	
	return 0;
}