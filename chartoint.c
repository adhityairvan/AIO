#include<stdio.h>
#define ENTER '\n'

int main()
{
	char a;
	long long int b=1,c;
	int x,i;
	x=0;
	int modd=1000000004;
	for( ; ; )
	{
		scanf("%c",&a);
		if((123>a)&&(a>96))
		{
			b=(b*(a-96))%modd;
		}
		else if((91>a)&&(a>64))
		{
			b=(b*(a-64))%modd;
		}
		else if(a==ENTER)
		{
			break;
		}
		else
		{
			b=0;
		}
		x++;
		
	}
	if(x<27){
	c=b;}
	else
	{
		c=0;
	}
	printf("%lld\n",c);
	return 0;
}

