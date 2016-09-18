#include<stdio.h>
#include<math.h>

int scanhasil(float awal[],float bulat[],float pecah[]);

int main()
{
	float array[3];
	char mmemek[];
	scanf("%f",&array[0]);
	scanhasil(&array[0],&array[1],&array[2]);
	printf("%f %f",array[1],array[2]);
	return 0;
}

int scanhasil(float awal[],float bulat[],float pecah[])
{
	*bulat=floor(*awal);
	*pecah=*awal-*bulat;
}
