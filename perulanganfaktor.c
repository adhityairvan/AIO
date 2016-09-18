#include<stdio.h>

int main()
{
	int a,b,i;
	scanf("%d",&a);
	for(i=a;i>0;--i)
	{
		b=a%i;
		if(b==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
