#include <stdio.h>

int main(){
	float Ac;
	printf("Acres: ");
	scanf("%f", &Ac);
	
	float m2;
	m2 = Ac * 4048.58;
	printf("Metros quadrados: %f", m2);
}
