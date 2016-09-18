#include <stdio.h>
#include <math.h>

float akar(float,float);
void tulisan(void);

int main()
{
	tulisan();
	return 1;
}

void tulisan()
{

	float angka,kuadrat;
	printf("Program perhitungan akar..\n");
	printf("masukkan angka..");scanf("%f",&angka);
	printf("\nMasukan jumlah akar..");scanf("%f",&kuadrat);
	printf("jawaban nya adalah %f",akar(angka,kuadrat));
}

float akar(float nilai,float keren)
{
	float hasil;
	hasil = pow(nilai,1/keren);
	return(hasil);
	
}
