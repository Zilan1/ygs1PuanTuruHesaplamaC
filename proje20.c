#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//YGS 1 Puan Turu Hesaplama
	
	//Turkce: 1.999
	//Matematik: 3.998
	// Sosyal Bilgiler: 1
	//Fen Bilgisi: 2.999
	//Taban: 100.160
	
	float turkce, matematik, sosyal, fen, taban, toplampuan;
	
	taban=100.160;
	
	printf("Turkce Netiniz: ");
	scanf("%f",&turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%f",&matematik);
	
	printf("Sosyal Netiniz: ");
	scanf("%f",&sosyal);
	
	printf("Fen Bilgisi Netiniz: ");
	scanf("%f",&fen);
	
	toplampuan=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
	
	printf("YGS-1 Puan Turunde Sonucunuz: %f",toplampuan);
	
	
	
	
	
	
	return 0;
}
