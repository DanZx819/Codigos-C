#include <stdio.h>
int main(){
	float F;
	printf("Temperatura em Farenhait:");
	scanf("%f", &F);
	
	float C;
	C = 5 *(F -32.0) / 9;
	printf("TEmperatura em Farenhaint:%.2f \n", F);
	printf("Temperatura em Celsios: %.2f", C);
}
