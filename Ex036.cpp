#include <stdio.h>
#include <math.h>
int main(){
	float R, H, V;
	
	printf("Altura: ");
	scanf("%f", &H);
	printf("Raio: ");
	scanf("%f", &R);
	
	
	V = M_PI * (pow(R, 2))* H;
	
	printf("Volume: %.2f", V);
}
