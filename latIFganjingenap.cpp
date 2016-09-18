#include<stdio.h>
#include<stdlib.h>

int main()
{
	int nInput;
	int nHasil;
	
	printf("Program ganjil genap..");
	printf("\nMasukkan angka sembarang..");
	scanf("%d",&nInput);
	nHasil=nInput%2;
	
	if (nHasil==0)
	printf("angka %d adalah angka genap",nInput);
	else
	printf("angka %d adalah angka ganjil",nInput);
	return 1;
}