#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
	int num, resto, acumulado, posicao, a, b, c;
	printf("Favor digitar um numero.\n");
	scanf("%d", &num);
	acumulado=0;
	a=num;
	posicao=0;
	while(a>=1){
		a=a/10;
		posicao++;
	}
	posicao--;
	a=num;
	while(posicao>=0){
		b=a%10;
		acumulado= acumulado+b*pow(10, posicao);
		a=a/10;
		posicao--;
	}
	printf("%d\n", acumulado);
	if(num==acumulado){
		printf("O numero digitado e palindromo");
	}
	else
	{
		printf("O numero digitado nao e palindromo");
	}
	return 0;
}
