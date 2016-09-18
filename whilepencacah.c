#include<stdio.h>

int main()
{
	int a,b,c;
	b=0;
	while(a!=EOF)
	{
		scanf("%d",&c);
		b+=c;
	}
	
	printf("%d",b);
	return 0;
}
