#include<stdio.h>

int main()
{
	int input,counter,printangka,i;
	scanf("%d%d",&input,&counter);
	printangka=0;
	for(i=1;i<=input;i++)
	{
		printangka++;
		printf("%d\n",printangka);
		if(printangka==counter)
		printangka-=counter;
		
	}
	return 0;
}
