#include<stdio.h>

int main()
{
	int input,i,hasil;
	scanf("%d",&input);
	char nama[input+1][1000];
	for(i=0;i<=input+1;i++)
	{
		gets(nama[i]);
	}
	for(i=0;i<=input;i++)
	{
		if(strcmp(nama[i],nama[input])==0)
		{
			hasil=1;
			break;
		}
	}
	if(hasil==1)
	{
		printf("Nama ditemukan!\n");
	}
	else{
		printf("Nama tidak ditemukan!\n");
	}
}
