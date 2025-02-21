#include <stdio.h>

int main(){
	float real;
	printf("Digite o valor em reais:  ");
	scanf("%f", &real);
	
	float conv;
	conv = real / 5.70;
	
	printf("Dollar: %f", conv);	
}
