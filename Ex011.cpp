#include <stdio.h>

int main(){
	float m;
	printf("Digite a distancia em M/S: ");
	scanf("%f", &m);
	
	float km;
	km = m * 3.6;
	printf("Distancia em m/s: %2.f \nDistancia em km/h: %2.f", m,km );
}
