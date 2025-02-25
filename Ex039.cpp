#include <stdio.h>

int main(){
	float val, pri, seg, ter;
	val = 780000;
	
	pri = val * 0.46;
	seg = val * 0.32;
	ter = val - pri - seg;
	
	printf("Total: %.2f\nPrimeiro: %.2f,\nSegundo: %.2f\nTerceiro: %.2f", val, pri,seg,ter);
	
	
}
