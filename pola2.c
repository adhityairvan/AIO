#include<stdio.h>

int main()
{
	int input,i,a,b;
	
	scanf("%d",&input);
	for(a=1;a<=input;a++)
	{
		b=a;
		for(i=input-a;i>0;i--)
		{
			printf(" ");
		}
		while(b!=0)
		{
			printf("*");
			b--;
		}
		printf("\n");
	}	
return 0;
}
