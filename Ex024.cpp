#include <stdio.h>

int main(){
	float m2;
	printf("Metros quadrados: ");
	scanf("%f", &m2);
	
	float Ac;
	Ac = m2 * 0.000247;
	printf("Acres: %f", Ac);
}
