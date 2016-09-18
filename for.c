#include<stdio.h>

int main()
{
	int i,a;
	int b[i];
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		scanf("%d",&b[i]);
		b+=b[i];
	}
	printf("%d",b);
}
