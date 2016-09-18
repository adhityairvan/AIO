#include<stdio.h>

int main()
{
	int input,hasil;
	hasil=0;
	while(scanf("%d",&input)!=EOF)
	{
		hasil+=input;
	}
	printf("%d\n",hasil);
	return 0;
}
