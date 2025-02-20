#include <stdio.h>

int main(){
	float n1;
	
	printf("Digite o numero: ");
	scanf("%f", &n1);
	
	float quad;
	quad = n1 * n1;
	printf("O quadrado de %f é %f", n1,quad);
}
