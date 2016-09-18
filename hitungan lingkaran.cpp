#include <stdio.h>
#include <stdlib.h>

int main()
{
	awal:	
		float radius, tinggi;
		printf("ini adalah Program penghitungan lingkaran\n");
		printf("Masukan Jari2 ");
		scanf("%f",&radius);
		printf("\nMasukan tinggi ");
		scanf("%f",&tinggi);
		float luas = 3.14*radius*radius;
		float keliling = 2*3.14*radius;
		float volume = tinggi*luas;
		printf("hasil nya /n luas = %f keliling = %f \n volume = %f",luas,keliling,volume);
		int data;
		printf("\n ulangi hitungan? ");
		scanf("%d",&data);
		if(data==1){
		printf("\nMengulang program..\n");
		goto awal;
		}
		printf("\nMenghentikan Program...\n");
		return 0;
				
}
