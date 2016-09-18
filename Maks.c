#include<stdio.h>

int cariMAKS(int *a,int panjang);

int main()
{
	int banyak,i;
	printf("masukkan banyak data.. ");scanf("%d",&banyak);
	int array[banyak];
	printf("\nMasukkan Data..");
	for(i=0;i<banyak;i++)
	{
		scanf("%d",&array[i]);
	}
	int hasil=cariMAKS(array,banyak);
	printf("Nilai maksimum dari data yang sudah dimasukkan adalah.. %d",hasil);
	return 0l
}

int cariMAKS(int *a,int panjang)
{
	int i;
	int pembanding=-1000;
	for(i=0;i<panjang;i++)
	{
		if(a[i]>=pembanding)
		{
			pembanding=a[i];
		}
	}
	return pembanding;
}
