#include<stdio.h>
#include<stdlib.h>
int segitiga();
int persegi();
int persegip();
int trapesium();

int main()
{
	char pilihan;
	do
	{
	printf("\npilih perhitungan.\n1.seitiga\n2.persegi\n3.persegi panjang.\n4.trapesium.\n0.Exit\n");
	scanf("%c",&pilihan);
	switch(pilihan)
		{
			case '1':
			segitiga();
			break;
			case '2':
			persegi();
			break;
			case'3':
			persegip();
			break;
			case '4':
			trapesium();
			break;
			default:
			printf("salah input!");
			break;
		}
		}
	while(pilihan !=0); 
	return(0);
}

int segitiga()
{
	float a, t, l;
	printf("Program Penghitungan Luas Segitiga.\n\n Masukan panjang alas");
	scanf("%f",&a);
	printf("masukkan tinggi segitiga..\n");
	scanf("%f",&t);
	l=a*t/2;
	printf("hasil luas segitiga nya adalah %f",l);
	return(0
	);
	
}
int persegi()
{
	int sisi=sisi*sisi;;
	printf("masukkan panjang sisi..");
	scanf("%d",&sisi);
	printf("hasil luas nya adalah %d\n",sisi);
	return(0);
}
int persegip()
{
	int p,l,luas;
	printf("masukkan panjang..");scanf("%d",&p);
	printf("\nmasukkan lebar..");scanf("%d",&l);
	luas=p*l;
	printf("\nLuas persegi nya adalah %d\n",luas)	;
	return (0);
}
int trapesium()
{
	float s1,s2,t,luas;
	printf("masukkan sisi sejajar 1");scanf("%f",&s1);
	printf("\nmasukkan sisi sejajar 2");scanf("%f",&s2);
	printf("\nMasukkan tinggi ");scanf("%f",&t);
	luas=(s1+s2)*t/2;
	printf("luas nya adalah %.2f",luas);

}
