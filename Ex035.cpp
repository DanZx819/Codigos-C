#include <stdio.h>
#include <math.h>

int main(){
	float A, B, Hip;
	
	printf("A: ");
	scanf("%f", &A);
	printf("B: ");
	scanf("%f", &B);
	
	Hip = pow(pow(A,2) + pow(B, 2)   ,0.5);
	
	printf("Hipotenusa: %.2f", Hip);
}
