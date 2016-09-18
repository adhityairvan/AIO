#include<stdio.h>

int main()
{
	int a,b,c,d,i;
	scanf("%d",&a);
	c=0;
	for(i=0;i<a;++i)
	{
		scanf("%d",&b);
		if(b>=c)
		{
			c=b;
		}
		if(b<c)
		{
			d=b;
		}
		if(b<d)
		{
			d=b;
		}
	}
	printf("%d %d\n",c,d);
}
