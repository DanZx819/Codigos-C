#include <stdio.h>


int main(){
	
	float vd, desc,parc,coav,cop, vdesc;
	
	printf("Valor da venda: ");
	scanf("%f", &vd);
	
	desc = vd * 0.10;
	
	vdesc = vd - desc;
	
	parc = vd / 3;
	
	coav = vdesc * 0.05;
	cop = vd * 0.05;
	
	printf("Valor com desconto: %.2f\nParcelado: %.2f\nComissão a vista: %.2f\nComissão parcelado: %.2f", vdesc,parc, coav,cop);
	
}
