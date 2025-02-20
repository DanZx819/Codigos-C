#include <stdio.h>

int main(){
	float V;
	
	printf("Quantidade em Metros Cubicos: ");
	scanf("%f", &V);
	
	float L;
	L = V *1000;
	printf("Litros: %2.f", L);
}
