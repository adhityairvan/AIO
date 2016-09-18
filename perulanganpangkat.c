#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d",&a);
	b=1;
	while((a!=b)&&(a>b))
	{
		b*=2;
	}
	if(a==b)
	{
		printf("ya\n");
	}
	else
	{
		printf("bukan\n");
	}
	return 0;
}
