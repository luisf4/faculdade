#include <stdio.h>

int main(int argc, char** argv)
{
	int  diaNasc, mesNasc,anoNasc, diaAtual,mesAtual,anoAtual,idade;
	scanf("%d", &diaNasc);
	scanf("%d", &mesNasc);
	scanf("%d", &anoNasc);
	scanf("%d", &diaAtual);
	scanf("%d", &mesAtual);
	scanf("%d", &anoAtual);
	idade = anoAtual - anoNasc;
	if (mesNasc == mesAtual){
		if (diaNasc == diaAtual){
			printf("PARABENES ERMANOI");
		}
		else
		{
			if(diaNasc > diaAtual){
				idade = idade - 1 ;
			}
		}
	}
	else
	{
		if (mesNasc > mesAtual){
			idade = idade - 1 ;
		}
	}
	printf("idade = %d ", idade);
	return 0;
}
