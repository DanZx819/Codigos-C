#include <stdio.h>
#include <math.h>

int main(){
	float p, d, c;
	printf("Pre�o: ");
	scanf("%f", &p);
	
	 
	d = p * 0.12;
	p = p - d;
	
	printf("Pre�o com desconto: %.2f", p);
}
