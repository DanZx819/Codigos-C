#include <stdio.h>

int main(){
	float rad;
	printf("Radianos: ");
	scanf("%f", &rad);
	
	float pi;
	pi = 3.14;
	
	float ang;
	ang = rad * 180 / pi;
	
	printf("Graus: %f", ang);
}
