#include<stdio.h>
#include <string.h>
int main()
{
	int banyak,i;
	printf("Masukkan Banyak data.. ")
	scanf("%d",&banyak);
	int total=banyak-1;
	int counter;
	int modus[10];
	int data[total];
	int pembanding=0;
	int output;
	memset(modus,0,sizeof modus);
	memset(data,0,sizeof data);
	printf("Masukkan data.. ")
	for(i=0;i<=total;i++)
	{
		scanf("%d",&data[i]);
	}
	
	for(counter=0;counter<=total;counter++)
	{
		++modus[data[counter]];
	}
	for(i=0;i<=9;i++)
	{
		if(modus[i]>=pembanding)
		{pembanding=modus[i];
		output=i;}
	}
	printf("%d\n",output);
	return 0;
}
