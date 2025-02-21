#include <stdio.h>

int main(){
	
	float h;
	printf("Hectares:");
	scanf("%f", &h);
	
	float m2;
	m2 = h * 10000;
	
	printf("Metros Quadrados: %f", m2);
}
