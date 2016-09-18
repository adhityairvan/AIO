#include<stdio.h>

void proses(float *,int *,int,int);
void input(int *,int *);
void output(int,int,float,int);

int main()
{
	float hasil;
	int bagi;
	int masukan;
	int sisa;
	input(&masukan,&bagi);
	proses(&hasil,&sisa,masukan,bagi);
	output(masukan,bagi,hasil,sisa);
}

void input(int *masukan,int *pembagi)
{
	printf("Masukkan sembarang angka.. ");scanf("%d",masukan);
	printf("Masukan angka pembagi.. ");scanf("%d",pembagi);
}
void proses(float *keluaran,int *modulus,int masukan,int pembagi)
{
	*keluaran=(double)masukan/pembagi;
	*modulus=masukan%pembagi;
}

void output(int masukan,int pembagi,float keluaran,int sisa)
{
	printf("Hasil pembagian dari %d di bagi %d adalah..",masukan,pembagi);
	printf("\nhasil nya %f..",keluaran);
	printf("\nSisa pembagian nya adalah %d",sisa);
}
