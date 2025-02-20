#include <stdio.h>

int main(){
	float km;
	printf("Digite a sua distancia em km: ");
	scanf("%f", &km);
	
	float M;
	M = km / 1.61;
	printf("Sua distancia em milhas: %2.f", M);
}
