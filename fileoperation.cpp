#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int main()
{
	char a,b,c;
	FILE *output;
	
	printf("Masukkan Nilai A..");scanf("%c",&a);
	
	printf("\nMasukan Nila C..");scanf("%c",&c);
	
	printf("\nMasukan Nilai B..");scanf("%c",&b);
	
	printf("Nilai A,B,C adalah..%c,%c,%c",a,b,c);
	
	output=fopen("kontol.txt","w");
	putc(a,output);putc(b,output);putc(c,output);
	
	return(1);
	
}