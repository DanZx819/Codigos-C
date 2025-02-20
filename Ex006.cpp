#include <stdio.h>

int main(){
	
	float C;
	printf("Temperatura e Graus Celsios: ");
	scanf("%f", &C);
	
	float F;
	F = C * (9.0/5.0) + 32;
	printf("A temperatura em celsios %2.f e em Farenheint %2.f", C,F);
}
