#include<stdio.h>

int main()
{
	float a, t, l;
	printf("Program Penghitungan Luas Segitiga.\n\n Masukan panjang alas");
	scanf("%f",&a);
	printf("masukkan tinggi segitiga..\n");
	scanf("%f",&t);
	l=a*t/2;
	printf("hasil luas segitiga nya adalah %f",l);
	return(1);
	
}