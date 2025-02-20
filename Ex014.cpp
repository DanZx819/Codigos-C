#include <stdio.h>

int main(){
	float ang;
	printf("Digite o seu angulo em graus: ");
	scanf("%f", &ang);
	
	float pi;
	pi = 3.14;
	
	float rad;
	rad = ang* pi / 180;
	
	printf("Seu angulo convertido para radianos foi: %f", rad);
}
