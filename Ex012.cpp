#include <stdio.h>

int main(){
	float M;
	
	printf("Digite a distancia em milhas: ");
	scanf("%f", &M);
	
	float km;
	km = 1.61 * M;
	
	printf("A distancia digitada em KM/H: %2.f", km);
}
