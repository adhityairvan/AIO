#include<stdio.h>
#include<stdlib.h>

int main()
{
	int banyak;
	int i;
	scanf("%d",&banyak);
	int input[banyak+1];
	
	for(i=0;i<=banyak;i++)
	{
		scanf("%d",&input[i]);
	}
	
	int hasil[banyak];
	
	for(i=0;i<banyak;i++)
	{
		if(i==banyak)break;
		hasil[i]=abs(input[banyak]-input[i]);
	}
	for(i=0;i<banyak;i++)
	{
		printf("%d\n",hasil[i]);
	}
}
